#include <iostream>

using namespace std;


class Point
{
private:
    int _x;
    int _y;
public:
    Point(int x,int y);
    ~Point();
    //前置++
    Point& operator++()
    {
        _x++;
        _y++;
        return *this;
    }
    //后置++
    Point operator++(int)
    {
        Point old_Point = *this;
        ++(*this);
        return old_Point;
    }
    //前置--
    Point& operator--()
    {
        _x--;
        _y--;
        return *this;
    }
    //后置--
    Point operator--(int)
    {
        Point old_Point = *this;
        --(*this);
        return old_Point;
    }
    //打印出点
    void disp()
    {
        cout << "(" << _x << "," << _y << ")" << endl;
    }
};

Point::Point(int x,int y)
{
    _x = x;
    _y = y;
}

Point::~Point()
{
}

void test01()
{
    Point p1(1,1);
    cout << "p1 : "; 
    p1.disp();

    cout << "++ p1 : ";
    (++p1).disp();
    cout << "p1 : "; 
    p1.disp();

    cout << "p1 ++ : "; 
    (p1++).disp();
    cout << "p1 : "; 
    p1.disp();
    
    cout << "--------------" << endl;
    
    Point p2(6,6);
    cout << "p2 : "; 
    p2.disp();

    cout << "-- p2 : ";
    (--p2).disp();
    cout << "p2 : "; 
    p2.disp();

    cout << "p2 -- : "; 
    (p2--).disp();
    cout << "p2 : "; 
    p2.disp();

}



int main()
{
    test01();

    system("pause");
    return 0;
}