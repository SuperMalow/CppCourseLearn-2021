#include <iostream>
using namespace std;
#include <string>

//声明一个Employee类包括姓名、街道地址、城市和邮编
//change_name()修改对象名字、display()显示姓名地址城市和邮编
class Employee
{
private:
    string m_name;
    string streetAddress;
    int postCode;
    string m_city;
public:
    //姓名、街道、邮编、城市
    Employee(string name,string address,int code,string city);
    void chang_name(string name);
    void dispaly();
};

Employee::Employee(string name,string address,int code,string city)
:m_name(name),
streetAddress(address),
postCode(code),
m_city(city)
{}

void Employee::dispaly()
{
    cout << "姓名： " << this->m_name << endl;
    cout << "城市： " << this->m_city << endl;
    cout << "街道:  " << this->streetAddress << endl;
    cout << "邮编:  " << this->postCode << endl;
}
void Employee::chang_name(string name)
{
    this->m_name = name;

}

void test()
{
    Employee e1("张三","柳洲东路",00100,"南京");
    e1.dispaly();
    e1.chang_name("李四");
    cout << "------修改后------" << endl;
    e1.dispaly();
}   

int main()
{
    test();

    system("pause");
    return 0;
}