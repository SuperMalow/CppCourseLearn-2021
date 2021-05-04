#include <iostream>
using namespace std;

//元素值的对调
void swap(int &a,int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
//开始转置
void matrixSpositon(int matrix[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(matrix[i][j],matrix[j][i]);
        }
    }
}
//输出数组
void ShowInfo(int matrix[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << "  ";
        }
        cout << endl;
    }
}
//数组的初始化与转置
void matrixInit()
{
    //初始化
    int matrix[3][3];
    cout << "请输入9个整数" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> matrix[i][j];
        }
    }
    //输出一遍输入的数组
    cout << "输入的数组为：" << endl;
    ShowInfo(matrix);
    //开始转置
    matrixSpositon(matrix);
    //输出转置后的数组
    cout << "转置后的数组为：" << endl;
    ShowInfo(matrix);
}

int main()
{
    matrixInit();
    system("pause");
    return 0;
}