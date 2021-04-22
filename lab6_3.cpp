#include <iostream>
using namespace std;

//编程实现两个字符串的连接。(手写)
void strLianJie(char *p1,char *p2)
{
    int len1 = sizeof(p1) / sizeof(char);
    int len2 = sizeof(p2) / sizeof(char);
    char temp[len1+len2];
    for (int i = 0; i < len1; i++)
    {
        temp[i] = p1[i];
    }
    for (int  j = 0; j < len2; j++)
    {
        temp[j] = p2[j];
    }
    
    //return temp;
}


int main()
{
    char p1[] = "Hello";
    char p2[] = "World";
    strLianJie(p1,p2);

    system("pause");
    return 0;
}