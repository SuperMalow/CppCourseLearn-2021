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
    cout << "BaseClass�Ĺ��캯��" << endl;
}

BaseClass::~BaseClass()
{
    cout << "BaseClass����������" << endl;
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
    cout << "DerivedClass�Ĺ��캯��" << endl;
}

DerivedClass::~DerivedClass()
{
    cout << "DerivedClass����������" << endl;
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