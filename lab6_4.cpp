#include <iostream>
using namespace std;
#include <string>

string strLianJie(string p1,string p2)
{
    return (p1+p2);
}


int main()
{
    string c1 = "Hello";
    string c2 = "World";

    cout << strLianJie(c1,c2) << endl;

    system("pause");
    return 0;
}