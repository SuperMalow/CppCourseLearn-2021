#include <iostream>

using namespace std;


class vehicle
{
private:
    /* data */
public:
    vehicle(/* args */);
    ~vehicle();
    void Run()
    {
        cout << "vehile������ʻ��" << endl;
    }
    void Stop()
    {
        cout << "vehile����ֹͣ" << endl;
    }
};

vehicle::vehicle(/* args */)
{
    cout << "vehicle�Ĺ��캯��" << endl;
}

vehicle::~vehicle()
{
    cout << "vehicle����������" << endl;
}


class bicycle:public vehicle
{
private:
    /* data */
public:
    bicycle(/* args */);
    ~bicycle();
};

bicycle::bicycle(/* args */)
{
    cout << "bicycle���캯��" << endl;
}

bicycle::~bicycle()
{
    cout << "bicycle��������" << endl;
}


class motorcar:public vehicle
{
private:
    /* data */
public:
    motorcar(/* args */);
    ~motorcar();
};

motorcar::motorcar(/* args */)
{
    cout << "motorcar���캯��" << endl;
}

motorcar::~motorcar()
{
    cout << "motorcar��������" << endl;
}


class motorcycle:public bicycle,public motorcar
{
private:
    /* data */
public:
    motorcycle(/* args */);
    ~motorcycle();
};

motorcycle::motorcycle(/* args */)
{
    cout << "motorcycle�Ĺ��캯��" << endl;
}

motorcycle::~motorcycle()
{
    cout << "motorcycle����������" << endl;
}


void test01()
{
    vehicle v;
    bicycle b;
    motorcar m;
    motorcycle mc;

    v.Run();
    v.Stop();

    b.Run();
    b.Stop();

    m.Run();
    m.Stop();

    //mc.Run();               //�ᱨ��
    //mc.Stop();              //�ᱨ��

}

int main()
{
    test01();

    system("pause");
    return 0;
}