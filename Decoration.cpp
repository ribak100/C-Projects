
#include "Decoration.h"
#include<iostream>
#include<conio.h>
#include<ctype.h>
#include<direct.h>
#include<process.h>
#include<windows.h>
#include<string.h>
#include<stdio.h>
#include<fstream>
#include<string.h>
#include<stdlib.h>
#include<iomanip>
#include<time.h>

using namespace std;
Decoration::Decoration()
{
    //ctor
}

void Decoration::date1()    // to get current date
{
    time_t T= time(NULL);
    struct tm tm= *localtime(&T);
    cout <<"\n\n\n\n";
    cout <<"\t\t\t\t\t\t\t\t  DATE : "<<tm.tm_mday<<"/"<<tm.tm_mon+1<<"/"<<tm.tm_year+1900<<endl;
    cout <<"\t\t\t\t\t\t\t\t  TIME : "<<tm.tm_hour<<":"<<tm.tm_min<<endl;


}

void Decoration::delay()     // function for loading effect
{
    Sleep(200);
}

void Decoration::callExit()  // function to exit the program
{
    int process = 0;
  system("cls");
  cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
  cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t";
  char arrchar[]={'T','a','k','i','n','g',' ','Y','o','u',' ','O','u','t',' ','o','f',' ','T','h','e',' ','S','y','s','t','e','m'};
  for(int i=0; i<=27; i++)
  {
      cout <<arrchar[i];
      Sleep(100);
  }
  for(process=0;process<25;process++)
    {
      delay();
      cout <<".";
    }
  system("cls");
  cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
  cout <<"\t\t\t\t\t\t\t\t\t\t";
  cout <<"You are out of the System.\n";
  cout <<"\t\t\t\t\t\t\t\t\t\t";
  cout << "Thank You !";
  cout <<"\n\n";
  cout <<"\t\t\t\t\t\t\t\t\t\t";
  system("pause");
  exit(0);

}

void Decoration::slowDemDown() //function to display a please wait animation
{
    cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t";
    system("pause");
    system("cls");
  cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t";
  char arraychar[]= {'L','o','a','d','i','n','g'};
  for(int i=0l; i<=6; i++)
  {
      cout <<arraychar[i];
      Sleep(200);
  }
  int process = 0;
  for(process=0;process<25;process++)
  {
    delay();
    cout <<".";

  }

system("cls");
}


