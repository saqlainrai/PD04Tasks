#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy (int x, int y);
void printmaze();

main()
{
	system("cls");
	printmaze () ;
	gotoxy(21, 4);
	cout<<"S   A   Q   L   A   I   N";
	gotoxy(21, 8);
	cout<<" ";
	
} 
void gotoxy (int x, int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void printmaze()
{
	cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<endl;
	cout<<"$                                                                          $"<<endl;
	cout<<"$                                                                          $"<<endl;
	cout<<"$                                                                          $"<<endl;
	cout<<"$                                                                          $"<<endl;
	cout<<"$                                                                          $"<<endl;
	cout<<"$                                                                          $"<<endl;
	cout<<"$                                                                          $"<<endl;
	cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<endl;
}
