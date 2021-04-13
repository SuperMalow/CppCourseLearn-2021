#include <iostream>
#include <string>
using namespace std;

enum CPU_Rank
{
    P1 = 1,
    P2,
    P3,
    P4,
    P5,
    P6,
    P7
};
class CPU
{
private:
    CPU_Rank rank;
    int frquency;
    float voltage;

public:
    CPU(/* args */)
    {
        cout << "CPU-->构造函数的调用" << endl;
    }
    ~CPU()
    {
        cout << "CPU-->析构函数的调用" << endl;
    }
    void CPURun()
    {
        cout << "CPU RUN ~~~~~~~" << endl;
    }
    void CPUStop()
    {
        cout << "CPU Stop !!!!!!" << endl;
    }
};

class RAM
{
private:
    string RamCapacity;
    string RamLength;

public:
    RAM(/* args */)
    {
        cout << "RAM-->构造函数的调用" << endl;
    }
    ~RAM()
    {
        cout << "RAM-->析构函数的调用" << endl;
    }
    void RAMRun()
    {
        cout << "RAM RUN ~~~~~~~" << endl;
    }
    void RAMStop()
    {
        cout << "RAM Stop !!!!!!" << endl;
    }
};

class CDROM
{
private:
    string CdromLength;

public:
    CDROM(/* args */)
    {
        cout << "CDROM-->构造函数的调用" << endl;
    }
    ~CDROM()
    {
        cout << "CDROM-->析构函数的调用" << endl;
    }
    void CDROMRun()
    {
        cout << "CDROM RUN ~~~~~~~" << endl;
    }
    void CDROMStop()
    {
        cout << "CDROM Stop !!!!!!" << endl;
    }
};

class Computer
{
private:
    CPU cpu;
    RAM ran;
    CDROM cdrom;

public:
    Computer(/* args */)
    {
        cout << "Computer-->构造函数的调用" << endl;
    }
    ~Computer()
    {
        cout << "Computer-->析构函数的调用" << endl;
    }
    void ComputerRun()
    {
        cout << "Computer RUN ~~~~~~~" << endl;
    }
    void ComputerStop()
    {
        cout << "Computer Stop !!!!!!" << endl;
    }
};

int main()
{

    Computer c;

    system("pause");
    return 0;
}