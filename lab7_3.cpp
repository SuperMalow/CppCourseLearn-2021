#include <iostream>

using namespace std;


class vehicle
{
private:
    int MaxSpeed;
    int Weight;
public:
    vehicle(/* args */);
    ~vehicle();
    void Run()
    {
        cout << "行驶中" << endl;
    }
    void Stop()
    {
        cout << "停下来了" << endl;
    }
    void setMaxSpeed(int maxspeed)
    {
        MaxSpeed = maxspeed;
        cout << "行驶最大速度为：" << MaxSpeed << endl;
    }
    void setWeight(int weight)
    {
        Weight =weight;
        cout << "车的最大宽度为：" << Weight << endl;
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


class bicycle:public virtual vehicle
{
private:
    /* data */
    int Height;
public:
    bicycle(/* args */);
    ~bicycle();
    void setHeight(int height)
    {
        Height = height;
        cout << "bicycle的Height为：" << Height << endl;
    }
};

bicycle::bicycle(/* args */)
{
    cout << "bicycle的构造函数" << endl;
}

bicycle::~bicycle()
{
    cout << "bicycle的析构函数" << endl;
}



class motorcar:public virtual vehicle
{
private:
    /* data */
    int SeatNum;
public:
    motorcar(/* args */);
    ~motorcar();
    void setSeatNum(int seatnum)
    {
        SeatNum = seatnum;
        cout << "motorcar的SeatNum为：" << SeatNum <<endl;
    }
};

motorcar::motorcar(/* args */)
{
    cout << "motorcar的构造函数" << endl;
}

motorcar::~motorcar()
{
    cout << "motorcar的析构函数" << endl;
}

class motorcycle:public virtual bicycle,public virtual motorcar
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
    bicycle b;
    motorcar m;
    motorcycle mc;
    cout << "bicycle: " << endl;
    b.setHeight(2);
    b.setWeight(1);
    b.Run();
    b.setMaxSpeed(60);
    b.Stop();
    cout << "motorcar: " << endl;
    m.setSeatNum(4);
    m.setWeight(3);
    m.Run();
    m.setMaxSpeed(220);
    m.Stop();
    cout << "motorcycle: " << endl;
    mc.setHeight(2);
    mc.setSeatNum(2);
    mc.setWeight(1);
    mc.Run();
    mc.setMaxSpeed(200);
    mc.Stop();

}



int main()
{
    test01();
    system("pause");
    return 0;
}