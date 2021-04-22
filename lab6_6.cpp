#include <iostream>
using namespace std;

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
    Employee();
    void dispaly();
    void setInfo(string name,string address,int code,string city);
};

Employee::Employee()
:m_name("张三"),
streetAddress("柳洲东路站"),
postCode(010101),
m_city("南京")
{}
void Employee::setInfo(string name,string address,int code,string city)
{
    this->m_name = name;
    this->streetAddress = address;
    this->postCode = code;
    this->m_city = city;
    //return *this;
}

void Employee::dispaly()
{
    cout << "姓名： " << this->m_name << endl;
    cout << "城市： " << this->m_city << endl;
    cout << "街道:  " << this->streetAddress << endl;
    cout << "邮编:  " << this->postCode << endl;
}

void test()
{
    Employee *a = new Employee[2];
    a[0].setInfo("张三","学府路",010101,"南京市浦口区");
    a[1].setInfo("李四","应天大道",020202,"南京市");

    for (int i = 0; i < 2; i++)
    {
        a[i].dispaly();
    }
    delete[] a;
}


int mian()
{
    test();
    system("pause");
    return 0;
}