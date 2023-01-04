#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy (int x, int y);
void printmaze();
void printPacman();

main()
{
	system("cls");
	int x=25;
	int y=7;

	printmaze();
	while(true)
	{
		Sleep(500);
		if( y < 14)
		{
			gotoxy(x,y-1);
			cout << "  ";
			gotoxy(x, y);
			printPacman();
			y=y+1;
		}

		if( y == 14)
		{
			gotoxy(x, y-1);
			cout << "  ";
		  	y=2;
		}

		
	}
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
	cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<endl;
	cout<<"$                                $"<<endl;
	cout<<"$                                $"<<endl;
	cout<<"$                                $"<<endl;
	cout<<"$                                $"<<endl;
	cout<<"$                                $"<<endl;
	cout<<"$                                $"<<endl;
	cout<<"$                                $"<<endl;
	cout<<"$                                $"<<endl;
	cout<<"$                                $"<<endl;
	cout<<"$                                $"<<endl;
	cout<<"$                                $"<<endl;
	cout<<"$                                $"<<endl;
	cout<<"$                                $"<<endl;
	cout<<"$                                $"<<endl;
	cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<endl;
}

void printPacman()
{
	cout<<"##"<<endl;
}