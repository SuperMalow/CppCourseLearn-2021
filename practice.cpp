#include <iostream>
#include <string>
#include <ctime>
using namespace std;



class Bank
{
private:
    string _id;
    time_t _now;
    int _money;
    char* datenow;
public:

    void mkdirAccount(string _id,int _moeny);
    void saveMoney(int _money);
    void delMoney(int _money);
    string getId();
    void setData();
    int getMoeny();
    char * getTime();
};

void Bank::mkdirAccount(string _id, int _money)
{
    this->_id = _id;
    this->_money = _money;
    setData();
}

void Bank::saveMoney(int _money)
{
    this->_money += _money;
    setData();
}

void Bank::delMoney(int _money)
{
    this->_money -= _money;
    setData();
}

void Bank::setData()
{
    this->_now = time(0);
    char * dt = ctime(&this->_now);
    this->datenow = dt;
}

string Bank::getId()
{
    return this->_id;
}

int Bank::getMoeny()
{
    return this->_money;
}

char * Bank::getTime()
{
    return this->datenow;
}

void test()
{
    Bank b1;
    b1.mkdirAccount("存钱01号",2000);
    b1.saveMoney(200);
    b1.delMoney(100);
    b1.delMoney(50);
    cout << b1.getId() << "\n余额为：" 
    << b1.getMoeny() << "\n时间为："
    << b1.getTime() << endl;

}

int main()
{
    test();
    system("pause");
    return 0;
}