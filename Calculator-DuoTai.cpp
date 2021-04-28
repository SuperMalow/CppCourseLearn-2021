#include <iostream>
#include <string>

using namespace std;

//真实开发 提倡开闭原则
//开闭原则，对扩展进行开发，对修改进行关闭。
//多态设计程序架构有利于后续的开发



//利用多态实现计算器
//实现计算器的抽象类别
class AbstractCalculator
{
private:
    /* data */
public:

    virtual int getResult()
    {
        return 0;
    }
    
    int m_Num1;
    int m_Num2;
};
//加法计算器
class AddCalculator :public AbstractCalculator
{
private:
public:
    int getResult()
    {
        return m_Num1 + m_Num2;
    }
};

//减法计算器
class SubCalculator :public AbstractCalculator
{
private:
    /* data */
public:
    int getResult()
    {
        return m_Num1 - m_Num2;
    }
};

//乘法计算器
class ChengCalculator :public AbstractCalculator
{
private:
public:
    int getResult()
    {
        return m_Num1 * m_Num2;
    }
}; 

//除法计算器
class ChuCalculator :public AbstractCalculator
{
private:
    
public:
    int getResult()
    {
        return m_Num1 / m_Num2;
    }
};



void test()
{
    AbstractCalculator *zhizhen = new AddCalculator;
    zhizhen->m_Num1 = 10;
    zhizhen->m_Num2 = 20;
    cout << zhizhen->m_Num1 << " + " << zhizhen->m_Num2 << " = " << zhizhen->getResult() << endl;
    delete zhizhen;

    zhizhen = new SubCalculator;
    zhizhen->m_Num1 = 50;
    zhizhen->m_Num2 = 20;
    cout << zhizhen->m_Num1 << " - " << zhizhen->m_Num2 << " = " << zhizhen->getResult() << endl;
    delete zhizhen;

    zhizhen = new ChengCalculator;
    zhizhen->m_Num1 = 1.5;
    zhizhen->m_Num2 = 20;
    cout << zhizhen->m_Num1 << " * " << zhizhen->m_Num2 << " = " << zhizhen->getResult() << endl;
    delete zhizhen;

    zhizhen = new ChuCalculator;
    zhizhen->m_Num1 = 600;
    zhizhen->m_Num2 = 20;
    cout << zhizhen->m_Num1 << " / " << zhizhen->m_Num2 << " = " << zhizhen->getResult() << endl;
    delete zhizhen;

}

int main()  
{

    test();
    system ("pause");
    return 0;
}