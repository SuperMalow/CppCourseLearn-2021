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
    cout << "Animal�Ĺ��캯��" << endl;
}

Animal::~Animal()
{
    cout << "Animal����������" << endl;
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
        cout << "Dog������Ϊ: " << age << endl;

    }
};

dog::dog(/* args */)
{
    cout << "dog�Ĺ��캯��" << endl;
}

dog::~dog()
{
    cout << "dog����������" << endl;
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