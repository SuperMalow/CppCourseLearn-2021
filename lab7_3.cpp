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
        cout << "��ʻ��" << endl;
    }
    void Stop()
    {
        cout << "ͣ������" << endl;
    }
    void setMaxSpeed(int maxspeed)
    {
        MaxSpeed = maxspeed;
        cout << "��ʻ����ٶ�Ϊ��" << MaxSpeed << endl;
    }
    void setWeight(int weight)
    {
        Weight =weight;
        cout << "���������Ϊ��" << Weight << endl;
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
        cout << "bicycle��HeightΪ��" << Height << endl;
    }
};

bicycle::bicycle(/* args */)
{
    cout << "bicycle�Ĺ��캯��" << endl;
}

bicycle::~bicycle()
{
    cout << "bicycle����������" << endl;
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
        cout << "motorcar��SeatNumΪ��" << SeatNum <<endl;
    }
};

motorcar::motorcar(/* args */)
{
    cout << "motorcar�Ĺ��캯��" << endl;
}

motorcar::~motorcar()
{
    cout << "motorcar����������" << endl;
}

void test01()
{
    bicycle b;
    motorcar m;
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
}



int main()
{
    test01();
    system("pause");
    return 0;
}