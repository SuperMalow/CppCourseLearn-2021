#include <iostream>
#include <string>

using namespace std;

class Calculator
{
    //对象重载


public:
    int getResult(string oper)
    {
        if  (oper == "+")
        {
            return (m_num1 + m_num2);
        }
        else if (oper == "-")
        {
            return (m_num1 - m_num2);
        }
        else if (oper == "*")
        {
            return (m_num1 * m_num2);
        }
        else
        {
            return m_num1;
        }
    }
    int m_num1;
    int m_num2;

};

void test()
{
    Calculator c;
    c.m_num1 = 10;
    c.m_num2 = 20;

    cout << c.m_num1 << " + " << c.m_num2 << " = " << c.getResult("+") << endl; 
}


int main()
{

    test();
    system ("pause");
    return 0;
}