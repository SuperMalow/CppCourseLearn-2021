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
    int number;     //编号
    dataTime brithday;
    string name;
    string id;      //身份证号
public:
    void setPerson()
    {
        int number;
        string name;
        int age;
        dataTime brithday;
        string id;
        cout << "请输入人员的number：" ;
        cin >> number;
        this->number = number;
        cout << "请输入人员的name：" ;
        cin >> name;
        this->name = name;
        cout << "请输入人员的age：" ;
        cin >> age;
        this->age = age;
        cout << "请输入人员的year：" ;
        int year;
        cin >> year;
        this->brithday.setYear(year);
        cout << "请输入人员的moth：" ;
        int moth;
        cin >> moth;
        this->brithday.setMoth(moth);
        cout << "请输入人员的day：" ;
        int day;
        cin >> day;
        this->brithday.setDay(day);
        cout << "请输入人员的id：" ;
        cin >> id;
        this->id = id;
    }
    //按照 编号 姓名 年龄 生日 身份号来存储
    void saveInfor()
    {
        ofstream ofs("data.txt",ios::app);      //写入数据
        if (!ofs.is_open())
        {
            cout << "打开文件失败！" << endl;
            return ;
        }
        //开始写入数据
        ofs << this->number << "," 
        << this->name << ","
        << this->age << ","
        << this->brithday.getYear() << "-"
        << this->brithday.getMoth() << "-"
        << this->brithday.getDay() << ","
        << this->id << endl;
        ofs.close();        //写完数据要关闭文件
    }
    void ShowInfor()
    {
        //展示信息前需要打开文件进行读取
        ifstream ifs("data.txt",ios::in);       //读取数据
        if (!ifs.is_open())
        {
            cout << "打开文件失败" << endl;
            return ;
        }
        string P_data;
        while (getline(ifs,P_data))         //一行一行读取数据
        {
            cout << P_data << endl;
        }
        ifs.close();
        
        
        /*
        cout << "编号: " << this->number << "  " 
        << "姓名: " << this->name << "  "
        << "年龄: " << this->age << "  "
        << "生日: " << this->brithday.getYear()
        << "-" << this->brithday.getMoth()
        << "-" << this->brithday.getDay() << "  "
        << "身份证号: " << this->id << endl;
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
    cout << "创建对象 p 成功" << endl;
    p.ShowInfor();

    Person p1;
    p1.setPerson();
    p1.saveInfor();
    cout << "创建对象 p1 成功" << endl;    
    p1.ShowInfor();
    

    Person p2;
    p2 = p;
    cout << "把对象 p 赋值给对象 p2" << endl;
    cout << "创建对象 p2 成功" << endl;
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