#include <iostream>
#include <string>
using namespace std;

class AbstracDrink
{
    
public:
    //ȫ��д�ɴ��麯��
    //��ˮ
    virtual void Boil() = 0 ;
    //����
    virtual void Brew() = 0;
    //���뱭��
    virtual void PourInCup() = 0;
    //����
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
    //��ˮ
    virtual void Boil()
    {
        cout << "������ˮ" << endl;
    }
    //����
    virtual void Brew()
    {
        cout << "���ڳ��ݲ�Ҷ" << endl;

    }
    //���뱭��
    virtual void PourInCup()
    {
        cout << "���ڵ����̲豭" << endl;

    }
    //����
    virtual void AddSomething()
    {
        cout << "���ڼ��̺���" << endl;

    }
};


class cofee :public AbstracDrink
{

public:
    //��ˮ
    virtual void Boil()
    {
        cout << "������ˮ--�õ���ũ��ɽȪ" << endl;
    }
    //����
    virtual void Brew()
    {
        cout << "���ڳ��ݿ��ȷ�" << endl;

    }
    //���뱭��
    virtual void PourInCup()
    {
        cout << "���ڵ��뿧�ȱ�" << endl;

    }
    //����
    virtual void AddSomething()
    {
        cout << "��������" << endl;

    }
};

void doWork(AbstracDrink * abs)
{
    abs->makeDrink();
    delete abs; //�ͷ�
}

void test()
{
    //����
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