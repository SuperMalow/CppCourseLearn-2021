#include <iostream>
using namespace std;


enum CPU_Rank { P1=1, P2, P3, P4, P5, P6, P7};
class CPU
{
private:
    CPU_Rank rank;
    int frequency;
    float voltage;
public:
    CPU(CPU_Rank r,int f,float v)
{
    rank = r;
    frequency = f;
    voltage = v;
    cout << "构造函数调用-->构造了一个CPU!" << endl;
}
    ~CPU(){
        cout << "析构函数调用-->析构掉了一个CPU!" << endl;
    }

    void run()
    {
        cout << "CPU RUN ~~~" << endl;
    }
    void stop()
    {
        cout << "CPU STOP !!!" << endl;
    }

    //设置属性的值
    void setCpuRank(CPU_Rank r)
    {
        rank = r;
    }
    void setFrequency(int f)
    {
        frequency = f;
    }
    void setVoltage(float v)
    {
        voltage = v;
    }
    //获取属性的值
    CPU_Rank getCpuRank() const //防止误修改属性的值
    {
        return rank;
    }
    int getFrequency() const
    {
        return frequency;
    }
    float getVoltage() const
    {
        return voltage;
    }
};



int main(){
    CPU c(P2,20000,3.5);
    c.run();
    c.setCpuRank(P4);
    c.setFrequency(3000);
    c.setVoltage(5.0);
    cout << "获取的CpuRank值："<< c.getCpuRank() << endl;
    cout << "获取的Frequency值："<< c.getFrequency() << endl;
    cout << "获取的Voltage值："<< c.getVoltage() << endl;
    c.stop();

    system("pause");
    return 0;
}