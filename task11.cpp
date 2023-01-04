#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy (int x, int y);
void challan();

main()
{

	system("cls");
	while(true)
	{
		challan();
	}

} 
void gotoxy (int x, int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void challan()
{
	int speed;

	cout<<"Enter the Speed: ";	
	cin>>speed;
	cout<<endl;

	if (speed > 100)
	{
		cout<<"Halt... YOU WILL BE CHALLENGED";
	}

	if (speed <= 100)
	{
		cout<<"Perfect! You're going good.";
	}
	cout<<endl<<endl;
}