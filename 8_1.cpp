#include <iostream>
#include <string>

using namespace std;

class Clock
{
private:
    int hour;
    int minute;
    int second;
public:
    Clock(int hour = 0,int minute = 0, int second = 0);
    Clock& operator++();
    Clock operator++(int);
    void showTime() const;
    ~Clock();
    
};

Clock::Clock(int hour,int minute, int second)
{
    if (0 <= hour && hour < 24 && 0 <= minute && minute < 60 
    && 0 <= second && second < 60)
    {
        this->hour = hour;
        this->minute = minute;
        this->second = second;
    }
    else
    {
        cout << "时间错误" << endl;
    }
}

Clock::~Clock()
{
    cout << "已调用析构函数，对象被析构掉了" << endl;
}

Clock& Clock::operator++()   //前置++
{
    second ++;
    if  (second >= 60)
    {
        second -= 60;
        minute++;
        if (minute >= 60)
        {
            minute -= 60;
            hour = (hour + 1 ) % 24;
        }
    }
    return *this;
}   


Clock Clock::operator++(int)  //后置 int为占位
{
    Clock old = *this;
    ++(*this);
    return old;
}
    

void Clock::showTime() const
{
    cout << hour << " : " << minute << " : " << second << endl;
}

int main()
{
    Clock z1(23,59,59);
    cout << "一开始的时间:" << endl;
    z1.showTime();

    cout << "进行后置 ++ " << endl;
    z1 ++ ;
    z1.showTime();


    cout << "进行前置 ++ "<< endl;
    ++ z1;
    

    cout << "进行 ++ i = ++ i "<< endl;
    ++z1 = ++z1; 
    z1.showTime();

    system("pause");
    return 0;
}