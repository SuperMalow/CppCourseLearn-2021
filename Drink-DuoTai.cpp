#include <iostream>
#include <string>
using namespace std;

class AbstracDrink
{
    
public:
    //全部写成纯虚函数
    //烧水
    virtual void Boil() = 0 ;
    //冲泡
    virtual void Brew() = 0;
    //倒入杯中
    virtual void PourInCup() = 0;
    //加料
    virtual void AddSomething() = 0;

    void makeDrink()
    {
        Boil();
        Brew();
        PourInCup();
        AddSomething();
    }
};

class MlikTea :public AbstracDrink
{

public:
    //烧水
    virtual void Boil()
    {
        cout << "正在烧水" << endl;
    }
    //冲泡
    virtual void Brew()
    {
        cout << "正在冲泡茶叶" << endl;

    }
    //倒入杯中
    virtual void PourInCup()
    {
        cout << "正在导入奶茶杯" << endl;

    }
    //加料
    virtual void AddSomething()
    {
        cout << "正在加奶和糖" << endl;

    }
};


class cofee :public AbstracDrink
{

public:
    //烧水
    virtual void Boil()
    {
        cout << "正在烧水--用的是农夫山泉" << endl;
    }
    //冲泡
    virtual void Brew()
    {
        cout << "正在冲泡咖啡粉" << endl;

    }
    //倒入杯中
    virtual void PourInCup()
    {
        cout << "正在倒入咖啡杯" << endl;

    }
    //加料
    virtual void AddSomething()
    {
        cout << "正在拉花" << endl;

    }
};

void doWork(AbstracDrink * abs)
{
    abs->makeDrink();
    delete abs; //释放
}

void test()
{
    //咖啡
    doWork(new cofee);
    cout << endl;
    doWork(new MlikTea);
 
}


int main()
{

    test();

    system("pause");
    return 0;
}