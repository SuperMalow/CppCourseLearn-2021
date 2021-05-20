#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class dataTime
{
private:
    int year;
    int moth;
    int day;
public:
    void setYear(int year)
    {
        this->year = year;
    }
    void setMoth(int moth)
    {
        this->moth = moth;
    }
    void setDay(int day)
    {
        this->day = day;
    }
    int getYear()
    {
        return year;
    }
    int getMoth()
    {
        return moth;
    }
    int getDay()
    {
        return day;
    }
};

class Person
{
private:
    int age;
    int number;     //���
    dataTime brithday;
    string name;
    string id;      //���֤��
public:
    void setPerson()
    {
        int number;
        string name;
        int age;
        dataTime brithday;
        string id;
        cout << "��������Ա��number��" ;
        cin >> number;
        this->number = number;
        cout << "��������Ա��name��" ;
        cin >> name;
        this->name = name;
        cout << "��������Ա��age��" ;
        cin >> age;
        this->age = age;
        cout << "��������Ա��year��" ;
        int year;
        cin >> year;
        this->brithday.setYear(year);
        cout << "��������Ա��moth��" ;
        int moth;
        cin >> moth;
        this->brithday.setMoth(moth);
        cout << "��������Ա��day��" ;
        int day;
        cin >> day;
        this->brithday.setDay(day);
        cout << "��������Ա��id��" ;
        cin >> id;
        this->id = id;
    }
    //���� ��� ���� ���� ���� ��ݺ����洢
    void saveInfor()
    {
        ofstream ofs("data.txt",ios::app);      //д������
        if (!ofs.is_open())
        {
            cout << "���ļ�ʧ�ܣ�" << endl;
            return ;
        }
        //��ʼд������
        ofs << this->number << "," 
        << this->name << ","
        << this->age << ","
        << this->brithday.getYear() << "-"
        << this->brithday.getMoth() << "-"
        << this->brithday.getDay() << ","
        << this->id << endl;
        ofs.close();        //д������Ҫ�ر��ļ�
    }
    void ShowInfor()
    {
        //չʾ��Ϣǰ��Ҫ���ļ����ж�ȡ
        ifstream ifs("data.txt",ios::in);       //��ȡ����
        if (!ifs.is_open())
        {
            cout << "���ļ�ʧ��" << endl;
            return ;
        }
        string P_data;
        while (getline(ifs,P_data))         //һ��һ�ж�ȡ����
        {
            cout << P_data << endl;
        }
        ifs.close();
        
        
        /*
        cout << "���: " << this->number << "  " 
        << "����: " << this->name << "  "
        << "����: " << this->age << "  "
        << "����: " << this->brithday.getYear()
        << "-" << this->brithday.getMoth()
        << "-" << this->brithday.getDay() << "  "
        << "���֤��: " << this->id << endl;
        */

    }
    bool operator==(Person &p1)
    {
        if (this->id == p1.id)
        {
            return true;
        }
        return false;
    }

    Person & operator=(Person &p1)
    {
        this->number = p1.number;
        this->age = p1.age;
        this->brithday = p1.brithday;
        this->id = p1.id;
        this->name = p1.name;
        return *this;
    }

};


void test01()
{
    Person p;
    p.setPerson();
    p.saveInfor();
    cout << "�������� p �ɹ�" << endl;
    p.ShowInfor();

    Person p1;
    p1.setPerson();
    p1.saveInfor();
    cout << "�������� p1 �ɹ�" << endl;    
    p1.ShowInfor();
    

    Person p2;
    p2 = p;
    cout << "�Ѷ��� p ��ֵ������ p2" << endl;
    cout << "�������� p2 �ɹ�" << endl;
    p2.ShowInfor();

    cout << " p == p2 :  " << bool(p == p2) << endl;
    cout << " p == p1 :  " << bool(p == p1) << endl;
}

int main()
{
    test01();

    system("pause");
    return 0;
}