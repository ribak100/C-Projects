#include "MainMenu.h"
//#include "Verify.h"
#include "Decoration.h"
#include <iostream>
//#include "Operations.h"
#include <conio.h>
#include <cstring>
#include <ctype.h>
#include <direct.h>
#include <process.h>
#include <windows.h>
#include <string.h>
#include <stdio.h>
#include <fstream>
#include <string.h>
#include <stdlib.h>
#include <iomanip>
#include <time.h>
//#include "QueuePtr.h"

using namespace std;

MainMenu::MainMenu(){}

void MainMenu::mainPage() // function to move to the main page
{
  Decoration mydecor;
  int process=0;
  system("cls");
    char arr1[]= {'P','r','e','p','a','r','i','n','g',' ','t','h','e',' ','s','y','s','t','e','m'};
    cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t";
    for(int i=0; i<20; i++)
    {
        cout <<arr1[i];
        Sleep(200);
    }
    int delay = 0;
    for(delay=0;delay<25;delay++)
    {
        mydecor.delay();
        cout <<".";
    }
  system("cls");
  mydecor.date1();
  cout << "\n";
  cout <<"\t\t\t\t\t\t\t    ----------------------------------\n";
  cout <<"\t\t\t\t\t\t\t    |       DISCRETE LOG PROBLEM      |\n";
  cout <<"\t\t\t\t\t\t\t    ----------------------------------\n";
  cout <<"\n\n";
  cout <<"\t\t\t\t\t\t\t";
  cout <<"PREPARED BY    ";
  cout <<":";
  cout <<"  **HIDDEN**";
  cout <<"\n\n";
  cout <<"\t\t\t\t\t\t\t";
  cout <<"PROJECT   ";
  cout <<":";
  cout <<"   \tPUBLIC KEY CYPTO AND DISCRETE LOG PROBLEM SOLUTION COMPUTATION SYSTEM";
  cout <<"\n\n";
  cout <<"\t\t\t\t\t\t\t";
  cout <<"WRITTEN IN";
  cout <<" :";
  cout <<"   \tC++";
  cout <<"\n\n";
  cout <<"\t\t\t\t\t\t\t";
  cout <<"\n\n";
  cout <<"\n\n";
  cout <<"\t\t\t\t\t\t\t";
  system("pause");
  cout <<"\n\t\t\t\t\t\t\tLoading";

  for(process=0;process<25;process++)
  {
    mydecor.delay();
    cout <<".";
  }
}







