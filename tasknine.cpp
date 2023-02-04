
#include <iostream>
using namespace std;
main()
{
    string code;
    cout << "Enter code: ";
    cin >> code;
    int codeValue;
    bool input = true;
    string move[10] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};
    for (int index = 0; code[index] != '\0'; index++)
    {
        codeValue = code[index] - 48;
        if (codeValue > 9)
        {
            input = false;
            break;
        }
    }
    if (input == false)
    {
        cout << "Invalid Input";
    }
    else
    {
        for (int index = 0; code[index] != '\0'; index++)
        {
            codeValue = code[index] - 48;
            int temp = codeValue + index;
            if (temp > 9)
            {
                temp = temp - 10;
            }
            cout << move[temp] << endl;
        }
    }
}