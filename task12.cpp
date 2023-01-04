#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy (int x, int y);
void roses();

main()
{

	system("cls");
	while(true)
	{
		roses();
	}

} 
void gotoxy (int x, int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void roses()
{

	float redroses, whiteroses, tulips;
	float amountofrroses, amountofwroses, amountoftulips;
	float sum, discount;
	double remamount;

	cout<<"Enter the amount of Red Roses: : ";	
	cin>>redroses;
	cout<<endl;

	cout<<"Enter the amount of White Roses: : ";	
	cin>>whiteroses;
	cout<<endl;

	cout<<"Enter the amount of  Tulips: : ";	
	cin>>tulips;
	cout<<endl;

	amountofrroses=redroses*2.0;
	amountofwroses=whiteroses*4.1;
	amountoftulips=tulips*2.5;

	sum = amountofrroses + amountofwroses + amountoftulips;

	if (sum > 200)
	{
		
		cout<<"Your Amount is: "<<sum<<endl<<endl;
		discount=0.2*sum;
		remamount=sum-discount;
		cout<<"Payable Amount: "<<remamount<<endl<<endl;
		cout<<"Your Discount was: "<<discount<<endl<<endl;

	}

		if (sum <= 200)
	{
		cout<<"Payable Amount: "<<sum<<endl<<endl;
	}
}