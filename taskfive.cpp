#include <iostream>
using namespace std;
main()
{
    string line[4];
    for (int index = 0; index < 4; index++)
    {
        cout << "Enter Word: ";
        getline(cin, line[index]);
    }
    if (line[0] == line[1] && line[1] == line[2] && line[2] == line[3])
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
}