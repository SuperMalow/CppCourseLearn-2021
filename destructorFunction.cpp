#include <iostream>
#include <string>
#include <string.h>
using namespace std;

class Rabbit
{
private:
    string _name;
    char * _food;
public:
    Rabbit(string _name,const char * pf);
    ~Rabbit();
    void eat();
};

Rabbit::Rabbit(string _name,const char * pf)
{
    cout << "���ù��캯��" << endl;
    this->_name = _name;
    this->_food = new char[50];
    memset(this->_food,0,50);   //�����ǳ�ʼ��food�Ŀռ�
    strcpy(this->_food,pf);
}

Rabbit::~Rabbit()
{
    cout << "������������, ��������" << this->_name << endl;
    if (this->_food != NULL)
    {
        delete []this->_food; //�������������ʱ��Ҫdel��
        this->_food = NULL;
    }
}

void Rabbit::eat()
{
    cout << this->_name << "���ڳ�" << this->_food << endl;
}

int main()
{
    Rabbit A("С����A","�ܲ�");
    A.eat();
    Rabbit B("С����B","�ײ�");
    B.eat();

    system("pause");
    return 0;
}