#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy (int x, int y);
void discount();

main()
{

	system("cls");
	while(true)
	{
		discount();
	}

} 
void gotoxy (int x, int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void discount()
{

	string input;
	float amount;

	cout<<"Enter Country's Name: ";	
	cin>>input;
	cout<<endl;

	cout<<"Enter Ticket Price: ";	
	cin>>amount;
	cout<<endl;


	if (input == "Pakistan")
	{

		float dis, discount, remamount;

		dis = 5/100.0;
		discount = dis * amount ;
		remamount = amount - discount ;
		cout<<"Ticket Price: "<<remamount;
	}

	if (input == "Ireland")
	{
		float dis, discount, remamount;

		dis = 10/100.0;
		discount = dis * amount ;
		remamount = amount - discount ;
		cout<<"Ticket Price: "<<remamount;
	}

	if (input == "India")
	{
		float dis, discount, remamount;

		dis = 20/100.0;
		discount = dis * amount ;
		remamount = amount - discount ;
		cout<<"Ticket Price: "<<remamount;
	}

	if (input == "England")
	{
		float dis, discount, remamount;

		dis = 30/100.0;
		discount = dis * amount ;
		remamount = amount - discount ;
		cout<<"Ticket Price: "<<remamount;
	}

	if (input == "Canada")
	{
		float dis, discount, remamount;

		dis = 45/100.0;
		discount = dis * amount ;
		remamount = amount - discount ;
		cout<<"Ticket Price: "<<remamount;
	}

	cout<<endl;

}