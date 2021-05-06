#include <iostream>

using namespace std;


class Animal
{
private:
    //int age;
public:
    Animal(/* args */);
    ~Animal();
    int age;
};

Animal::Animal(/* args */)
{
    cout << "Animal的构造函数" << endl;
}

Animal::~Animal()
{
    cout << "Animal的析构函数" << endl;
}

class dog:public Animal
{
private:
    /* data */
public:
    dog(/* args */);
    ~dog();
    void SetAge(int d_age)
    {
        age = d_age;
    }
    void disp()
    {
        cout << "Dog的年龄为: " << age << endl;

    }
};

dog::dog(/* args */)
{
    cout << "dog的构造函数" << endl;
}

dog::~dog()
{
    cout << "dog的析构函数" << endl;
}

void test01()
{
    dog d;
    d.SetAge(9);
    d.disp();
}


int main()
{
    test01();

    system("pause");
    return 0;
}