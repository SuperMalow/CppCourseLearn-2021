#include <iostream>
#include <ctime>
#include <string>
using namespace std;

class dayTime
{
private:
    int year;
    int moth;
    int day;
public:
    dayTime()
    {
        cout << "dayTime-->构造函数的调用" << endl;
    }
    ~dayTime()
    {
        cout << "dayTime-->析构函数的调用" << endl;
    }
    //成员属性的设置
    void setBirthdayYear(int y)
    {
        year = y;
    }
    void setBirthdayMoth(int m)
    {
        moth = m;
    }
    void setBirthdayDay(int d)
    {
        day = d;
    }
    //成员属性的获取
    int getBirthdayYear()
    {
        return year;
    }
    int getBirthdayMoth()
    {
        return moth;
    }
    int getBirthdayDay()
    {
        return day;
    }
};



class People
{
private:
    string number;
    bool sex;
    dayTime britday;
    string id; 
public:
    People(/* args */)
    {
        cout << "People-->构造函数的调用" << endl;
    }
    ~People()
    {
        cout << "People-->析构函数的调用" << endl;
    }
    //People类的初始化
    void setPeopleNum()
    {
        cout << "请输入人员的编号：" ;
        cin >> number;
    }
    void setPeoplesex()
    {
        cout << "请输入人员的性别(1--为女 2--为男)：" ;
        cin >> sex;
    }
    void setPeopleBirthday()
    {
        int p_year,p_moth,p_day;
        cout << "请输入人员的出生日期年份：" ;
        cin >> p_year;
        britday.setBirthdayYear(p_year);
        cout << "请输入人员的出生日期月份：" ;
        cin >> p_moth;
        britday.setBirthdayMoth(p_moth);
        cout << "请输入人员的出生日期日子：" ;
        cin >> p_day;
        britday.setBirthdayDay(p_day);
    }
    void setPeopleId()
    {
        cout << "请输入人员的身份证号：";
        cin >> id;
    }
    //成员属性的输出
    void PeopleInofo()
    {
        cout << "编号：" << number << endl;
        cout << "性别：" << (sex==1?"女":"男") << endl;
        cout << "出生日期：" << britday.getBirthdayYear() << "-" <<
        britday.getBirthdayMoth() << "-" <<
        britday.getBirthdayDay() << endl;
        cout << "身份证：" << id << endl;
    }
    void setPeople(People &p)
    {
        p.setPeopleNum();
        p.setPeoplesex();
        p.setPeopleBirthday();
        p.setPeopleId();
    }

};

int main(){
    People p;
    p.setPeople(p);
    p.PeopleInofo();

    system("pause");
    return 0;
}