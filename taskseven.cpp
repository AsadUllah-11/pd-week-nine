#include <iostream>
using namespace std;
main()
{
    string word1;
    string word2;
    cout << "Enter First Word: ";
    getline(cin, word1);
    cout << "Enter Second Word: ";
    getline(cin, word2);
    int count = 0;
    for (int index1 = 0; word1[index1] != '\0'; index1++)
    {
        for (int index = 0; word2[index] != '\0'; index++)
        {
            if (word1[index1] == word2[index])
            {
                word1[index1] == '!';
                word2[index] == '*';
                count++;
            }
        }
    }
    cout << count;
}