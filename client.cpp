#include <iostream>
#include <string>
#include "client.h"

void Client::ChangServerName(char name)
{
    Client::ServerName = name;
    Client::ClientNum ++;
}
int Client::getClientNum()
{
    return Client::ClientNum;
}

