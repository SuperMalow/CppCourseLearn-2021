#include <iostream>
using namespace std;
#include <string>

string strLianJie(string p1,string p2)
{
    return (p1+p2);
}

void test()
{
    string p1;
    string p2;
    cout << "�������һ���ַ�����" << endl;
    cin >> p1;
    cout << "����ĵ�һ���ַ�����СΪ��" << sizeof(p1) << endl;
    cout << "������ڶ����ַ�����" << endl;
    cin >> p2;
    cout << "����ĵڶ����ַ�����СΪ��" << sizeof(p2) << endl;
    cout << "���Ӻ���ַ���Ϊ:  " << strLianJie(p1,p2) << endl;
    cout << "���Ӻ���ַ�����СΪ:  " << sizeof(strLianJie(p1,p2)) << endl;
}

int main()
{
    test();

    system("pause");
    return 0;
}