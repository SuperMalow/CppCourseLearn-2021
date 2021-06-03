#include <iostream>
#include <string>
using namespace std;
#include <stack> //调用栈
#include <cmath>
#include <sstream>

template<class T>
void clearStack(stack<T> &s)
{
    //由于stl库里面的stack没有自带的清空栈，只能自己写一个
    s = stack<T>();
}

class Calculator
{
private:
    stack<double> s;    //操作栈
    void enter(double num);//将操作数num压栈
    bool getTwoOperands(double &opend1,double &opend2);
    void compute(char op);//操作符
public:
    void run();
    void clear();
};

void  Calculator::enter(double num)
{
    //将num压栈
    s.push(num);
}

bool Calculator::getTwoOperands(double &opend1,double &opend2)
{
    //弹栈两个操作数放在opend1和Opend2中 如果没有两个数则false
    if (s.empty())//如果s为空则返回真
    {
        //故打印错误信息
        cout << "丢失数据!" << endl;
        return false;
    }
    opend1 = s.top();   //弹栈 原本是s.pop()
    s.pop();
    if (s.empty())
    {
        cout << "丢失数据!" << endl;
        return false;
    }
    opend2 = s.top();
    s.pop();
    return true;    
}

void Calculator::compute(char op)
{
    //执行运算
    double operand1,operand2;
    bool result = getTwoOperands(operand1,operand2);
    if (result)
    {
        switch (op)
        {
        case '+':
            s.push(operand1 + operand2);
            break;
        case '-':
            s.push(operand1 - operand2);
            break;
        case '*':
            s.push(operand1 * operand2);
            break;
        case '/':
            if (operand1 == 0)
            {
                cout << "分母不能为 0 !" << endl;
                //清空栈
                clearStack(s);
                
            }
            else
            {
                s.push(operand2 / operand1);
            }
            break;
        case '^':
            s.push(pow(operand2,operand1));
            break;
        default:
            cout << "不能识别的操作符!" << endl;
            break;
        }
        cout << "=" << s.top() << " ";
    }
    else
    {
        clearStack(s);  //操作数不够，清理栈
    }
    
}
inline double stringToDouble(const string &str)
{
    //将字符串转换为实数，工具函数
    istringstream stream(str);  //字符串输入流
    double result;
    stream >> result;
    return result;
}

void Calculator::run()
{
    string str;
    while (cin >> str,str!="q")
    {
        switch (str[0])
        {
        case 'c':
            clearStack(s);
            break;
        case '-':
            if (str.size()>1)
            {
                enter(stringToDouble(str));
            }
            else
            {
                compute(str[0]);
            }
            break;
        case '+':
        case '*':
        case '/':
        case '^':
            compute(str[0]);
            break;
        default:
            enter(stringToDouble(str));     //读入操作数转换为整形后压栈
            break;
        }
    }
}

void Calculator::clear()
{
    clearStack(s);
}


int main()
{

    Calculator c;
    c.run();
    system("pause");
    return 0;
}