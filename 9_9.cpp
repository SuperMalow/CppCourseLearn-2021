#include <iostream>
#include <string>
using namespace std;
#include <stack> //����ջ
#include <cmath>
#include <sstream>

template<class T>
void clearStack(stack<T> &s)
{
    //����stl�������stackû���Դ������ջ��ֻ���Լ�дһ��
    s = stack<T>();
}

class Calculator
{
private:
    stack<double> s;    //����ջ
    void enter(double num);//��������numѹջ
    bool getTwoOperands(double &opend1,double &opend2);
    void compute(char op);//������
public:
    void run();
    void clear();
};

void  Calculator::enter(double num)
{
    //��numѹջ
    s.push(num);
}

bool Calculator::getTwoOperands(double &opend1,double &opend2)
{
    //��ջ��������������opend1��Opend2�� ���û����������false
    if (s.empty())//���sΪ���򷵻���
    {
        //�ʴ�ӡ������Ϣ
        cout << "��ʧ����!" << endl;
        return false;
    }
    opend1 = s.top();   //��ջ ԭ����s.pop()
    s.pop();
    if (s.empty())
    {
        cout << "��ʧ����!" << endl;
        return false;
    }
    opend2 = s.top();
    s.pop();
    return true;    
}

void Calculator::compute(char op)
{
    //ִ������
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
                cout << "��ĸ����Ϊ 0 !" << endl;
                //���ջ
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
            cout << "����ʶ��Ĳ�����!" << endl;
            break;
        }
        cout << "=" << s.top() << " ";
    }
    else
    {
        clearStack(s);  //����������������ջ
    }
    
}
inline double stringToDouble(const string &str)
{
    //���ַ���ת��Ϊʵ�������ߺ���
    istringstream stream(str);  //�ַ���������
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
            enter(stringToDouble(str));     //���������ת��Ϊ���κ�ѹջ
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