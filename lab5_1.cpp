#include <iostream>
#include <string>
using namespace std;
int x = 1, y = 2;

void fn1()
{
    int y = 200;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
}

int main()
{
    cout << "��ʼ������ ����" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "��main�������涨���x��y" << endl;
    int x = 10, y = 20;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "�ڵ���fn1������x��y" << endl;
    fn1();
    cout << "�ֻص���main�������x��y" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    system("pause");
    return 0;
}