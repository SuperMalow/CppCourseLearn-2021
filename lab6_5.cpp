#include <iostream>
using namespace std;
#include <string>

//����һ��Employee������������ֵ���ַ�����к��ʱ�
//change_name()�޸Ķ������֡�display()��ʾ������ַ���к��ʱ�
class Employee
{
private:
    string m_name;
    string streetAddress;
    int postCode;
    string m_city;
public:
    //�������ֵ����ʱࡢ����
    Employee(string name,string address,int code,string city);
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
    cout << "������ " << this->m_name << endl;
    cout << "���У� " << this->m_city << endl;
    cout << "�ֵ�:  " << this->streetAddress << endl;
    cout << "�ʱ�:  " << this->postCode << endl;
}

void test()
{
    Employee e1("����","���޶�·",00100,"�Ͼ�");
    e1.dispaly();
}

int main()
{
    test();

    system("pause");
    return 0;
}