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
        cout << "dayTime-->���캯���ĵ���" << endl;
    }
    ~dayTime()
    {
        cout << "dayTime-->���������ĵ���" << endl;
    }
    //��Ա���Ե�����
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
    //��Ա���ԵĻ�ȡ
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
        cout << "People-->���캯���ĵ���" << endl;
    }
    People(int youcan)
    {

        cout << "People-->�вι��캯���ĵ���" << endl;
    }
    ~People()
    {
        cout << "People-->���������ĵ���" << endl;
    }
    People(const People &p)
    {
        cout << "People-->�������캯���ĵ���" << endl;
    }
    //People��ĳ�ʼ��
    void setPeopleNum()
    {
        cout << "��������Ա�ı�ţ�";
        cin >> number;
    }
    void setPeoplesex()
    {
        cout << "��������Ա���Ա�(1--ΪŮ 2--Ϊ��)��";
        cin >> sex;
    }
    void setPeopleBirthday()
    {
        int p_year, p_moth, p_day;
        cout << "��������Ա�ĳ���������ݣ�";
        cin >> p_year;
        britday.setBirthdayYear(p_year);
        cout << "��������Ա�ĳ��������·ݣ�";
        cin >> p_moth;
        britday.setBirthdayMoth(p_moth);
        cout << "��������Ա�ĳ����������ӣ�";
        cin >> p_day;
        britday.setBirthdayDay(p_day);
    }
    void setPeopleId()
    {
        cout << "��������Ա�����֤�ţ�";
        cin >> id;
    }
    //��Ա���Ե����
    void PeopleInofo()
    {
        cout << "��ţ�" << number << endl;
        cout << "�Ա�" << (sex == 1 ? "Ů" : "��") << endl;
        cout << "�������ڣ�" << britday.getBirthdayYear() << "-" << britday.getBirthdayMoth() << "-" << britday.getBirthdayDay() << endl;
        cout << "���֤��" << id << endl;
    }
    void setPeople(People &p)
    {
        p.setPeopleNum();
        p.setPeoplesex();
        p.setPeopleBirthday();
        p.setPeopleId();
    }
};
void test()
{
    //�鿴���ÿ������캯��
    People a1(2);
    People a2(a1);
}
int main()
{
    //test();
    People p;
    People p1(p);
    p.setPeople(p);
    p.PeopleInofo();
    system("pause");
    return 0;
}