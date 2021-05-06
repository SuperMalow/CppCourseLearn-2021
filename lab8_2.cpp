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
        cout << "vehile正在行驶中" << endl;
    }
    void Stop()
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

    //mc.Run();               //会报错
    //mc.Stop();              //会报错

}

int main()
{
    test01();

    system("pause");
    return 0;
}