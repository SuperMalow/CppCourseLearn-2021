#include <iostream>

using namespace std;


class vehicle
{
private:
    /* data */
public:
    vehicle(/* args */);
    ~vehicle();
    virtual void Run()
    {
        cout << "vehile������ʻ��" << endl;
    }
    virtual void Stop()
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
    virtual void Run()
    {
        cout << "bicycle������ʻ��" << endl;
    }
    virtual void Stop()
    {
        cout << "bicycle����ֹͣ" << endl;
    }
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
    virtual void Run()
    {
        cout << "motorcar������ʻ��" << endl;
    }
    virtual void Stop()
    {
        cout << "motorcar����ֹͣ" << endl;
    }
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
    virtual void Run()
    {
        cout << "motorcycle������ʻ��" << endl;
    }
    virtual void Stop()
    {
        cout << "motorcycle����ֹͣ" << endl;
    }
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
    //vehicle v;
    vehicle *p;
    bicycle b;
    motorcar m;
    motorcycle mc;
    
    // v.Run();
    // v.Stop();

    // b.Run();
    // b.Stop();

    // m.Run();
    // m.Stop();
    

    //mc.Run();               //�ᱨ��
    //mc.Stop();              //�ᱨ��

    *p = b;
    p->Run();
    p->Stop();
    
    *p = m;
    p->Run();
    p->Stop();

    //*p = mc;                    //�ᱨ��

}

int main()
{
    test01();

    system("pause");
    return 0;
}