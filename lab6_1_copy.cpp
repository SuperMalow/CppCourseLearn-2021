#include <iostream>
using namespace std;

//元素值的对调
void swap(int &a,int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int matrix[3][3];
    cout << "请输入9个整数" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> matrix[i][j];
        }
    }
    //输出一次
    cout << "输入的：" <<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << "  " ;
        }
        cout << endl;
    }
    //转置
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(matrix[i][j],matrix[j][i]);
        }
        
    }
    //输出
    cout << "转置的：" <<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << "  "  ;
        }
        cout << endl;
    }
    system("pause");
    return 0;
}