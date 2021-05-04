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
        cout << "ʱ�����" << endl;
    }
}

Clock::~Clock()
{
    cout << "�ѵ�������������������������" << endl;
}

Clock& Clock::operator++()   //ǰ��++
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


Clock Clock::operator++(int)  //���� intΪռλ
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
    cout << "һ��ʼ��ʱ��:" << endl;
    z1.showTime();

    cout << "���к��� ++ " << endl;
    z1 ++ ;
    z1.showTime();


    cout << "����ǰ�� ++ "<< endl;
    ++ z1;
    

    cout << "���� ++ i = ++ i "<< endl;
    ++z1 = ++z1; 
    z1.showTime();

    system("pause");
    return 0;
}