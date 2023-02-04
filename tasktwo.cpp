#include <iostream>
using namespace std;
main()
{
    string movies[5] = {"Gladiator", "StarWars", "Terminator", "TakingLives", "TombRider"};
    string movieName;
    cout << "Enter Movie Name: ";
    cin >> movieName;
    int checkIndex;
    float bill = 500.0;
    float discount = 0.10 * bill;
    float totalBill = bill - discount;
    float totalBill2;
    for (int index = 0; index < 5; index++)
    {
        if (movies[index] == movieName)
        {
            checkIndex = index;
        }
        if (checkIndex % 2 == 1)
        {
            float discount = 0.05 * bill;
            totalBill2 = bill - discount;
        }
    }
    if (checkIndex % 2 != 1)
    {
        cout << "Total Bill: " << totalBill;
    }
    else
    {
        cout << "Total Bill: " << totalBill2;
    }
}