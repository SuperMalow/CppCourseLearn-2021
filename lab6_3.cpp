#include <iostream>
using namespace std;

//���ʵ�������ַ��������ӡ�(��д)
char* strLianJie(char *p1,char *p2)
{
    int i = 0,j = 0;
    while (p1[i] != '\0')
    {
        i++;
    }
    while (p2[j] != 0)
    {
        p1[i] = p2[j];
        i++;
        j++;
    }
    p1[i] = '\0';
    return p1;
}

void test()
{
    char p1[100];
    char p2[50];
    cout << "�������һ���ַ�����" << endl;
    cin >> p1;
    cout << "������ڶ����ַ�����" << endl;
    cin >> p2;
    strLianJie(p1,p2);
    cout << "���Ӻ���ַ���Ϊ:  " << p1 << endl;

}

int main()
{
    test();
    system("pause");
    return 0;
}