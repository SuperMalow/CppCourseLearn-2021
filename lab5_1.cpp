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
    cout << "开始！…… ……" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "在main函数里面定义的x和y" << endl;
    int x = 10, y = 20;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "在调用fn1函数的x和y" << endl;
    fn1();
    cout << "又回到了main函数里的x和y" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    system("pause");
    return 0;
}