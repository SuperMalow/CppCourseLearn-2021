#include <iostream>
using namespace std;


//编写并测试3*3矩阵转置函数，使用数组保存3*3矩阵
void matrixSpositon(int matri[][3])
{
    int Copymatri[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matri[i][j] = matri[i][j+1];
        }
        
    }
    

}


void test()
{
    int mtix[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << mtix[i][j] << "  ";
        }
        cout << endl;
    }
}

int main()
{
    test();

    system("pause");
    return 0;
}