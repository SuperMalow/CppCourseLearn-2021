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
void arrSpositon(int **arr)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
        
    }
}
//输出数组
void ShowInfo(int **arr)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }
    cout << endl;
}
//数组的初始化
void arrInit()
{
    //在堆区申请一块内存
    int **arr = new int*[3];

    for (int i = 0; i < 3; i++)
    {
       arr[i] = new int[3];
    }
    cout << "请输入9个整数" << endl;
    for (int j = 0; j < 3; j++)
    {
        for (int jj = 0; jj < 3; jj++)
        {
            cin >> arr[j][jj];
        }
    }
    //输出一边输入过的数组
    cout << "输入的数组为：" << endl;
    ShowInfo(arr);
    //开始转置
    arrSpositon(arr);
    //输出转置后的结果
    cout << "动态内存分配数组-->转置后为：" << endl;
    ShowInfo(arr);
    delete[] arr;
}


int main()
{
    arrInit();
    system("pause");
    return 0;
}