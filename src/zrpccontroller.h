#ifndef __ZRPC_CONTROLLER_H__
#define __ZRPC_CONTROLLER_H__
#include <google/protobuf/service.h>
#include <string>

class ZrpcController : public google::protobuf::RpcController
{
public:
    ZrpcController();

    // Client-side methods ---------------------------------------------
    void Reset() override;
    bool Failed() const override;
    std::string ErrorText() const override;
    void StartCancel() override;

    // Server-side methods ---------------------------------------------
    void SetFailed(const std::string &reason) override;
    bool IsCanceled() const override;
    void NotifyOnCancel(google::protobuf::Closure *callback) override;

private:
    bool m_failed;         // RPC方法执行过程中的状态
    std::string m_errText; // RPC方法执行过程中的错误信息
};
#endif