#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy (int x, int y);
void printMenu();

main()
{

	system("cls");
	printMenu();
	while(true)
	{
		string name1;
		string name2;
		int matricMarks1, interMarks1, ecatMarks1;
		int matricMarks2, interMarks2, ecatMarks2;
		int option;
		float matricagg1, interagg1, ecatagg1, totalagg1;
		float matricagg2, interagg2, ecatagg2, totalagg2;
		
		cout << "Press 1 to Enter Student 1 Data"<<endl;
		cout << "Press 2 to Enter Student 2 Data"<<endl;
		cout << "Press 3 to Calculate Student 1 Aggregate"<<endl;
		cout << "Press 4 to Calculate Student 2 Aggregate"<<endl;

		cout<<"Option: ";
		cin>>option;
		cout<<endl;
		

		if (option==1)
		{
			cout<<"Enter your Name: ";
			cin>>name1;
			cout<<endl;

			cout<<"Enter your Matric Marks(1100): ";
			cin>>matricMarks1;
			cout<<endl;

			cout<<"Enter your Intermediate Marks(1100): ";
			cin>>interMarks1;
			cout<<endl;

			cout<<"Enter your ECAT Marks(400): ";
			cin>>ecatMarks1;
			cout<<endl;

		}

		if (option==2)
		{
			cout<<"Enter your Name: ";
			cin>>name2;
			cout<<endl;

			cout<<"Enter your Matric Marks(1100): ";
			cin>>matricMarks2;
			cout<<endl;

			cout<<"Enter your Intermediate Marks(1100): ";
			cin>>interMarks2;
			cout<<endl;

			cout<<"Enter your ECAT Marks(400): ";
			cin>>ecatMarks2;
			cout<<endl;

		}

		if (option==3)
		{
			matricagg1=(matricMarks1/1100.0)*30;
			interagg1=(interMarks1/1100.0)*30;
			ecatagg1=(ecatMarks1/400.0)*40;
			totalagg1=matricagg1+interagg1+ecatagg1;

			cout<<"Matric Aggregate: "<<matricagg1<<endl<<endl;
			cout<<"Inter Aggregate: "<<interagg1<<endl<<endl;
			cout<<"ECAT Aggregate: "<<ecatagg1<<endl<<endl;
			cout<<"Total Aggregate is: "<<totalagg1<<endl<<endl;
		}

		if (option==4)
		{
			matricagg2=(matricMarks2/1100.0)*30;
			interagg2=(interMarks2/1100.0)*30;
			ecatagg2=(ecatMarks2/400.0)*40;
			totalagg2=matricagg2+interagg2+ecatagg2;

			cout<<"Matric Aggregate: "<<matricagg2<<endl<<endl;
			cout<<"Inter Aggregate: "<<interagg2<<endl<<endl;
			cout<<"ECAT Aggregate: "<<ecatagg2<<endl<<endl;
			cout<<"Total Aggregate is: "<<totalagg2<<endl<<endl;
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

void printMenu()
{
	cout<<"*****************************************************************"<<endl;
	cout<<"*                                                               *"<<endl;
	cout<<"*                                                               *"<<endl;
	cout<<"*                 University of Engineering and                 *"<<endl;
	cout<<"*                                                               *"<<endl;
	cout<<"*                                                               *"<<endl;
	cout<<"*                     Technology, Lahore                        *"<<endl;
	cout<<"*                                                               *"<<endl;
	cout<<"*                                                               *"<<endl;
	cout<<"*****************************************************************"<<endl;
}


