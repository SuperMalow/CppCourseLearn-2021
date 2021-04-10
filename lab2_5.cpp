#include <iostream>
#include <string>
#include <ctime>

using namespace std;

struct dataTime
{
    /* data */
    int year;
    int month;
    int day;
    int hours;
    int min;
    int scond;
};

void UserInput(dataTime &nTime)
{
    cout << " 请输入 年 月 日 小时 分 秒" << endl;
    cin >> nTime.year;
    cin >> nTime.month;
    cin >> nTime.day;
    cin >> nTime.hours;
    cin >> nTime.min;
    cin >> nTime.scond;
}

void ShowInfo(dataTime nTime)
{
    cout << "你输入的年为："<<nTime.year <<endl;
    cout << "你输入的月为："<<nTime.month <<endl;
    cout << "你输入的日为："<<nTime.day <<endl;
    cout << "你输入的小时为："<<nTime.hours <<endl;
    cout << "你输入的分为："<<nTime.min <<endl;
    cout << "你输入的秒为："<<nTime.scond << endl;
}

void SystemTime()
{
    //系统时间
    time_t S_Time = time(0);
    char* dt = ctime(&S_Time);
    cout <<"本地日期和时间："<< dt << endl;
    cout << "调用system函数" << endl;
    system("time");

}

int main(){

    dataTime NowTime;
    UserInput(NowTime);
    ShowInfo(NowTime);
    SystemTime();
    system("pause");
    return 0;
}