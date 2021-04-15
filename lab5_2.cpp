#include <iostream>
#include "client.h"
using namespace std;

int main()
{
    CLIENT cl(3);
    CLIENT c2;
    cl.SetServerName("os--有参");
    c2.SetServerName("os--无参");
    
    system("pause");
    return 0;
}