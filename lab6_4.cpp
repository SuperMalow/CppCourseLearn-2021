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
    cout << "请输入第一个字符串：" << endl;
    cin >> p1;
    cout << "输入的第一个字符串大小为：" << sizeof(p1) << endl;
    cout << "请输入第二个字符串：" << endl;
    cin >> p2;
    cout << "输入的第二个字符串大小为：" << sizeof(p2) << endl;
    cout << "连接后的字符串为:  " << strLianJie(p1,p2) << endl;
    cout << "连接后的字符串大小为:  " << sizeof(strLianJie(p1,p2)) << endl;
}

int main()
{
    test();

    system("pause");
    return 0;
}