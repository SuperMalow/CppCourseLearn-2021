#include <iostream>
using namespace std;

//Ԫ��ֵ�ĶԵ�
void swap(int &a,int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
//��ʼת��
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
//�������
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
//����ĳ�ʼ����ת��
void matrixInit()
{
    //��ʼ��
    int matrix[3][3];
    cout << "������9������" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> matrix[i][j];
        }
    }
    //���һ�����������
    cout << "���������Ϊ��" << endl;
    ShowInfo(matrix);
    //��ʼת��
    matrixSpositon(matrix);
    //���ת�ú������
    cout << "ת�ú������Ϊ��" << endl;
    ShowInfo(matrix);
}

int main()
{
    matrixInit();
    system("pause");
    return 0;
}