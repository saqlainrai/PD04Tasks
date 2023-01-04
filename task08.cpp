#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy (int x, int y);
void high();

main()
{

	system("cls");
	high();

} 
void gotoxy (int x, int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void high()
{

	string number1, number2;

	cout<<"Enter First Number: ";	
	cin>>number1;
	cout<<endl;

	cout<<"Enter Second Number: ";	
	cin>>number2;
	cout<<endl;

	if (number1 == number2 )
	{
		cout<<"TRUE";
	}

	if (number1 != number2)
	{
		cout<<"FALSE";
	}

	cout<<endl;

}