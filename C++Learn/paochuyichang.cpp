#include <iostream>
#include <string>
using namespace std;

//这是一个抛出类型char*异常的函数
int abnormal(int a, int b, int c)
{
    if (a <= 0 || b <= 0 || c <= 0)
    {
        throw "分母不能为0";
    }
    return a + b / c ;
}
int main()
{
    cout << abnormal(1,2,3) << endl;
    cout << abnormal(0,2,3) << endl;
    cout << abnormal(1,0,3) << endl;
    cout << abnormal(1,2,0) << endl;

    system("pause");
    return 0;
}