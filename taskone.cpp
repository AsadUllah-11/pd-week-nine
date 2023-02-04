#include <iostream>
using namespace std;
main()
{
    string fruit[] = {"peach", "apple", "guava", "watermelon"};
    float price[] = {60, 70, 40, 30};
    string fruitName;
    cout << "Enter Fruit Name: ";
    cin >> fruitName;
    float quantity;
    cout << "Enter Fruit Quantity(in kgs): ";
    cin >> quantity;
    float bill;
    string checkFruitName;
    for (int index = 0; index < 4; index++)
    {
        if (fruit[index] == fruitName)
        {
            checkFruitName = fruitName;
            bill = price[index] * quantity;
        }
    }
    cout << "Total Bill: " << bill;
}