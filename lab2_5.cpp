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
    cout << " ������ �� �� �� Сʱ �� ��" << endl;
    cin >> nTime.year;
    cin >> nTime.month;
    cin >> nTime.day;
    cin >> nTime.hours;
    cin >> nTime.min;
    cin >> nTime.scond;
}

void ShowInfo(dataTime nTime)
{
    cout << "���������Ϊ��"<<nTime.year <<endl;
    cout << "���������Ϊ��"<<nTime.month <<endl;
    cout << "���������Ϊ��"<<nTime.day <<endl;
    cout << "�������СʱΪ��"<<nTime.hours <<endl;
    cout << "������ķ�Ϊ��"<<nTime.min <<endl;
    cout << "���������Ϊ��"<<nTime.scond << endl;
}

void SystemTime()
{
    //ϵͳʱ��
    time_t S_Time = time(0);
    char* dt = ctime(&S_Time);
    cout <<"�������ں�ʱ�䣺"<< dt << endl;
    cout << "����system����" << endl;
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