#include <iostream>
#include "client.h"
#include "client.cpp"
using namespace std;
#include <string>

int Client::ClientNum = 0;
char Client::ServerName = 'a';

int main()
{
    Client c1;
    c1.ChangServerName('a');
    cout << c1.getClientNum() << endl;
    Client c2;
    c2.ChangServerName('b');
    cout << c2.getClientNum() << endl;
    
    system("pause");
    return 0;
}