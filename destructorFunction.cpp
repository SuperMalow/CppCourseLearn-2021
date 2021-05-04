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
    cout << "调用构造函数" << endl;
    this->_name = _name;
    this->_food = new char[50];
    memset(this->_food,0,50);   //这里是初始化food的空间
    strcpy(this->_food,pf);
}

Rabbit::~Rabbit()
{
    cout << "调用析构函数, 析构掉了" << this->_name << endl;
    if (this->_food != NULL)
    {
        delete []this->_food; //创建完最后销毁时需要del掉
        this->_food = NULL;
    }
}

void Rabbit::eat()
{
    cout << this->_name << "正在吃" << this->_food << endl;
}

int main()
{
    Rabbit A("小白兔A","萝卜");
    A.eat();
    Rabbit B("小白兔B","白菜");
    B.eat();

    system("pause");
    return 0;
}