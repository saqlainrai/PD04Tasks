#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy (int x, int y);
void S();
void A();
void Q();
void L();
void I();
void N();

main()
{
	system("cls");
	
    S();
    A();
    Q();
    L();
    A();
    I();
    N();
	
} 
void gotoxy (int x, int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void S()
{
	cout<<"                   ##############                                                "<<endl;
	cout<<"                 ##              ##                              "<<endl;
	cout<<"                ##                ##                             "<<endl;
	cout<<"               ##                                           "<<endl;
	cout<<"               ##                                              "<<endl;
	cout<<"                ##                                              "<<endl;
	cout<<"                 ##                                               "<<endl;
	cout<<"                   ##############                                            "<<endl;
	cout<<"                                 ##                             "<<endl;
	cout<<"                                  ##                           "<<endl;
	cout<<"                                   ##                           "<<endl;
	cout<<"               ##                  ##                             "<<endl;
	cout<<"                ##                ##                              "<<endl;
	cout<<"                 ##              ##                            "<<endl;
	cout<<"                   ##############                              "<<endl;
    cout<<endl<<endl;
}
void A()
{
    cout<<"                     ###              "<<endl;
	cout<<"                    ## ##                "<<endl;
	cout<<"                   ##   ##             "<<endl;
	cout<<"                  ##     ##            "<<endl;
	cout<<"                 ##       ##           "<<endl;
	cout<<"                ##         ##          "<<endl;
	cout<<"               ##           ##         "<<endl;
	cout<<"              ##             ##        "<<endl;
	cout<<"             ###################       "<<endl;
	cout<<"            ##                 ##     "<<endl;
	cout<<"           ##                   ##     "<<endl;
	cout<<"          ##                     ##    "<<endl;
	cout<<"         ##                       ##   "<<endl;
	cout<<"        ##                         ##  "<<endl;
	cout<<"     ######                       ###### "<<endl;
    cout<<endl<<endl;
}
void Q()
{
    cout<<"                   #############                                                "<<endl;
	cout<<"                 ##             ##                              "<<endl;
	cout<<"                ##               ##                             "<<endl;
	cout<<"              ##                  ##                         "<<endl;
	cout<<"             ##                    ##                           "<<endl;
	cout<<"            ##                      ##                        "<<endl;
	cout<<"            ##                      ##                         "<<endl;
	cout<<"            ##                      ##                               "<<endl;
	cout<<"            ##                      ##                             "<<endl;
	cout<<"            ##                      ##                           "<<endl;
	cout<<"             ##            ##      ##                           "<<endl;
	cout<<"              ##            ##    ##                             "<<endl;
	cout<<"               ##            ##  ##                              "<<endl;
	cout<<"                 ##           ####                            "<<endl;
	cout<<"                   ##############                              "<<endl;
	cout<<"                                ##                             "<<endl;
	cout<<"                                 ##                             "<<endl;
	cout<<"                                  ##                             "<<endl;
    cout<<endl<<endl;
}
void L()
{
    cout<<"      ########    "<<endl;                      
	cout<<"        ####        "<<endl;              
	cout<<"        ####           "<<endl;    
	cout<<"        ####           "<<endl;
	cout<<"        ####         "<<endl;
	cout<<"        ####          "<<endl;
	cout<<"        ####          "<<endl;
	cout<<"        ####           "<<endl;
	cout<<"        ####            "<<endl;
	cout<<"        ####             "<<endl;
	cout<<"        ####           "<<endl;
	cout<<"        ####            "<<endl;
	cout<<"        ####             "<<endl;
	cout<<"        ####              "<<endl;
	cout<<"        ####               "<<endl;
	cout<<"        ####                "<<endl;
	cout<<"        ####                           "<<endl;
	cout<<"        ############################|                  "<<endl;
	cout<<"      ##############################|              "<<endl;
    cout<<endl<<endl;

}
void I()
{
    cout<<"                  ########    "<<endl;                      
	cout<<"                    ####        "<<endl;              
	cout<<"                    ####           "<<endl;    
	cout<<"                    ####           "<<endl;
	cout<<"                    ####         "<<endl;
	cout<<"                    ####          "<<endl;
	cout<<"                    ####          "<<endl;
	cout<<"                    ####           "<<endl;
	cout<<"                    ####            "<<endl;
	cout<<"                    ####             "<<endl;
	cout<<"                    ####              "<<endl;
	cout<<"                    ####               "<<endl;
	cout<<"                    ####                "<<endl;
	cout<<"                    ####                 "<<endl;
	cout<<"                    ####                  "<<endl;
	cout<<"                  ########              "<<endl;
    cout<<endl<<endl;
}
void N()
{
    cout<<"      ########                 ######## "<<endl;                      
	cout<<"        ######                   ####"<<endl;              
	cout<<"        #### ##                  ####"<<endl;    
	cout<<"        ####  ##                 ####"<<endl;
	cout<<"        ####   ##                ####"<<endl;
	cout<<"        ####    ##               ####"<<endl;
	cout<<"        ####     ##              ####"<<endl;
	cout<<"        ####      ##             ####"<<endl;
	cout<<"        ####       ##            ####"<<endl;
	cout<<"        ####        ##           ####"<<endl;
	cout<<"        ####         ##          ####"<<endl;
	cout<<"        ####          ##         ####"<<endl;
	cout<<"        ####           ##        ####"<<endl;
	cout<<"        ####            ##       ####"<<endl;
	cout<<"        ####             ##      ####"<<endl;
	cout<<"        ####              ##     ####"<<endl;
	cout<<"        ####               ##    ####"<<endl;
	cout<<"        ####                ##   ####"<<endl;
	cout<<"        ####                 ##  ####    "<<endl;
	cout<<"        ####                  ## ####        "<<endl;
	cout<<"      ########                 ######## "<<endl;
    cout<<endl<<endl;
}