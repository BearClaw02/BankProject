#include <iostream>

using namespace std;


void Hack(int& x, int& y);

int main()
{
    int BankAct = 150;
    int OffshoreAct = 1000;
    cout << "checking balance\n";
    cout << "Joes Coffee shop: " << BankAct << "\n";
    cout << "Terroists: " << OffshoreAct << "\n";
    int Bills = BankAct - 150;
    cout << "Checking balance\n";
    Hack(Bills, OffshoreAct);
    cout << "Joes Coffee shop: " << Bills << "\n";
    cout << "Terroists: " << OffshoreAct << "\n";

    return 0;
}



void Hack(int& x, int& y)
{
    int temp = x;
    x = y;
    y = temp;
}


