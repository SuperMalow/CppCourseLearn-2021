#include <iostream>
#include <string>

using namespace std;
//这个程序是为了再次学习this指针与拷贝构造函数

class Person
{
private:
    
public:
    int m_age;
    Person(int age);
    ~Person();
    Person(const Person &p)
    {
        cout << "拷贝构造函数的调用" << endl;
        //this->m_age += 20;
        cout << "拷贝构造函数里面的值为：" << this->m_age << endl;
    }
    Person PersonAddPerson(Person &p) //这里的函数返回值没有加引用就是调用了拷贝构造函数
    {
        //如果加了引用就不会调用到拷贝构造函数
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

    //链式编程思想 类似 " << "
    p2.PersonAddPerson(p1).PersonAddPerson(p1).PersonAddPerson(p1);

    cout << "P2的年龄是：" << p2.m_age << endl;
    cout << "P2的年龄是：" << p1.m_age << endl;

}

int main()
{
    test();

    system("pause");
    return 0;
}