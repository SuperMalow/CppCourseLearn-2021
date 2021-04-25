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

int main()
{
    char p1[] = "Hello";
    char p2[] = "World";
    strLianJie(p1,p2);
    cout << p1 << endl;
    return 0;
}