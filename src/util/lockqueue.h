#ifndef __LOCKQUEUE_H__
#define __LOCKQUEUE_H__
#include <condition_variable>
#include <mutex>
#include <thread>
#include <queue>

template <typename T>
class LockQueue
{
public:
    void push(const T& data)
    {
        std::lock_guard<std::mutex> lck(m_mtx);
        m_queue.push(data);
        m_cond.notify_one();
    }
    T pop()
    {
        std::unique_lock<std::mutex> lck(m_mtx);
        while(m_queue.empty())
        {
            m_cond.wait(lck);
        }
        T data = m_queue.front();
        m_queue.pop();
        return data;
    }

private:
    std::mutex m_mtx;
    std::condition_variable m_cond;
    std::queue<T> m_queue;
};




#endif