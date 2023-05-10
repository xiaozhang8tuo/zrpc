#ifndef __ZRPC_CONFIG_H__
#define __ZRPC_CONFIG_H__
#include <string>
#include <unordered_map>


class ZprpcConfig
{
public:
    // 解析加载配置文件
    void LoadConfigFile(const char* config_file);
    // 查询配置项信息
    std::string Load(const std::string &key);

private:
    std::unordered_map<std::string, std::string> m_configMap;
    //
    void Trim(std::string& src_buf);
};
#endif