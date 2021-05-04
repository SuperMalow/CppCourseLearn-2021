#include <iostream>
using namespace std;

//编程实现两个字符串的连接。(手写)
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
    cout << "请输入第一个字符串：" << endl;
    cin >> p1;
    cout << "请输入第二个字符串：" << endl;
    cin >> p2;
    strLianJie(p1,p2);
    cout << "连接后的字符串为:  " << p1 << endl;

}

int main()
{
    test();
    system("pause");
    return 0;
}