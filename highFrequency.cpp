#include <iostream>
#include <string>
#include <math.h>
using namespace std;
//#define PI = 3.14;

class HighFrequency
{
private:
    /* data */
    double resonFrequency, L, C, Rp, r;

public:
    HighFrequency()
    {
        double resonFrequency = 5000;
        double L = 0.0001;
        double C = 0.0001;
        double Rp = 500;
        double r = 2;
    }
    double calculateResonFrequency(double &L, double &C)
    {
        return (1 / 2 * 3.14 * (sqrt((L * C))));
    }
    void calculateResonResistor(double &L, double &C, double &r)
    {
    }
    void calculateCap(double &L, double &resonFrequency)
    {
    }
};

void test()
{
    HighFrequency h;
    cout << "值为：" << h.calculateResonFrequency(0.001, 0.005) << endl;
}

int main()
{

    system("pause");
    return 0;
}