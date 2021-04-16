#include <iostream>
#include <string>
#include <math.h>
using namespace std;
//#define PI = 3.14;

class HighFrequency
{
private:
    /* data */
    double _resonFrequency, _L, _C, _Rp, _r;
    double PI;

public:
    HighFrequency()
    {
        PI = 3.14159;
        /*
        double _resonFrequency = 5000;
        double _L = 0.0001;
        double _C = 0.0001;
        double _Rp = 500;
        double _r = 2;
        */
    }
    double calculateResonFrequency(double L, double C);
    void calculateResonResistor(double &L, double &C, double &r);
    void calculateCap(double &L, double &resonFrequency);

};
double HighFrequency::calculateResonFrequency(double L, double C)
{
        return (1 / 2 * PI * (sqrt((L * C))));
}
void HighFrequency::calculateResonResistor(double &L, double &C, double &r)
{
}
void HighFrequency::calculateCap(double &L, double &resonFrequency)
{
}
void test()
{
    HighFrequency h;
    double resonFrequency, L, C, Rp, r;
    cin >> L >> C ;
    cout << "值为：" << h.calculateResonFrequency(L,C) << endl;
}

int main()
{

    system("pause");
    return 0;
}