#include <iostream>
using namespace std;


class MyInteger
{
    friend ostream & operator<<(ostream& cout,MyInteger myint);
private:
    int m_Num;
public:
    MyInteger(/* args */);
    //重载前置++运算符
    MyInteger& operator++()
    {   //先进行++在返回自身
        m_Num++; 
        return *this;
    }

    //重载后置++运算符
    MyInteger operator++(int) //编译器认为是后置 int代表占位参数
    {
        //先记录当前结果，
        MyInteger temp = *this;
        //再递增
        m_Num ++;

        //再返回结果
        return temp;
    }

    //重载前置--运算符
    MyInteger& operator--()
    {
        m_Num --;
        return *this;
    }

    //重载后置--运算符
    MyInteger operator--(int)
    {
        //先记录当前结果
        MyInteger temp = *this;
        //再进行运算
        m_Num --;
        return temp;
    }


};

MyInteger::MyInteger(/* args */)
{
    m_Num = 0;
}

//重载左移运算符
ostream & operator<<(ostream& cout,MyInteger myint)
{
    cout << myint.m_Num;
    return cout;
}



void test()
{

    MyInteger myint;

    cout << myint << endl;
    cout << myint ++ << endl;

    cout << ++ myint << endl;

    cout << myint << endl;

    cout << myint-- << endl;
    cout << --myint << endl;
     
}

int main()
{

    test();

    system("pause");
    return 0;
}