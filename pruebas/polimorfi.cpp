#include <iostream>

using namespace std;

class magician
{
protected:
    int live, power;

public:
    magician(int mlive, int mpower)
    {
        live = mlive;
        power = mpower;
    }

    int level()
    {
        return power;
    }

    void GetDamage(int value)
    {
        live = live - value;
        cout << "Al mago le queda en vida: " << live << endl;
    }
};

class IceMagician : public magician
{
public:
    IceMagician(int mlive, int mpower) : magician(mlive, mpower)
    {
        live = mlive;
        power = mpower + 1;
    }
};

class fireMagician : public magician
{
public:
    fireMagician(int mlive, int mpower) : magician(mlive, mpower)
    {
        live = mlive;
        power = mpower + 10;
    }
};

int main()
{
    system("clear");
    magician *CurrentMage;
    fireMagician Gandalf(20, 6);
    IceMagician Dumbledore(17, 5);
    CurrentMage = &Gandalf;
    CurrentMage->GetDamage(5);

    CurrentMage = &Dumbledore;
    CurrentMage->GetDamage(8);
    return 0;
}