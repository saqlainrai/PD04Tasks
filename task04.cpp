#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy (int x, int y);
void printmaze();

main()
{
	system("cls");
	int x=5;
	int y=7;

	printmaze();
	while(true)
	{
		Sleep(500);
		if( x < 32)
		{
			gotoxy(x-1,y);
			cout << " ";
			gotoxy(x, y);
			cout<<"P";
			x=x+1;
		}

		if( x == 32)
		{
			gotoxy(x-1, y);
			cout << " ";
		  	x=3;
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
	cout<<"##"<<endl;

}