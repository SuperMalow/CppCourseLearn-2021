#include <iostream>
#include <string>

using namespace std;
//���������Ϊ���ٴ�ѧϰthisָ���뿽�����캯��

class Person
{
private:
    
public:
    int m_age;
    Person(int age);
    ~Person();
    Person(const Person &p)
    {
        cout << "�������캯���ĵ���" << endl;
        this->m_age += 20;
        cout << "�������캯�������ֵΪ��" << this->m_age << endl;
    }
    Person PersonAddPerson(Person &p)
    {
        this->m_age += p.m_age;
        return *this;
    }
};

Person::Person(int age)
{
    this->m_age = age;
}

Person::~Person()
{
}

void test()
{
    Person p1(10);
    Person p2(10);
    p2.PersonAddPerson(p1).PersonAddPerson(p1).PersonAddPerson(p1);

    cout << "P2�������ǣ�" << p2.m_age << endl;
    cout << "P2�������ǣ�" << p1.m_age << endl;
    //cout << "P2�������ǣ�" << p2.m_age << endl;


}


int main()
{
    test();

    system("pause");
    return 0;
}