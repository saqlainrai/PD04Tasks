#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy (int x, int y);
void tom();

main()
{
 
	system("cls");
	while(true)
	{
		tom();
	}

} 
void gotoxy (int x, int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void tom()
{

	int holidays, workingDays;
	int hours, minutes;
	int wdplay, hplay;
	int play, difference;

	cout<<"Enter the Number of Holidays in year: ";
	cin>>holidays;
	cout<<endl;

	workingDays=365-holidays;
	wdplay=workingDays*63;
	hplay=holidays*127;
	play=wdplay+hplay;
	difference=30000-play;
	hours=difference/60;
	minutes=difference%60;

	if ( play >= 30000 ) 
	{
		cout<<"Tom Sleeps Well"<<endl<<endl;
		cout<<hours<<" Hours "<<minutes<<" Minutes for play"<<endl;
	}

	if ( play < 30000 ) 
	{
		cout<<"Tom will run away (Lazy) "<<endl<<endl;
		cout<<hours<<" Hours "<<minutes<<" Minutes for play"<<endl;
	}
	cout<<endl;
	
}
















