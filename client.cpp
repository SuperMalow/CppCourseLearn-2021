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
        cout << "�Ѹı�ServerName��ֵ" << endl;
    }
    void SetServerName(string s_name)
    {
        cout << "CLIENT�ĳ�ʼServerNameΪ��" << ServerName << endl;
        ServerName = s_name;
        cout << "CLIENT���޸�ServerNameΪ��" << ServerName << endl;
    }
};

CLIENT::CLIENT(/* args */)
{
    cout << "CLIENT ---> ���캯���ĵ���" << endl;
    ServerName = "centos7--�޲�";
    //ClientNum++;
}
CLIENT::CLIENT(int a)
{
    cout << "CLIENT ---> �в����������ĵ���" << endl;
    ServerName = "centos7--�в�";
    //ClientNum++;
}

CLIENT::~CLIENT()
{
    cout << "CLIENT ---> ���������ĵ���" << endl;
}
