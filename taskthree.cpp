#include <iostream>
using namespace std;
string word;
int length = 0;
main()
{
    cout << "Enter Word: ";
    getline(cin, word);
    for (int index = 0; word[index] != '\0'; index++)
    {
        length++;
    }
    if (length % 2 == 0)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
}