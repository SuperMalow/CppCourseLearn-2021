#include <iostream>
using namespace std;

//Ԫ��ֵ�ĶԵ�
void swap(int &a,int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int matrix[3][3];
    cout << "������9������" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> matrix[i][j];
        }
    }
    //���һ��
    cout << "����ģ�" <<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << "  " ;
        }
        cout << endl;
    }
    //ת��
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(matrix[i][j],matrix[j][i]);
        }
        
    }
    //���
    cout << "ת�õģ�" <<endl;
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