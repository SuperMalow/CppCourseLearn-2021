#include <iostream>
#include <string>
using namespace std;
/*
������ǳ����
�¶����ָ���Աָ��ԭ�ж����ָ��ָ��Ŀռ�
����û��Ϊ�¶��������µ��ڴ�ռ�
*/
class Sheep
{
private:
    string _name;
    string _color;
public:
    Sheep(string _name,string _color);
    Sheep(const Sheep&lingwai);
    ~Sheep();
    void eat();
};

Sheep::Sheep(string _name,string _color)
{
    this->_name = _name;
    this->_color = _color;
    cout << "������һ��" << this->_color << this->_name << endl;
}
Sheep::Sheep(const Sheep &lingwai)
{
    this->_color = lingwai._color;
    this->_name = lingwai._name;
    cout << "����������һ��" << lingwai._color << lingwai._name << endl;  
}
Sheep::~Sheep()
{
    cout << "��������һ��" << this->_color << this->_name << endl;
}
void Sheep::eat()
{
    cout << _color << _name << "���ڳԲ�" << endl; 
}

void test()
{
    Sheep mie1("������","��ɫ");
    mie1.eat();
    //cout << mie1
    Sheep mie2(mie1);
    mie2.eat();

}


int main()
{
    test();

    system("pause");
    return 0;
}