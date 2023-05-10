#include "zrpcconfig.h"
#include <iostream>


// 解析加载配置文件
void ZprpcConfig::LoadConfigFile(const char* config_file)
{
    FILE *pf = fopen(config_file, "r");
    if (nullptr == pf)
    {
        std::cout << config_file << " is note exist!" << std::endl;
        exit(EXIT_FAILURE);
    }
    // 1.注释   2.正确的配置项 =    \n   3.去掉开头的多余的空格 
    while(!feof(pf))
    {
        char buf[512] = {0};
        fgets(buf, 512, pf);

        //去掉字符串前面多余的空格
        std::string read_buf(buf);
        Trim(read_buf);

        if (read_buf[0] == '#' || read_buf.empty())
            continue;

        int idx = read_buf.find('=');
        if (idx == -1)
            continue;

        std::string key;
        std::string value;

        key = read_buf.substr(0, idx);
        Trim(key);

        int endidx = read_buf.find('\n', idx);
        value = read_buf.substr(idx+1, endidx-idx-1);
        Trim(value);
        m_configMap.insert({key, value});
    }
    fclose(pf);
}

// 查询配置项信息
std::string ZprpcConfig::Load(const std::string &key)
{
    auto iter = m_configMap.find(key);
    if (iter == m_configMap.end())
    {
        return "";
    }
    return iter->second;
}

// 去掉字符串前后的空格
void ZprpcConfig::Trim(std::string& src_buf)
{
    //去除左空格
    int idx = src_buf.find_first_not_of(' ');
    if (idx != -1)
    {
        src_buf = src_buf.substr(idx, src_buf.size()-idx);
    }

    //去除右空格
    idx = src_buf.find_last_not_of(' ');
    if (idx != -1)
    {
        src_buf = src_buf.substr(0, idx+1);
    }
}