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
    void showTime() const
    {
        cout << hour << " : " << minute << " : " << second << " : " << endl;
    }
    ~Clock();
    Clock& operator++()
    {
        //前置
        second ++;
        if  (second >= 60)
        {
            second -= 60;
            minute++;
            if (minute)
            {
                minute -= 60;
                hour = (hour + 1 ) % 24;
            }
        }
        return *this;
    }     
    Clock operator++(int)  //后置
    {
        Clock old = *this;
        ++(*this);
        return old;
    }
    
};

Clock::Clock(int hour,int minute, int second)
{
    if (0 <= hour && hour <24 && 0<=minute && minute <60 && 0<= second && second<60)
    {
        this->hour = hour;
        this->minute = minute;
        this->second = second;
    }
    else
    cout << "时间错误" << endl;

}

Clock::~Clock()
{
    cout << "已调用析构函数，对象被析构掉了" << endl;
}


int main()
{
    Clock z1(22,57,57);
    cout << "一开始的时间:" << endl;
    z1.showTime();
    ++z1 = ++z1;
    cout << "前置 ++ "<< endl;
    z1.showTime();
    cout << "后置 ++ " << endl;
    z1 ++ ;
    z1.showTime();

    system("pause");
    return 0;
}