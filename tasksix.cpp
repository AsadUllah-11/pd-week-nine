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
    int transformation;
    cout << "Enter number of times even-odd transformation need to be done: ";
    cin >> transformation;
    for (int index = 0; index < size; index++)
    {
        for (int x = 1; x <= transformation; x++)
        {
            if (numbers[index] % 2 == 0)
            {
                numbers[index] = numbers[index] - 2;
            }
            if (numbers[index] % 2 != 0)
            {
                numbers[index] = numbers[index] + 2;
            }
        }
    }
    for (int index = 0; index < size; index++)
    {
        cout << numbers[index] << ", ";
    }
}