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
//�������
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
//����ĳ�ʼ��
void arrInit()
{
    //�ڶ�������һ���ڴ�
    int **arr = new int*[3];

    for (int i = 0; i < 3; i++)
    {
       arr[i] = new int[3];
    }
    cout << "������9������" << endl;
    for (int j = 0; j < 3; j++)
    {
        for (int jj = 0; jj < 3; jj++)
        {
            cin >> arr[j][jj];
        }
    }
    //���һ�������������
    cout << "���������Ϊ��" << endl;
    ShowInfo(arr);
    //��ʼת��
    arrSpositon(arr);
    //���ת�ú�Ľ��
    cout << "��̬�ڴ��������-->ת�ú�Ϊ��" << endl;
    ShowInfo(arr);
    delete[] arr;
}


int main()
{
    arrInit();
    system("pause");
    return 0;
}