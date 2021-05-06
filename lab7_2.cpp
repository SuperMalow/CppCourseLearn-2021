#include <iostream>

using namespace std;

class BaseClass
{
private:
    /* data */
    int Number;
public:
    BaseClass(/* args */);
    ~BaseClass();
};

BaseClass::BaseClass(/* args */)
{
    cout << "BaseClass的构造函数" << endl;
}

BaseClass::~BaseClass()
{
    cout << "BaseClass的析构函数" << endl;
}

class DerivedClass:public BaseClass
{
private:
    /* data */
public:
    DerivedClass(/* args */);
    ~DerivedClass();
};

DerivedClass::DerivedClass(/* args */)
{
    cout << "DerivedClass的构造函数" << endl;
}

DerivedClass::~DerivedClass()
{
    cout << "DerivedClass的析构函数" << endl;
}

void test01()
{
    DerivedClass dc;
    

}




int main()
{
    test01();

    system("pause");
    return 0;
}