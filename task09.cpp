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

	string input;

	cout<<"Enter True or False: ";	
	cin>>input;
	cout<<endl;

	if (input == "true")
	{
		cout<<"false";
	}

	if (input == "false")
	{
		cout<<"true";
	}

	cout<<endl;

}