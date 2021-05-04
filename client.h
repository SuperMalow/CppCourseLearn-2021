#ifndef CLIENT_H //编译预处理
#define CLIENT_H
#include <string>

class Client{
    static char ServerName;
    static int ClientNum;

    public:
    void ChangServerName(char name);
    static int getClientNum();
};

#endif // 编译预处理