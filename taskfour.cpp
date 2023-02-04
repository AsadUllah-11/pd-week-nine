#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "How many numbers you want to enter? ";
    cin >> size;
    int numbers[size];
    for (int index = 0; index < size; index++)
    {
        cout << "Enter Number: ";
        cin >> numbers[index];
    }
    int check = 0;
    for (int index = 0; index < size; index++)
    {
        if (numbers[index] == 7)
        {
            check++;
        }
        else if (numbers[index] > 9)
        {
            int number = numbers[index];
            while (number != 0)
            {
                int number2 = number % 10;
                number = number / 10;
                if (number2 == 7)
                {
                    check++;
                }
            }
        }
    }
    if (check >= 1)
    {
        cout << "Boom!";
    }
    else
    {
        cout << "There is no 7 in the array";
    }
}