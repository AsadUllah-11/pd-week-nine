#include <iostream>
using namespace std;
main()
{
	int size;
	cout << "How many colors you want to enter? ";
	cin >> size;
	string colors[size];
	for(int index=0; index<size; index++)
	{
		cout << "Enter Color: ";
		cin >> colors[index];
	}
	int time;
	int change=0;
	for (int index=0; index<size; index++)
	{
		if(colors[index]==colors[index+1])
		{
			change = change + 1;
		}
	}
	time = (size*2)+(size-change-1);
	cout << "Time: " << time;
}
