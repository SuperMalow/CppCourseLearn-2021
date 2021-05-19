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
        cout << "vehile正在行驶中" << endl;
    }
    virtual void Stop()
    {
        cout << "vehile正在停止" << endl;
    }
};

vehicle::vehicle(/* args */)
{
    cout << "vehicle的构造函数" << endl;
}

vehicle::~vehicle()
{
    cout << "vehicle的析构函数" << endl;
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
        cout << "bicycle正在行驶中" << endl;
    }
    virtual void Stop()
    {
        cout << "bicycle正在停止" << endl;
    }
};

bicycle::bicycle(/* args */)
{
    cout << "bicycle构造函数" << endl;
}

bicycle::~bicycle()
{
    cout << "bicycle析构函数" << endl;
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
        cout << "motorcar正在行驶中" << endl;
    }
    virtual void Stop()
    {
        cout << "motorcar正在停止" << endl;
    }
};

motorcar::motorcar(/* args */)
{
    cout << "motorcar构造函数" << endl;
}

motorcar::~motorcar()
{
    cout << "motorcar析构函数" << endl;
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
        cout << "motorcycle正在行驶中" << endl;
    }
    virtual void Stop()
    {
        cout << "motorcycle正在停止" << endl;
    }
};

motorcycle::motorcycle(/* args */)
{
    cout << "motorcycle的构造函数" << endl;
}

motorcycle::~motorcycle()
{
    cout << "motorcycle的析构函数" << endl;
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
    

    //mc.Run();               //会报错
    //mc.Stop();              //会报错

    *p = b;
    p->Run();
    p->Stop();
    
    *p = m;
    p->Run();
    p->Stop();

    //*p = mc;                    //会报错

}

int main()
{
    test01();

    system("pause");
    return 0;
}