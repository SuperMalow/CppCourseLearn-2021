#include <iostream>
#include <string>
using namespace std;

class CLIENT
{
private:
    /* data */
    string  ServerName;
    static int ClientNum;
public:
    CLIENT(/* args */);
    CLIENT(int a);
    ~CLIENT();
    void ChangeServerName(string & name)
    {
        ServerName = name;
        cout << "已改变ServerName的值" << endl;
    }
    void SetServerName(string s_name)
    {
        cout << "CLIENT的初始ServerName为：" << ServerName << endl;
        ServerName = s_name;
        cout << "CLIENT的修改ServerName为：" << ServerName << endl;
    }
};

CLIENT::CLIENT(/* args */)
{
    cout << "CLIENT ---> 构造函数的调用" << endl;
    ServerName = "centos7--无参";
    //ClientNum++;
}
CLIENT::CLIENT(int a)
{
    cout << "CLIENT ---> 有参析构函数的调用" << endl;
    ServerName = "centos7--有参";
    //ClientNum++;
}

CLIENT::~CLIENT()
{
    cout << "CLIENT ---> 析构函数的调用" << endl;
}
