#include <iostream>
#include <string>
using namespace std;
/*
这属于浅拷贝
新对象的指针成员指向原有对象的指针指向的空间
它并没有为新对象申请新的内存空间
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
    cout << "构造了一个" << this->_color << this->_name << endl;
}
Sheep::Sheep(const Sheep &lingwai)
{
    this->_color = lingwai._color;
    this->_name = lingwai._name;
    cout << "拷贝构造了一个" << lingwai._color << lingwai._name << endl;  
}
Sheep::~Sheep()
{
    cout << "析构掉了一个" << this->_color << this->_name << endl;
}
void Sheep::eat()
{
    cout << _color << _name << "正在吃草" << endl; 
}

void test()
{
    Sheep mie1("懒羊羊","白色");
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