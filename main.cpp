/** THIS IS A PROGRAM WRITTEN BY ADEKANYE ABDULKABIR
  * FOR SOLVING DISCRETE LOG PROBLEMS AND MUCH MORE
  * HOPE YOU ALL ENJOY
  **/



#include <iostream>
#include <conio.h>
#include "QueuePtr.h"
#include <string>
#include <cstdlib>
#include <cmath>
#include "Decoration.h"
#include <windows.h>
#include <fstream>
#include "MainMenu.h"
#include "\Users\IBRAHIM\Desktop\c++\Boost\boost_1_66_0\boost\multiprecision\cpp_int.hpp"

namespace mp = boost::multiprecision;
using namespace std;

using namespace std;

mp::cpp_int findPower(int& a, int& b)
 {
     mp::cpp_int power = 1;
     for( int i=1; i<=b; i++)
     {
         power *= a;
     }

     return power;
 }


 mp::cpp_int findPower(mp::cpp_int& a, int& b)//function overloaded with boost cpp_int
{
     mp::cpp_int power = 1;
     for( int i=1; i<=b; i++)
     {
         power *= a;
     }

     return power;
 }

 mp::cpp_int findPower(mp::cpp_int& a, mp::cpp_int&  b)//function overloaded with boost cpp_int
{
     mp::cpp_int power = 1;
     for( int i=1; i<=b; i++)
     {
         power *= a;
     }

     return power;
 }


unsigned long long int findInverseMod(int& a, int& b)
 {
     int x =1;
     for(int i=0; i<=b; i++)
     {
         unsigned long long int mod;
         mod = (a*x)%b;

         if(mod == 1)
         {
             return x;
         }
         else
         {
             x++;
             continue;
         }
     }
 }

mp::cpp_int findInverseMod(mp::cpp_int& a, mp::cpp_int& b)
 {
     mp::cpp_int x =1;
     for(int i=0; i<=b; i++)
     {
         mp::cpp_int mod;
         mod = (a*x)%b;

         if(mod == 1)
         {
             return x;
         }
         else
         {
             x++;
             continue;
         }
     }
 }


mp::cpp_int findInverseMod(mp::cpp_int& a, int& b)// overloaded with cpp_int
 {
     int x =1;
     for(int i=0; i<=b; i++)
     {
         mp::cpp_int mod;
         mod = (a*x)%b;

         if(mod == 1)
         {
             return x;
         }
         else
         {
             x++;
             continue;
         }
     }
 }

 int gcd(int a, int b)
 {
     if(a ==0)
        return b;
     return gcd(b%a, a);
 }

 int phi(unsigned int n)
 {
     unsigned int result = 1;
     for(int i=2; i<n; i++)
        if(gcd(i,n)==1)
            result++;
     return result;
 }


int prime(int& c)
{
    int result =1;
    if(c <3)
    {
        cout <<"\n\n\t\t\t\t\tPLEASE DONT CHOOSE A PRIME LESS THAN '3'"<<endl;
    }
    else if(c >29)
    {
        cout <<"\n\n\t\t\t\t\tPLEASE CHOOSE A NUMBER IN RANGE 3-29"<<endl;
    }
    else if(c%2 == 0)
    {
        cout <<"\n\n\t\t\t\t\t"<<c<<"IS NOT A PRIME NUMBER"<<endl;
        result = 0;
    }
    else if(c == 9)
    {   cout <<"\n\n\t\t\t\t\t"<<c<<"IS NOT A PRIME NUMBER"<<endl;
        result =0;
    }
    else if(c == 21)
    {   cout <<"\n\n\t\t\t\t\t"<<c<<"IS NOT A PRIME NUMBER"<<endl;
        result =0;
    }
    else if(c == 25)
    {   cout <<"\n\n\t\t\t\t\t"<<c<<"IS NOT A PRIME NUMBER"<<endl;
        result =0;
    }
    return result;
}


int main()
{

    MainMenu myMain;
    Decoration myDecor;


    //myDecor.slowDemDown();

    //myMain.mainPage();

    backhere:system("cls");
    string arrUsername[]={"Abdulkabir", "Paul", "Rotdung", "Wale", "Nurudeen", "Abdulmajeed", "Uthman", "Radiah",
                            "Elewachi", "Pontiff", "Nasir", "Abdulmalik", "Theophilus", "Yusuf", "EveryBody"};
    string arrpassword[]={"**Hidden**", "TennisGuru", "TheJacker", "QuestionAsker", "TheHacker", "JavaScript", "NetworkingAlfa",
                            "YoungMiss", "GraphicsGuru", "Politician", "AlfaGuru", "Homie", "KingLiar", "KingJacker", "WeAreOne"};

        system("cls");
        cout << "\n";
        cout <<"\t\t\t\t\t\t\t    ----------------------------------\n";
        cout <<"\t\t\t\t\t\t\t    |            MAIN MENU            |\n";
        cout <<"\t\t\t\t\t\t\t    ----------------------------------\n";
        cout << "\n\n\n\n\t\t\t\t\t\t\t\tWHAT OPERATION WOULD YOU LIKE TO PERFORM"<<endl;
        cout << "\n\t\t\t\t\t\t\t\t(1) SOLVE DISCRETE LOG PROBLEM\n"<<endl;
        cout << "\n\t\t\t\t\t\t\t\t(2) FIND MODULOUS OF A NUMBER(with variation)\n"<<endl;
        cout << "\n\t\t\t\t\t\t\t\t(3) FIND MODULOUS INVERSE OF A NUMBER(with variation)\n"<<endl;
        cout << "\n\t\t\t\t\t\t\t\t(4) ELGAMA CRYPTOSYSTEM\n"<<endl;
        cout << "\n\t\t\t\t\t\t\t\t(5) DIFFIE HELLMAN KEY EXCHANGE\n"<<endl;
        cout << "\n\t\t\t\t\t\t\t\t(6) RSA\n"<<endl;
        cout << "\n\t\t\t\t\t\t\t\t(7) POLLARD RHO\n"<<endl;
        cout << "\n\t\t\t\t\t\t\t\t(8) VIEW ALL SAVED DATA\n"<<endl;
        cout <<"\n\t\t\t\t\t\t\t\t(9) ABOUT THE SYSTEM"<<endl;
        cout <<"\n\t\t\t\t\t\t\t\t(10) EXIT THE SYSTEM"<<endl;
        cout <<"\n\t\t\t\t\t\t\t\tENTER YOUR CHOICE : ";
        char choice2;
        cin >> choice2;
        switch(choice2)
        {
        case '1'://shanks
            {
                backDiscrete:int p, alpha, beta, n, m, y1, y2, alphaPowM;
                myDecor.slowDemDown();
                cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t";
                system("pause");
                system("cls");
                cout << "\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tEnter the value of 'P' : ";
                cin >> p;

                cout << "\n\t\t\t\t\t\t\t\tEnter the value of 'Alpha' : ";
                cin >> alpha;

                cout << "\n\t\t\t\t\t\t\t\tEnter the value of 'Beta' : ";
                cin >> beta;

                n = p-1;

                m = ceil(sqrt(n));

                mp::cpp_int arrJ[m];
                mp::cpp_int arrI[m];

                mp::cpp_int alpPowM;
                alpPowM = findPower(alpha, m);
                //cout << alpPowM <<endl;
                mp::cpp_int modAlpPowM = alpPowM%p;
                //cout <<modAlpPowM<<endl;



                for(int j =0; j <=m-1; j++)
                {
                    mp::cpp_int alpPowMJ = findPower(modAlpPowM, j);
                    cout <<alpPowMJ<<endl;
                    mp::cpp_int modAlpPowMJ = (alpPowMJ%p);
                    arrJ[j] = modAlpPowMJ;

                    for(int i =0; i <=m-1; i++)
                    {


                        mp::cpp_int a= findPower(alpha, i), b= p;
                        mp::cpp_int c = findInverseMod(a,b);
                        mp::cpp_int d = (beta*c)%b ;

                        arrI[i] = d;


                        cout << "("<<j<<" , "<<arrJ[j]<<")" << "    |    "<<"("<<i<<" , "<<arrI[i]<<")" << "        ";

                        if(arrJ[j] == arrI[i])
                        {
                            cout <<"m = "<<m<<" and second co-ordinate value is = "<<arrJ[j]<< " and "<<arrI[i]<<endl;
                            cout<< " At co-ordinate j = " <<j <<" and i = "<<i<<" is where our solution lies"<<endl;
                            int answer = ((m*j)+i)%n;
                            int a;
                            mp::cpp_int theAnswer;
                            mp::cpp_int modP;
                            a = answer;
                            modP = findPower(alpha, a);
                            theAnswer = modP% p;
                            if(theAnswer == beta)
                            {


                                myDecor.delay();
                                myDecor.delay();
                                cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t";
                                system("pause");
                                system("cls");
                                cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t";
                                cout << "THE DISCRETE LOG SOLUTION IS = ";
                                Sleep(5000);
                                cout<< answer<<endl;
                                myDecor.delay();
                                myDecor.delay();
                                cout <<"\n\n\n\n\n\t\t\t\t\t\t\t\tI INTENTIONALLY DELAYED THE ANSWER LOL:)";
                                cout <<"\n\n\n\n\n\t\t\t\t\t\t\t\t";
                                system("pause");
                                saveAll:system("cls");
                                cout << "\n\n\n\n\n\t\t\t\t\t\t\t\tDO YOU WANT TO SAVE THE SOLUTION TO THIS DISCRETE LOGARITHM PROBLEM(Y/N) : ";
                                char save;
                                cin >>save;
                                if(save== 'y' || save == 'Y' )
                                {
                                    fstream DiscreteLog("DiscreteLog.abd", ios::app);
                                    if(DiscreteLog.fail())
                                    {
                                        cout<<"\n\n\n\n\n\t\t\t\tSORRY FOR THE INCOVINIENCE, SYSTEM IS UNDERGOING SOME ISSUES TRYING TO SAVE THE DATA"<<endl;
                                        cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\tPLEASE CONTACT THE ADMIN TO RECTIFY THIS ISSUE"<<endl;
                                        cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t**THANKS FOR YOUR UNDERSTANDING"<<endl;
                                        cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t";
                                        system("pause");
                                        goto discrete;
                                    }
                                    else
                                    {
                                        int getOut2 = 3;
                                         myDecor.slowDemDown();
                                         system("cls");
                                         cout<<"\n\n\n\n\n\t\t\t\t\t\t\tTHIS IS A PREMIUM FUNCTION, PLEASE FILL DETAILS TO CONTINUE"<<endl;
                                        string username2, password2;

                                         fillAgain2:cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\tENTER USERNAME : ";
                                         cin >> username2;
                                         cout<<"\n\n\t\t\t\t\t\t\t\t\tENTER PASSWORD : ";
                                         cin >> password2;
                                         for(int i=0; i<=14; i++)
                                         {
                                            if((arrUsername[i]==username2)&&(arrpassword[i]==password2))
                                            {
                                                cout <<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t**ACCESS GRANTED**"<<endl;
                                                system("pause");
                                                Sleep(2000);
                                                goto saveThings;
                                            }
                                         }


                                            cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t***INVALID PASSWORD**"<<endl;
                                            --getOut2;
                                            cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t("<<getOut2<<") Trials Remaining"<<endl;
                                            cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t";
                                            system("pause");
                                            system("cls");
                                            if(getOut2 == 0){
                                                cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\tTRIALS EXAUSTED, DATA CAN'T BE SAVED"<<endl;
                                                goto discrete;
                                            }
                                            else{
                                                system("cls");
                                                goto fillAgain2;
                                            }


                                            saveThings:DiscreteLog<<p<<" "<<alpha<<" "<<beta<<" "<<answer<<"\n";
                                            cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\tDATA SAVED SUCCESSFULLY";
                                            cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t";
                                            DiscreteLog.close();
                                            system("pause");
                                            goto discrete;

                                    }
                                    //write saving function here
                                }
                                else if(save == 'N' || save == 'n')
                                {
                                    cout <<"\n\n\n\n\n\t\t\t\t\t\t\t\tOK, THANK YOU FOR USING MY PROGRAM"<<endl;
                                    cout <<"\n\n\n\n\n\t\t\t\t\t\t\t\t";
                                    system("pause");
                                    goto discrete;
                                }
                                else
                                {
                                    cout <<"\n\n\n\n\n\t\t\t\t\t\t\t\tPLEASE ENTER A VALID OPTION, ABI MAKE I SPEAK PIGIN"<<endl;
                                    cout <<"\n\n\n\n\n\t\t\t\t\t\t\t\tABEG MAKE UNA ENTER VALID OPTION NA :)"<<endl;
                                    system("pause");
                                    goto saveAll;
                                }

                            }
                            else
                            {
                                system("cls");
                                cout << "\n\n\n\n\nSORRY FOR THE INCOVINIENCE, THERE IS AN ISSUE WITH THIS QUESTION, PLS SEND THE"
                                <<" QUESTION TO THE ADMIN TO HELP IDENTIFY THE ISSUES \n****THANKS FOR YOUR UNDERSTANDING**"<<endl;
                                system("pause");
                                goto discrete;
                            }

                        }
                        else
                        {
                            continue;
                        }
                    }
                }


                discrete:char choice2;
                cout <<"\n\n\t\t\t\t\t\t\t\tDO YOU WANT TO SOLVE ANOTHER DISCRETE LOG QUESTION(y/n) : ";
                cin >> choice2;
                if(choice2 == 'y' || choice2 == 'Y')
                {
                    myDecor.slowDemDown();
                    goto backDiscrete;
                }
                else if(choice2 == 'n' || choice2 == 'N')
                {
                    myDecor.slowDemDown();
                    goto cases;
                }
                else
                {
                    cout <<"\n\n\t\t\t\t\t\t\t\tPLEASE ENTER A VALID OPTION";
                    myDecor.slowDemDown();
                    goto discrete;
                }
            }

        case '2'://mod
            {
                modstuff:myDecor.slowDemDown();
                system("cls");
                cout << "\n\n\n\n\n\n\n\t\t\t\t\tTHIS PROGRAM CAN SOLVE THE MODULOUS OF NUMBER AS LARGE AS YOUR SYSTEM MEMORY(try and see :)"<<endl;
                cout<<"\n\n\n\n\t\t\t\t\t\tWHICH TYPE OF MODULOUS OPERATION WOULD YOU LIKE TO PERFORM?";
                cout << "\n\n\t\t\t\t\t\t(1) A mod B";
                cout << "\n\n\t\t\t\t\t\t(2) A*B mod C";
                cout << "\n\n\t\t\t\t\t\t(3) A^b mod C";
                cout <<"\n\n\t\t\t\t\t\t(4) A*(B^c) mod D";
                char choice;
                cout << "\n\n\t\t\t\t\t\tENTER YOUR CHOICE : ";
                cin >> choice;

                switch(choice)
                {

                case '1':
                    {

                        myDecor.slowDemDown();
                        system("cls");
                        mp::cpp_int a,b,c;
                        cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t A mod B";
                        cout<< "\n\n\t\t\t\t\t\t\t\tENTER THE VALUE OF A : ";
                        cin >>a;
                        cout<< "\n\n\t\t\t\t\t\t\t\tENTER THE VALUE OF B : ";
                        cin >> b;
                        c = a%b;
                        cout <<"\n\n\t\t\t\t\t\t\t\t"<<a<<" Mod "<<b<<" = "<<c<<endl;
                        cout <<"\n\n\t\t\t\t\t\t\t\t";
                        system("pause");
                        goto sturbon;
                    }
                case '2':
                    {
                        myDecor.slowDemDown();
                        system("cls");
                        mp::cpp_int a,b,c, mod;
                        cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t A*B mod C";
                        cout<< "\n\n\t\t\t\t\t\t\t\tENTER THE VALUE OF A : ";
                        cin >>a;
                        cout<< "\n\n\t\t\t\t\t\t\t\tENTER THE VALUE OF B : ";
                        cin >> b;
                        cout<< "\n\n\t\t\t\t\t\t\t\tENTER THE VALUE OF C : ";
                        cin >> c;
                        mod = (a*b)%c;
                        cout <<"\n\n\t\t\t\t\t\t\t\t"<<a<<"*"<<b<<" Mod "<<c<<" = "<<mod<<endl;
                        cout <<"\n\n\t\t\t\t\t\t\t\t";
                        system("pause");
                        goto sturbon;

                    }
                case '3':
                    {
                        myDecor.slowDemDown();
                        system("cls");

                        cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t A^b mod C";
                        mp::cpp_int a,b,c,power;
                        cout<< "\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tENTER THE VALUE OF A : ";
                        cin >>a;
                        cout<< "\n\n\t\t\t\t\t\t\t\tENTER THE POWER(b) : ";
                        cin >>power;
                        cout<< "\n\n\t\t\t\t\t\t\t\tENTER THE VALUE OF C : ";
                        cin >> b;
                        c = findPower(a,power)%b;
                        cout <<"\n\t\t\t\t\t\t\t\t"<<a<<"^"<<power<<" MOD "<<b<<" = "<<c<<endl;
                        cout <<"\n\t\t\t\t\t\t\t\t";
                        system("pause");
                        goto sturbon;
                    }
                case '4':
                    {
                        myDecor.slowDemDown();
                        system("cls");

                        cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t A*(B^c) mod D";
                        mp::cpp_int a,b,d,power, answer;
                        cout<< "\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tENTER THE VALUE OF A : ";
                        cin >>a;
                        cout<< "\n\n\t\t\t\t\t\t\t\tENTER THE VALUE OF B : ";
                        cin >>b;
                        cout<< "\n\n\t\t\t\t\t\t\t\tENTER THE POWER(c) : ";
                        cin >>power;
                        cout<< "\n\n\t\t\t\t\t\t\t\tENTER THE VALUE OF D : ";
                        cin >> d;
                        answer = (a*(findPower(b,power)))%d;
                        cout <<"\n\t\t\t\t\t\t\t\t"<<a<<"* ("<<b<<"^"<<power<<")"<<" MOD "<<d<<" = "<<answer<<endl;
                        cout <<"\n\t\t\t\t\t\t\t\t";
                        system("pause");
                        goto sturbon;

                    }
                default:
                    {
                        system("cls");
                        cout<< "\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tABEG MAKE UNA ENTER A VALID OPTION"<<endl;
                        goto modstuff;
                    }

                }
                sturbon:char choice2;
                cout <<"\n\n\t\t\t\t\t\t\t\tDO YOU WANT TO SOLVE ANOTHER MOD QUESTION(y/n) : ";
                cin >> choice2;
                if(choice2 == 'y' || choice2 == 'Y')
                {
                    goto modstuff;
                }
                else if(choice2 == 'n' || choice2 == 'N')
                {
                    goto cases;
                }
                else
                {
                    cout <<"\n\n\t\t\t\t\t\t\t\tPLEASE ENTER A VALID OPTION";
                    goto sturbon;
                }
            }
        case '3'://inverse
            {
                inverseStuff:myDecor.slowDemDown();
                system("cls");
                cout << "\n\n\n\n\n\n\n\t\t\t\t\tTHIS PROGRAM CAN SOLVE THE INVERSE MODULOUS OF NUMBER AS LARGE AS YOUR SYSTEM MEMORY(try and see :)"<<endl;
                cout <<"\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t";

                cout<<"\n\n\n\n\t\t\t\t\t\t\tWHICH TYPE OF MODULOUS OPERATION WOULD YOU LIKE TO PERFORM?";
                cout << "\n\n\t\t\t\t\t\t\t(1) A^-1 mod B";
                cout << "\n\n\t\t\t\t\t\t\t(2) A*B^-1 mod C";
                cout << "\n\n\t\t\t\t\t\t\t(3) A^(b^-1) mod C";
                cout << "\n\n\t\t\t\t\t\t\t\(4) A*(B^(c^-1)) mod D";
                char choice;
                cout << "\n\n\t\t\t\t\t\t\tENTER YOUR CHOICE : ";
                cin >> choice;

                switch(choice)
                {

                case '1':
                    {

                        myDecor.slowDemDown();
                        system("cls");
                        mp::cpp_int a,b,c;
                        cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t A^-1 mod B";
                        cout<< "\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tENTER THE VALUE OF A : ";
                        cin >>a;
                        cout<< "\n\n\t\t\t\t\t\t\t\tENTER THE VALUE OF B : ";
                        cin >> b;
                        c = findInverseMod(a,b);
                        cout <<"\n\n\t\t\t\t\t\t\t\t"<<a<<"^-1"<<" MOD "<<b<<" = "<<c<<endl;
                        cout <<"\n\n\t\t\t\t\t\t\t\t";
                        system("pause");
                        goto sturbonguy;
                    }
                case '2':
                    {
                        myDecor.slowDemDown();
                        system("cls");
                        cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t A*B^-1 mod C";
                        mp::cpp_int a,b,c, inv, ans;
                        cout<< "\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tENTER THE VALUE OF A : ";
                        cin >>a;
                        cout<< "\n\n\t\t\t\t\t\t\t\tENTER THE VALUE OF B : ";
                        cin >> b;
                        cout<< "\n\n\t\t\t\t\t\t\t\tENTER THE VALUE OF C : ";
                        cin >> c;
                        inv = findInverseMod(b,c);
                        ans = (a * inv)%c;
                        cout <<"\n\n\t\t\t\t\t\t\t\t"<<a<<"*"<<b<<"^-1"<<" MOD "<<c<<" = "<<ans<<endl;
                        cout <<"\n\n\t\t\t\t\t\t\t\t";
                        system("pause");
                        goto sturbonguy;

                    }
                case '3':
                    {
                        myDecor.slowDemDown();
                        system("cls");
                        cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t A^(b^-1) mod C";
                        mp::cpp_int a,b,c,power, aPow;

                        cout<< "\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tENTER THE VALUE OF A : ";
                        cin >>a;
                        cout<< "\n\n\t\t\t\t\t\t\t\tENTER THE POWER(b) : ";
                        cin >>power;
                        cout<< "\n\n\t\t\t\t\t\t\t\tENTER THE VALUE OF C : ";
                        cin >> b;
                        aPow = findPower(a,power);
                        c = findInverseMod(aPow,b);
                        cout <<"\n\n\t\t\t\t\t\t\t\t"<<a<<"^"<<power<<"^"<<"-1 "<<" MOD "<<b<<" = "<<c<<endl;
                        cout <<"\n\t\t\t\t\t\t\t\t";
                        system("pause");
                        goto sturbonguy;

                    }
                case '4':
                    {
                        myDecor.slowDemDown();
                        system("cls");
                        cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t A*(B^(c^-1)) mod D";
                        mp::cpp_int a,b,c, d,ans, inv;

                        cout<< "\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tENTER THE VALUE OF A : ";
                        cin >>a;
                        cout<< "\n\n\t\t\t\t\t\t\t\tENTER THE VALUE OF B : ";
                        cin >> b;
                        cout<< "\n\n\t\t\t\t\t\t\t\tENTER THE VALUE OF C : ";
                        cin >>c;
                        cout<< "\n\n\t\t\t\t\t\t\t\tENTER THE VALUE OF D : ";
                        cin >> d;
                        inv = findPower(b,c);
                        ans = (a*findInverseMod(inv,d))%d;
                        cout <<"\n\t\t\t\t\t\t\t\t"<<a<<"* ("<<b<<"^("<<c<<"^-1))"<<"mod"<<d<<" = "<<ans<<endl;
                        cout <<"\n\t\t\t\t\t\t\t\t";
                        system("pause");
                        goto sturbonguy;

                    }
                default :
                    {
                        system("cls");
                        cout<< "\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tABEG MAKE UNA ENTER A VALID OPTION"<<endl;
                        goto inverseStuff;
                    }

                    }
                sturbonguy:char choice2;
                cout <<"\n\n\t\t\t\t\t\t\t\tDO YOU WANT TO SOLVE ANOTHER INVERSE MOD QUESTION(y/n) : ";
                cin >> choice2;
                if(choice2 == 'y' || choice2 == 'Y')
                {
                    goto inverseStuff;
                }
                else if(choice2 == 'n' || choice2 == 'N')
                {
                    goto cases;
                }
                else
                {
                    cout <<"\n\n\t\t\t\t\t\t\t\tPLEASE ENTER A VALID OPTION";
                    goto sturbonguy;
                }
            }
        case '8'://view data
            {
                printmore:
                fstream inFile("DiscreteLog.abd");
                fstream inFile2("Elgama.abd");
                fstream inFile3("Diffie.abd");
                fstream inFile4;
                fstream inFile5;
                fstream inFile6;
                ("RSA.abd");
                ("RSAEnc.abd");
                 ("RSADec.abd");
                //QueuePtr<char> myQue;
                system("cls");
                int getOut = 3;
                 myDecor.slowDemDown();
                 system("cls");
                 cout<<"\n\n\n\n\n\t\t\t\t\t\t\tTHIS IS A PREMIUM FUNCTION, PLEASE FILL DETAILS TO CONTINUE"<<endl;
                string username, password;

                 fillAgain:
                 cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\tENTER USERNAME : ";
                 cin >> username;
                 cout<<"\n\n\t\t\t\t\t\t\t\t\tENTER PASSWORD : ";
                 /*char ch;
                 ch = _getch();
                 while(ch != 13)
                 {
                     if(ch == 8 )
                     {

                         ch = _getch();
                         myQue.dequeue();
                     }
                     else if (ch == 14 || ch == 15 || ch == 26 || ch == 24 || ch == 27)
                     {

                     }
                     else
                     {
                         //password.push_back(ch);
                         cout <<"*";
                         ch = _getch();
                         myQue.enqueue(ch);
                     }
                 }*/
                 cin >> password;
                 for(int i=0; i<=14; i++)
                 {
                    if((arrUsername[i]==username)&&(arrpassword[i]==password))
                    {
                        cout <<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t**ACCESS GRANTED**"<<endl;
                        cout <<"\n\n\t\t\t\t\t\t\t\t\t";
                        system("pause");
                        Sleep(2000);
                        system("cls");
                        char choice;
                        cout <<"\n\n\t\t\t\t\t\tWHICH DATA WOULD YOU LIKE TO RETRIEVE : "<<endl;
                        cout <<"\n\n\t\t\t\t\t\t(1)DISCRETE LOG DATA"<<endl;
                        cout <<"\n\n\t\t\t\t\t\t(2)ELGAMA CYPTO SYS DATA"<<endl;
                        cout <<"\n\n\t\t\t\t\t\t(3)DIFFIE HELLMAN KEY EXCHANGE DATA"<<endl;
                        cout <<"\n\n\t\t\t\t\t\t(4)RSA DATA"<<endl;
                        cout <<"\n\n\t\t\t\t\t\tENTER YOUR CHOICE : ";
                        cin >>choice;
                        if(choice == '1')
                        {
                            goto printDiscrete;
                        }
                        else if(choice == '2')
                        {
                            goto printElgama;
                        }
                        else if(choice == '3')
                        {
                            goto printDiffie;
                        }
                        else if(choice == '4')
                        {
                            goto printRSA;
                        }
                        else
                        {
                            cout <<"\n\n\t\t\t\t\t\tPLEASE ENTER A VALID OPTION";
                            Sleep(2000);
                            system("cls");
                            goto fillAgain;
                        }


                    }
                 }


                    cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t***INVALID PASSWORD***"<<endl;
                    --getOut;
                    cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t("<<getOut<<") Trials Remaining"<<endl;
                    cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t";
                    system("pause");
                    system("cls");
                    if(getOut == 0)
                    {
                        cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\tTRIALS EXAUSTED, DATA CAN'T BE RETRIEVED"<<endl;
                        system("pause");
                        goto cases;
                    }
                    else
                    {
                        system("cls");
                        goto fillAgain;
                    }

                        printDiscrete:system("cls");
                        if(inFile.fail())
                        {
                            cout<<"\n\n\n\n\n\t\t\t\tSORRY FOR THE INCOVINIENCE, SYSTEM IS UNDERGOING SOME ISSUES TRYING TO RETRIEVE THE DATA"<<endl;
                            cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\tPLEASE CONTACT THE ADMIN TO RECTIFY THIS ISSUE"<<endl;
                            cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t**THANKS FOR YOUR UNDERSTANDING"<<endl;
                            cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t";
                            system("pause");
                            goto printMore;
                        }
                        else
                        {
                                int p, alpha, beta, answer;
                                cout <<"\n\n\n\n\n\t\t\t\t\t\t\t\tTHE VALUE OF SAVED DATA IS PRINTED BELOW"<<endl;
                                while(inFile>>p>>alpha>>beta>>answer)
                                {
                                    cout << "\n\n\t\t\t\t\t\t\t\t"<<"P = "<<p<<"  Alpha = "<<alpha<<" Beta = "<<beta<<" DISCRETE LOG = "<<answer<<endl;
                                }
                                cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\tDATA RETRIEVED IF ANY SAVED DATA IS FOUND";
                                cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t";
                                inFile.close();
                                system("pause");
                                goto printMore;

                        }

                        printDiffie:system("cls");
                        if(inFile3.fail())
                        {
                            cout<<"\n\n\n\n\n\t\t\t\tSORRY FOR THE INCOVINIENCE, SYSTEM IS UNDERGOING SOME ISSUES TRYING TO RETRIEVE THE DATA"<<endl;
                            cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\tPLEASE CONTACT THE ADMIN TO RECTIFY THIS ISSUE"<<endl;
                            cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t**THANKS FOR YOUR UNDERSTANDING"<<endl;
                            cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t";
                            system("pause");
                            goto printMore;
                        }
                        else
                        {
                                int p,g,a,b,Ay,Be,Ai,Bi,Gab;
                                cout <<"\n\n\n\n\n\t\t\t\t\t\t\t\tTHE VALUE OF SAVED DATA IS PRINTED BELOW"<<endl;
                                while(inFile3>>p>>g>>a>>b>>Ay>>Be>>Ai>>Bi>>Gab)
                                {
                                    cout << "\n\n\t\t\t\t\t\t\t\t"<<"p = "<<p<<", "<<"g = "<<g<<", "<<"a = "<<a<<", "<<"b = "<<b<<", "
                                    <<"A = "<<Ay<<", "<<"B = "<<Be<<", "<<"Ai = "<<Ai<<", "<<"Bi = "<<Bi<<", "<<"G^(a*b) = "<<Gab<<endl;
                                }
                                cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\tDATA RETRIEVED IF ANY SAVED DATA IS FOUND";
                                cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t";
                                inFile3.close();
                                system("pause");
                                goto printMore;

                        }


                        printElgama:system("cls");
                        if(inFile2.fail())
                        {
                            cout<<"\n\n\n\n\n\t\t\t\tSORRY FOR THE INCOVINIENCE, SYSTEM IS UNDERGOING SOME ISSUES TRYING TO RETRIEVE THE DATA"<<endl;
                            cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\tPLEASE CONTACT THE ADMIN TO RECTIFY THIS ISSUE"<<endl;
                            cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t**THANKS FOR YOUR UNDERSTANDING"<<endl;
                            cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t";
                            system("pause");
                            goto printMore;
                        }
                        else
                        {
                                int p,alpha,a,k,x,beta,y1,y2;
                                cout <<"\n\n\n\n\n\t\t\t\t\t\t\t\tTHE VALUE OF SAVED DATA IS PRINTED BELOW"<<endl;
                                while(inFile2>>p>>alpha>>a>>k>>x>>beta>>y1>>y2)
                                {
                                    cout << "\n\n\t\t\t\t\t\t\t\t"<<"P = "<<p<<", "<<"Alpha = "<<alpha<<", "<<"a = "<<a<<", "<<"k = "<<k
                                    <<", "<<"x = "<<x<<", "<<"beta = "<<beta<<", "<<"y1 ="<<y1<<", "<<"y2 = "<<y2<<endl;
                                }
                                cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\tDATA RETRIEVED IF ANY SAVED DATA IS FOUND";
                                cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t";
                                inFile2.close();
                                system("pause");
                                goto printMore;

                        }

                        printRSA:
                        system("cls");
                        cout<<"\n\n\n\n\n\t\t\t\tWHICH RSA DATA WOULD YOU LIKE TO RETRIEVE?";
                        cout<<"\n\n\n\n\n\t\t\t\t(1)RSA KEY GENERATOR";
                        cout<<"\n\n\n\n\n\t\t\t\t(2)RSA ENCRYPTION";
                        cout<<"\n\n\n\n\n\t\t\t\t(3)RSA DECRYPTION";
                        cout<<"\n\n\n\n\n\t\t\t\tENTER YOUR CHOICE : ";
                        char choice;
                        cin >>choice;
                        inFile4.open("RSA.abd");
                        inFile5.open("RSAEnc.abd");
                        inFile6.open("RSADec.abd");
                        if(inFile4.fail()||inFile5.fail()||inFile6.fail())
                        {
                            cout<<"\n\n\n\n\n\t\t\t\tSORRY FOR THE INCOVINIENCE, SYSTEM IS UNDERGOING SOME ISSUES TRYING TO RETRIEVE THE DATA"<<endl;
                            cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\tPLEASE CONTACT THE ADMIN TO RECTIFY THIS ISSUE"<<endl;
                            cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t**THANKS FOR YOUR UNDERSTANDING"<<endl;
                            cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t";
                            system("pause");
                            goto printMore;
                        }
                        else
                        {


                            switch(choice)
                            {
                            case '1':
                                {
                                    system("cls");
                                    int p,q,n,c,d;
                                    string in;
                                    cout <<"\n\n\n\n\n\t\t\t\t\t\t\t\tTHE VALUE OF SAVED DATA IS PRINTED BELOW"<<endl;
                                    while(inFile4>>p>>q>>n>>c>>d)
                                    {
                                            cout << "\n\n\t\t\t\t\t\t\t\t"<<"P = "<<p<<", "<<"q = "<<q<<", "<<"n = "<<n<<", "<<"c = "<<c
                                        <<", "<<"d = "<<d<<endl;

                                    }
                                    cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\tDATA RETRIEVED IF ANY SAVED DATA IS FOUND";
                                    cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t";
                                    //inFile4.close();
                                    system("pause");
                                    goto printMore;

                                }
                            case '2':
                                {
                                    system("cls");
                                    int n,c,encrypt;
                                    string in;
                                    cout <<"\n\n\n\n\n\t\t\t\t\t\t\t\tTHE VALUE OF SAVED DATA IS PRINTED BELOW"<<endl;
                                    while(inFile5>>n>>c>>encrypt)
                                    {

                                            cout << "\n\n\t\t\t\t\t\t\t\t"<<"n = "<<n<<", "<<"c = "<<c
                                        <<", "<<"ENCRYPTED TEXT = "<<encrypt<<endl;

                                    }
                                    cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\tDATA RETRIEVED IF ANY SAVED DATA IS FOUND";
                                    cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t";
                                    //inFile4.close();
                                    system("pause");
                                    goto printMore;
                                }
                            case '3':
                                {
                                    system("cls");
                                    int n,d, decrypt;
                                    cout <<"\n\n\n\n\n\t\t\t\t\t\t\t\tTHE VALUE OF SAVED DATA IS PRINTED BELOW"<<endl;
                                    while(inFile6>>n>>d>>decrypt)
                                    {

                                            cout << "\n\n\t\t\t\t\t\t\t\t"<<"n = "<<n<<", "<<"d = "<<d
                                        <<", "<<"PLAIN TEXT = "<<decrypt<<endl;

                                    }
                                    cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\tDATA RETRIEVED IF ANY SAVED DATA IS FOUND";
                                    cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t";
                                    //inFile4.close();
                                    system("pause");
                                    goto printMore;
                                }
                            default:
                                {
                                    system("cls");
                                    cout <<"\n\n\t\t\t\t\t\t\t\tPLEASE ENTER A VALID OPTION";
                                    Sleep(3000);
                                    system("cls");
                                    goto printRSA;
                                }
                            }

                        }




                     printMore:char choice2;
                    cout <<"\n\n\t\t\t\t\t\t\t\tDO YOU WANT TO RETRIEVE ANOTHER DATA(y/n) : ";
                    cin >> choice2;
                    if(choice2 == 'y' || choice2 == 'Y')
                    {
                        system("cls");
                        cout <<"\n\n\t\t\t\t\t\t\t\tSORRY YOU WILL HAVE TO REFILL THE LOGIN INFO(for security purpose)"<<endl;
                        cout <<"\n\n\t\t\t\t\t\t\t\tON WINDOWS YOU CAN JUST PRESS THE UP BUTTON TO REFILL THE LAST INPUT DATA"<<endl;
                        cout <<"\n\n\t\t\t\t\t\t\t\t**THANK YOU FOR YOUR UNDERSTANDING**"<<endl;
                        system("cls");
                        goto printmore;
                    }
                    else if(choice2 == 'n' || choice2 == 'N')
                    {
                        myDecor.slowDemDown();
                        system("cls");
                        inFile4.close();
                        inFile5.close();
                        inFile6.close();
                        goto cases;
                    }
                    else
                    {
                        cout <<"\n\n\t\t\t\t\t\t\t\tPLEASE ENTER A VALID OPTION";
                        myDecor.slowDemDown();
                        system("cls");
                        goto printMore;
                }

            }
        case '10'://exit
            {
                myDecor.callExit();
            }
        case '4':
            {//Elgama
                system("cls");
                myDecor.slowDemDown();
                system("cls");
                char arrElgama[]={'T','H','E',' ','E','L','G','A','M','A',' ','P','U','B','L','I','C',' ','K','E','Y',' ','C',
                'R','Y','P','T','O',' ','S','Y','S','T','E','M'};
                cout << "\n\n\n\n\t\t\t\t\t\t\t";
                for(int i=0; i<35; i++)
                {
                    cout<<arrElgama[i];
                    Sleep(100);
                }
                backelgama:
                int alpha, a, k,  x;
                mp::cpp_int beta2,y1, y2,inv, ans,betaPow,ypow1,ypow2,p;
                cout <<"\n\n\t\t\t\t\t\tWHAT ACTION DO YOU WANT TO PERFORM ON THE ELGAMA CRYPTOSYSTEM"<<endl;
                cout <<"\n\n\t\t\t\t\t\t\t\t(1) CHECK TUTORIAL"<<endl;
                cout <<"\n\n\t\t\t\t\t\t\t\t(2) SOLVE ELGAMA SHOWING ALL STEPS"<<endl;
                cout <<"\n\n\t\t\t\t\t\t\t\t(3) SOLVE ELGAMA WITHOUT STEPS"<<endl;
                cout <<"\n\n\t\t\t\t\t\t\t\tENTER YOUR CHOICE : ";
                char choice4;
                cin >>choice4;
                system("cls");
                if(choice4 == '1')
                {//write about tutorials here
                    cout <<"\n\n\t\t\t\t\tSOLVING ELGAMA CRYPTOSYSTEM"<<endl;
                    Sleep(1700);
                    cout <<"\n\n\t\t\t\t\tYOU WOULD BE PROVIDED WITH FIVE(5) VARIABLES"<<endl;
                    Sleep(2000);
                    cout <<"\n\n\t\t\t\t\tWHICH ARE: P(prime num), Alpha(primitive element modulus p)"<<endl;
                    Sleep(2500);
                    cout <<"\n\n\t\t\t\t\ta(private key), K(public key), X(the message to transfer)"<<endl;
                    Sleep(2500);
                    cout <<"\n\n\t\t\t\t\tHAVING THESE FIVE(5) VARIABLES, LETS BEGIN EXPLANATION"<<endl;
                    Sleep(2100);
                    cout <<"\n\n\t\t\t\t\tWE WANT TO SEND MESSAGE 'X' TO A PERSON"<<endl;
                    Sleep(2100);
                    cout <<"\n\n\t\t\t\t\tAND WE WANT THE MESSAGE TO BE CONFIDENTIAL"<<endl;
                    Sleep(2100);
                    cout <<"\n\n\t\t\t\t\tSO WE WANT TO ENCRYPT THE MESSAGE AND SEND IT TO THE PERSON"<<endl;
                    Sleep(2200);
                    cout <<"\n\n\t\t\t\t\tUSING THE ELGAMA CRYPTOSYSTEM, WE WILL FIRST CALCULATE VALUE OF 'Beta"<<endl;
                    Sleep(2200);
                    cout <<"\n\n\t\t\t\t\tWHERE 'Beta' = Alpha^a Mod P (i.e Alpha raise to power of a modulus p) "<<endl;
                    Sleep(2200);
                    cout <<"\n\n\t\t\t\t\tAFTER CALCULATING 'Beta' WE NEED TO GENERATE OUR CIPHER TEXT (y1,y2) "<<endl;
                    Sleep(2200);
                    cout <<"\n\n\t\t\t\t\tWHERE y1 = Alpha^k mod p(i.e alpha raise to power k modulus p)"<<endl;
                    Sleep(2100);
                    cout <<"\n\n\t\t\t\t\tAND y2 = X*(Beta^K) mod p(i.e x multiply be alpha raise to power k mod p)"<<endl;
                    Sleep(2200);
                    cout <<"\n\n\t\t\t\t\tTHE VALUE OF y1 and Y2 RESPECTIVELY ARE OUR ENCRYPTED TEXT"<<endl;
                    Sleep(2100);
                    cout <<"\n\n\t\t\t\t\tAND WOULD BE SEND TO THE RECIEVER AS (y1,y2) RESPECTIVELY"<<endl;
                    Sleep(230);
                    cout <<"\n\n\t\t\t\t\tON REACHING THE RECIEVER, HE/SHE WOULD HAVE TO DECRYPT IT"<<endl;
                    Sleep(2100);
                    cout <<"\n\n\t\t\t\t\tFOR DECRYPTION(dk), THE RECIRVER HAVE TO CALCULATE THE FOLLOWING TO COMPUTE THE PLAIN TEXT"<<endl;
                    Sleep(2500);
                    cout <<"\n\n\t\t\t\t\tdk = y2(y1^a)^-1 mod p(i.e 'y2' multiply by 'y1' raise to power 'a' inverse mod 'p')"<<endl;
                    Sleep(2500);
                    cout <<"\n\n\t\t\t\t\tTHEN THE RECIEVER WOULD GET THE PLAIN TEXT BACK"<<endl;
                    Sleep(2100);
                    cout <<"\n\n\t\t\t\t\tTHAT'S ALL ABOUT SOLVING ELGAMA, SOLVE A QUESTION TO UNDERSTAND BETTER"<<endl;
                    Sleep(8000);
                    cout <<"\n\n\t\t\t\t\t";
                    system("pause");
                    goto Elgama;
                }
                else if (choice4 == '2')
                {//SOLVE ELGAMA SHOWING ALL STEPS

                    goto elgamaSteps;
                }
                else if(choice4 == '3')
                {//SOLVE ELGAMA WITHOUT STEPS
                    goto elgamaNoSteps;
                }
                else
                {
                    cout <<"\n\n\t\t\t\t\t\t\t\tPLEASE ENTER A VALID OPTION"<<endl;
                    goto backelgama;
                }

                elgamaSteps:
                cout <<"\n\n\n\n\n\t\t\t\t\t\t\t\tENTER THE VALUE OF 'P' : ";
                cin >>p;
                cout <<"\n\n\t\t\t\t\t\t\t\tENTER THE VALUE OF 'Alpha' : ";
                cin >>alpha;
                cout <<"\n\n\t\t\t\t\t\t\t\tENTER THE VALUE OF 'a' : ";
                cin >> a;
                cout <<"\n\n\t\t\t\t\t\t\t\tENTER THE VALUE OF 'k'(key) : ";
                cin >>k;
                cout <<"\n\n\t\t\t\t\t\t\t\tENTER THE VALUE OF 'x'(message) : ";
                cin >> x;
                Sleep(3000);
                cout <<"\n\n\t\tTO SOLVE ELGAMA, WE NEED TO FIRST CALCULATE 'Beta'"<<endl;
                Sleep(3500);
                cout <<"\n\n\t\tWHERE Beta = Alpha^a mod P(i.e alpha raise to power a modulus p)"<<endl;
                Sleep(4000);
                cout <<"\n\n\t\tCONTINUE WE GET Beta = "<<alpha<<"^"<<a<<" mod "<<p<<endl;
                Sleep(4700);
                betaPow = findPower(alpha, a);
                beta2 = (betaPow)%p;
                cout <<"\n\n\t\tCALCULATING "<<alpha<<"^"<<a<<" WE HAVE Beta = "<<betaPow<<" mod "<<p<<endl;
                Sleep(4700);
                cout <<"\n\n\t\tAFTER CALCULATING THAT WE GET 'Beta' = "<<beta2<<endl;
                Sleep(4000);
                cout <<"\n\n\t\tTHE NEXT THING TO DO IS TO COMPUTE CIPHER TEXT y1 AND y2"<<endl;
                Sleep(4000);
                cout <<"\n\n\t\tWHERE y1 = Alpha^k mod p(i.e alpha raise to power k modulus p)"<<endl;
                Sleep(4000);
                cout <<"\n\n\t\tTHEREFORE y1 = "<<alpha<<"^"<<k<<" mod "<<p<<endl;
                Sleep(4500);
                ypow1 = findPower(alpha, k);
                cout <<"\n\n\t\tCALCULATING "<<alpha<<"^"<<k<<" WE HAVE y1 = "<<ypow1<<" mod "<<p<<endl;
                Sleep(4900);
                y1 =ypow1%p;
                cout <<"\n\n\t\tSOLVING THAT WE GET y1 = "<<y1<<endl;
                Sleep(4000);
                cout <<"\n\n\t\t NEXT THING TO DO IS TO CALCULATE y2"<<endl;
                Sleep(4000);
                cout <<"\n\n\t\tWHERE y2 = x*(beta^k) mod p(i.e x multiply by beta raise to power k modulus p)"<<endl;
                Sleep(4600);
                cout <<"\n\n\t\tPUTING OUR VALUES IN, WE HAVE y2 = "<<x<<"*("<<beta2<<"^"<<k<<") mod "<<p<<endl;
                Sleep(5000);
                cout <<"\n\n\t\tFIRST LETS CALCULATE "<<beta2<<"^"<<k<<" WHICH IS = "<<findPower(beta2,k)<<endl;
                Sleep(5000);
                cout <<"\n\n\t\tNEXT WE MULTIPLY "<<x<<" BY "<<findPower(beta2,k)<<" AND GET THE MODULUS"<<endl;
                Sleep(5000);
                cout <<"\n\n\t\tDOING SO, WE HAVE y2 = "<<x<<"*"<<findPower(beta2,k)<<" mod "<<p<<endl;
                Sleep(5000);
                cout <<"FOR NUMBERS THAT IS VERY LONG, YOU HAVE TO BREAK DOWN THE POWER AND THEM SOLVE IT"<<endl;
                Sleep(4000);
                ypow2 = (x* findPower(beta2, k));
                y2 = ypow2%p;
                cout <<"\n\n\t\tCALCULATING WE HAVE y2 = "<<y2<<endl;
                Sleep(4000);
                cout <<"\n\n\t\tNOW WE HAVE OUR y1 AND y2 WHICH IS EQUAL TO "<<y1<<" AND "<<y2<<" RESPECTIVELY"<<endl;
                Sleep(4000);
                cout <<"\n\n\t\tWE THEN SEND THE VALUE OF y1 AND y2 AS OUR ENCRYPTED TEXT"<<endl;
                Sleep(4000);
                cout <<"\n\n\t\tIN AN EXAM, JUST WRITE ENCRYPTED TEXT(y1,y2) = "<<"("<<y1<<","<<y2<<")"<<endl;
                Sleep(4000);
                cout <<"\n\n\t\tFOR DECRYPTION"<<endl;
                cout <<"\n\n\t\tWE NEED TO HAVE OUR ENCRYPTED TEXT (y1,y2)"<<endl;
                Sleep(4000);
                cout <<"\n\n\t\tHAVING THAT WE CAN PROCEED"<<endl;
                Sleep(4000);
                cout <<"\n\n\t\tTO DECRYPT, THE FORMULAR IS dk = y2*(y1^a)^-1 mod p"<<endl;
                Sleep(4000);
                cout <<"\n\n\t\tTHEN WE HAVE dk = "<<y2<<"*("<<y1<<"^"<<a<<"^-1)"<<"mod"<<p<<endl;
                Sleep(4700);
                cout <<"\n\n\t\tTO SOLVE THIS THE EASIEST WAY IS TO FIRST FIND THE VALUE OF THE INVERSE"<<endl;
                Sleep(4000);
                cout <<"\n\n\t\tWHICH MEANS WE NEED TO CALCULATE ("<<y1<<"^"<<a<<")^-1 mod "<<p<<" FIRST"<<endl;
                Sleep(4000);
                cout <<"\n\n\t\tDO THIS USING YOUR PREFERED METHOD AND SUBSTITUTE THE ANSWER INTO THE FORMULAR"<<endl;
                Sleep(4000);
                inv = findPower(y1,a);
                cout <<"\n\n\t\tSOLVING THAT WE HAVE dk = "<<y2<<"("<<findInverseMod(inv,p)<<") mod "<<p<<endl;
                Sleep(4000);
                ans = (y2*findInverseMod(inv,p))%p;
                cout <<"\n\n\t\tTHEN WE MULTIPLY "<<y2<<" BY "<<findInverseMod(inv,p)<<endl;
                Sleep(4000);
                cout <<"\n\n\t\tDOING SO WE HAVE dk = "<<y2<<"*"<<findInverseMod(inv,p)<<" mod "<<p<<endl;
                Sleep(4000);
                cout <<"\n\n\t\tCALCULATING WE HAVE dk = "<<ans<<endl;
                Sleep(4000);
                cout <<"\n\n\t\tTHEREFORE "<<ans<<" IS THE PLAINTEXT OF OUR CIPHERTEXT ("<<y1<<","<<y2<<")"<<endl;
                Sleep(4000);
                cout <<"\n\n\t\tIN AN EXAM JUST WRITE 'THE DECRYPTION OF "<<y1<<","<<y2<<" = "<<ans<<endl;
                Sleep(4000);
                cout <<"\n\n\t\tTHIS IS WHERE YOU CONCLUDE YOUR CALCULATION :)"<<endl;
                Sleep(20000);
                cout <<"\n\n\t\t";
                system("pause");
                goto saveAll2;


                elgamaNoSteps:
                cout <<"\n\n\n\n\n\t\t\t\t\t\t\t\tENTER THE VALUE OF 'P' : ";
                cin >>p;
                cout <<"\n\n\t\t\t\t\t\t\t\tENTER THE VALUE OF 'Alpha' : ";
                cin >>alpha;
                cout <<"\n\n\t\t\t\t\t\t\t\tENTER THE VALUE OF 'a' : ";
                cin >> a;
                cout <<"\n\n\t\t\t\t\t\t\t\tENTER THE VALUE OF 'k'(key) : ";
                cin >>k;
                cout <<"\n\n\t\t\t\t\t\t\t\tENTER THE VALUE OF 'x'(message) : ";
                cin >> x;
                betaPow = findPower(alpha, a);
                beta2 = (betaPow)%p;

                ypow1 = findPower(alpha, k);
                y1 =ypow1%p;

                ypow2 = (x* findPower(beta2, k));
                y2 = ypow2%p;
                cout <<"\n\n\t\t\t\t\t\t\t\tCALCULATING..."<<endl;
                Sleep(2000);
                cout << "\n\n\t\t\t\t\t\t\t\tBETA = "<<beta2<<endl;
                cout << "\n\n\t\t\t\t\t\t\t\tTHE CIPHER TEXT Ek(y1,y2) = ("<<y1<<","<<y2<<")"<<" RESPECTIVELY"<<endl;
                cout <<"\n\n\t\t\t\t\t\t\t\tFOR DECRYPTION"<<endl;
                inv = findPower(y1,a);
                ans = (y2*findInverseMod(inv,p))%p;
                cout <<"\n\n\t\t\t\t\t\t\t\t"<<y2<<"* ("<<y1<<"^("<<a<<"^-1))"<<"mod"<<p<<" = "<<ans<<endl;
                cout <<"\n\n\t\t\t\t\t\t\t\t"<<ans<<" IS OUR DECRYPTED MESSAGE ("<<y1<<","<<y2<<")"<<endl;
                cout <<"\n\n\t\t\t\t\t\t\t\t";
                system("pause");
                goto saveAll2;


                saveAll2:system("cls");
                cout << "\n\n\n\n\n\t\t\t\t\t\t\t\tDO YOU WANT TO SAVE THE SOLUTION TO THIS ELGAMA PROBLEM(Y/N) : ";
                char save;
                cin >>save;
                if(save== 'y' || save == 'Y' )
                {
                    fstream DiscreteLog("Elgama.abd", ios::app);
                    if(DiscreteLog.fail())
                    {
                        cout<<"\n\n\n\n\n\t\t\t\tSORRY FOR THE INCOVINIENCE, SYSTEM IS UNDERGOING SOME ISSUES TRYING TO SAVE THE DATA"<<endl;
                        cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\tPLEASE CONTACT THE ADMIN TO RECTIFY THIS ISSUE"<<endl;
                        cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t**THANKS FOR YOUR UNDERSTANDING"<<endl;
                        cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t";
                        system("pause");
                        goto Elgama;
                    }
                    else
                    {
                        int getOut2 = 3;
                        myDecor.slowDemDown();
                        system("cls");
                        cout<<"\n\n\n\n\n\t\t\t\t\t\t\tTHIS IS A PREMIUM FUNCTION, PLEASE FILL DETAILS TO CONTINUE"<<endl;
                        string username2, password2;

                        fillAgain3:cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\tENTER USERNAME : ";
                        cin >> username2;
                        cout<<"\n\n\t\t\t\t\t\t\t\t\tENTER PASSWORD : ";
                        cin >> password2;
                        for(int i=0; i<=14; i++)
                        {
                        if((arrUsername[i]==username2)&&(arrpassword[i]==password2))
                        {
                            cout <<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t**ACCESS GRANTED**"<<endl;
                            cout <<"\n\n\t\t\t\t\t\t\t\t\t";
                            system("pause");
                            Sleep(2000);
                            goto saveThings2;
                        }
                        }

                        cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t***INVALID PASSWORD**"<<endl;
                        --getOut2;
                        cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t("<<getOut2<<") Trials Remaining"<<endl;
                        cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t";
                        system("pause");
                        system("cls");
                        if(getOut2 == 0)
                        {
                            cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\tTRIALS EXAUSTED, DATA CAN'T BE SAVED"<<endl;
                            goto Elgama;
                        }
                        else{
                            system("cls");
                            goto fillAgain3;
                            }


                            saveThings2:DiscreteLog<<p<<" "<<alpha<<" "<<a<<" "<<k<<" "<<x<<" "<<beta2<<" "<<y1
                            <<" "<<y2<<"\n";
                            cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\tDATA SAVED SUCCESSFULLY";
                            cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t";
                            DiscreteLog.close();
                            system("pause");
                            goto Elgama;

                        }
                                //write saving function here
                    }
                    else if(save == 'N' || save == 'n')
                    {
                        cout <<"\n\n\n\n\n\t\t\t\t\t\t\t\tOK, THANK YOU FOR USING MY PROGRAM"<<endl;
                        cout <<"\n\n\n\n\n\t\t\t\t\t\t\t\t";
                        system("pause");
                        goto Elgama;
                    }
                    else
                    {
                        cout <<"\n\n\n\n\n\t\t\t\t\t\t\t\tPLEASE ENTER A VALID OPTION, ABI MAKE I SPEAK PIGIN"<<endl;
                        cout <<"\n\n\n\n\n\t\t\t\t\t\t\t\tABEG MAKE UNA ENTER VALID OPTION NA :)"<<endl;
                        system("pause");
                        goto saveAll2;
                    }

                Elgama:char choice2;
                cout <<"\n\n\t\t\t\t\t\t\t\tDO YOU WANT TO SOLVE ANOTHER ELGAMA QUESTION(y/n) : ";
                cin >> choice2;
                if(choice2 == 'y' || choice2 == 'Y')
                {
                    myDecor.slowDemDown();
                    goto backelgama;
                }
                else if(choice2 == 'n' || choice2 == 'N')
                {
                    myDecor.slowDemDown();
                    goto cases;
                }
                else
                {
                    cout <<"\n\n\t\t\t\t\t\t\t\tPLEASE ENTER A VALID OPTION";
                    myDecor.slowDemDown();
                    goto Elgama;
                }


            }
        case '5':
            {//D-H
                myDecor.slowDemDown();
                system("cls");
                cout << "\n\n\n\t\t\t\t\t\t\t";
                char arrayDiffie[]={'D','I','F','F','I','E',' ','H','E','L','L','M','A','N',' ','K','E','Y',' ',
                'E','X','C','H','A','N','G','E',' ','S','Y','S','T','E','M',};
                for(int i=0; i<34; i++)
                {
                    cout <<arrayDiffie[i];
                    Sleep(100);
                }
                backDiffie:
                mp::cpp_int p,g,a,b,Ay,Be,Ai,Bi,ab,Gab;
                cout <<"\n\n\t\t\t\t\t\tWHAT ACTION DO YOU WANT TO PERFORM ON THE DIFFIE HELLMAN KEY EXCHANGE SYSTEM"<<endl;
                cout <<"\n\n\t\t\t\t\t\t\t\t(1) CHECK TUTORIAL"<<endl;
                cout <<"\n\n\t\t\t\t\t\t\t\t(2) GENERATE KEY SHOWING ALL STEPS"<<endl;
                cout <<"\n\n\t\t\t\t\t\t\t\t(3) GENERATE KEY WITHOUT STEPS"<<endl;
                cout <<"\n\n\t\t\t\t\t\t\t\tENTER YOUR CHOICE : ";
                char choice4;
                cin >>choice4;
                system("cls");
                if(choice4 == '1')
                {//write about tutorials here
                    system("cls");
                    cout <<"\n\n\t\t\t\t\tGENERATING KEY WITH DIFFIE HELLMAN SYSTEM"<<endl;
                    Sleep(1700);
                    cout <<"\n\n\t\t\t\t\tWE WILL NEED FOUR(4) VARIABLES"<<endl;
                    Sleep(2000);
                    cout <<"\n\n\t\t\t\t\tWHICH ARE: P(public key from Mr X), g(public key from Mr Y)"<<endl;
                    Sleep(2500);
                    cout <<"\n\n\t\t\t\t\ta(secret integer from Mr Y), b(secret integer from Mr Y)"<<endl;
                    Sleep(2500);
                    cout <<"\n\n\t\t\t\t\tHAVING CHOOSED THESE FIVE(4) VARIABLES, LETS BEGIN EXPLANATION"<<endl;
                    Sleep(2100);
                    cout <<"\n\n\t\t\t\t\tWE WANT TO GENERATE A PRIVATE KEY THAT CAN BE USED BY DECRYPT A MESSAGE"<<endl;
                    Sleep(2100);
                    cout <<"\n\n\t\t\t\t\tOUR PUBLIC KEY CAN BE KNOWN BY ANYONE, BUT THE PRIVATE KEY WILL BE SECRET"<<endl;
                    Sleep(2100);
                    cout <<"\n\n\t\t\t\t\tTHE PUBLIC KEY WILL BE USED FOR ENCRYPTION, WHILE PRIVATE  FOR DECRYPTION"<<endl;
                    Sleep(2200);
                    cout <<"\n\n\t\t\t\t\tTHIS WILL ENSURE CONFIDENTIALITY OF THE MESSAGE, BUT NOT THE INTEGRITY"<<endl;
                    Sleep(2200);
                    cout <<"\n\n\t\t\t\t\tTHE MESSAGE CAN BE ENCRYTED(Ek) BY ANYONE THAT HAS THE PUBLIC KEY"<<endl;
                    Sleep(2200);
                    cout <<"\n\n\t\t\t\t\tBUT CAN ONLY BE DECRYPT(dK) WITH THE PRIVATE KEY"<<endl;
                    Sleep(2200);
                    cout <<"\n\n\t\t\t\t\tTHEREFORE, AN UNKOWN THIRD PARTY CAN STILL ECNRYPT A MESSAGE AND PRETEND ITS FROM THE ORIGINAL SENDER"<<endl;
                    Sleep(2100);
                    cout <<"\n\n\t\t\t\t\tSO, HERE THE INTEGRITY IS BREACHED, BUT THE MESSAGE IS STILL CONFIDENTIAL"<<endl;
                    Sleep(2200);
                    cout <<"\n\n\t\t\t\t\tIN ORDER TO ASSURE THE INTEGRITY OF A MESSAGE, WE WILL HAVE TO Ek WITH A PRIVATE KEY, AND dK WITH PUBLIC"<<endl;
                    Sleep(2100);
                    cout <<"\n\n\t\t\t\t\tTHEN THE INTEGRITY IS ASSURED BUT IT MIGHT NOT BE CONFIDENTIAL"<<endl;
                    Sleep(230);
                    cout <<"\n\n\t\t\t\t\tAS ANYONE WITH THE PUBLIC KEY CAN VIEW THE MESSAGE"<<endl;
                    Sleep(2100);
                    cout <<"\n\n\t\t\t\t\tBUT THE RECIEVER WILL BE SURE THAT THE MESSAGE IS TRULY FROM THE SENDER"<<endl;
                    Sleep(2500);
                    cout <<"\n\n\t\t\t\t\tWE DISCUSSED THE ABOVE JUST FOR UNDERSTANDING, IN CASE IF ASKED IN EXAM"<<endl;
                    Sleep(2500);
                    cout <<"\n\n\t\t\t\t\tSO LETS CONTINUE WITH THE D-H SYSTEM"<<endl;
                    Sleep(2100);
                    cout <<"\n\n\t\t\t\t\tAFTER HAVING THE VARIABLES"<<endl;
                    Sleep(2500);
                    cout <<"\n\n\t\t\t\t\tTHE FIRST THING TO  DO IS TO COMPUTE 'A'"<<endl;
                    Sleep(2100);
                    cout <<"\n\n\t\t\t\t\tWHERE A = g^a mod p(i.e 'g' raise to power 'a' modulus p)"<<endl;
                    Sleep(2500);
                    cout <<"\n\n\t\t\t\t\tTHEN WE NEED TO COMPUTE 'B'"<<endl;
                    Sleep(2100);
                    cout <<"\n\n\t\t\t\t\tWHERE B = g^b mod p(i.e 'g' raise to power 'b' modulus p)"<<endl;
                    Sleep(2500);
                    cout <<"\n\n\t\t\t\t\tTHEN THE PARTY WOULD HAVE TO COMPUTE 'Ai' AND 'Bi'"<<endl;
                    Sleep(2100);
                    cout <<"\n\n\t\t\t\t\tWHERE 'Ai' = B^a mod P AND 'Bi' = A^b mod P"<<endl;
                    Sleep(2500);
                    cout <<"\n\n\t\t\t\t\tCOMPUTING WE WILL NOTICE THAT 'Ai' IS EQUIVALENT TO 'Bi'(i.e Ai = Bi also equal to g^ab)"<<endl;
                    Sleep(2100);
                    cout <<"\n\n\t\t\t\t\tTHEREFORE, OUR PRIVATE KEY IS 'Ai' OR 'Bi', SINCE THEY ARE EQUAL"<<endl;
                    Sleep(2500);
                    cout <<"\n\n\t\t\t\t\tWE WILL BE USING 'p' AND 'g' AS THE PUBLIC KEY"<<endl;
                    Sleep(2100);
                    cout <<"\n\n\t\t\t\t\tALSO WE WILL BE USING OUR 'Ai' AS THE PRIVATE KEY"<<endl;
                    Sleep(2500);
                    cout <<"\n\n\t\t\t\t\tTHAT'S ALL FOR THE DIFFIE HELLMAN KEY GENERAING ALGORITHM"<<endl;
                    Sleep(2100);
                    cout <<"\n\n\t\t\t\t\tYOU CAN ALSO SOLVE A QUESTION TO UNDERSTAND BETTER :)"<<endl;
                    Sleep(8000);
                    cout <<"\n\n\t\t\t\t\t";
                    system("pause");
                    goto Diffie;
                }
                else if (choice4 == '2')
                {//SOLVE ELGAMA SHOWING ALL STEPS
                    system("cls");
                    goto DiffieSteps;
                }
                else if(choice4 == '3')
                {//SOLVE ELGAMA WITHOUT STEPS
                    system("cls");
                    goto DiffieNoSteps;
                }
                else
                {
                    cout <<"\n\n\t\t\t\t\t\t\t\tPLEASE ENTER A VALID OPTION"<<endl;
                    system("cls");
                    goto backDiffie;
                }

                DiffieSteps:
                {
                Sleep(1000);
                cout <<"\n\n\t\t\t\t\tWE WILL NEED FOUR(4) VARIABLES, 'P', 'g', 'a', 'b'"<<endl;
                Sleep(2500);
                cout <<"\n\n\t\t\t\t\tCHECK THE TUTORIAL TO KNOW WHAT THEY ARE"<<endl;
                Sleep(2500);
                cout <<"\n\n\n\t\t\t\t\t\tENTER THE VALUE OF 'p' : ";
                cin >>p;
                cout <<"\n\n\t\t\t\t\t\tENTER THE VALUE OF 'g' : ";
                cin >>g;
                cout <<"\n\n\t\t\t\t\t\tCHOOSE THE VALUE OF 'a' : ";
                cin >> a;
                cout <<"\n\n\t\t\t\t\t\tCHOOSE THE VALUE OF 'b' : ";
                cin >>b;
                cout <<"\n\n\t\t\t\t\tAFTER GETTING ALL THESE VARIABLES, LETS BEGIN EXPLANATION"<<endl;
                Sleep(2500);
                cout <<"\n\n\t\t\t\t\tNOTE THAT:- CALCULATION ON THE SYSTEM MIGHT TAKE A WHILE FOR LARGE NUMBERS"<<endl;
                Sleep(2500);
                cout <<"\n\n\t\t\t\t\tTHE FIRST STEP IS TO COMPUTE 'A' WHERE 'A' = g^a mod p"<<endl;
                Sleep(2500);
                cout <<"\n\n\t\t\t\t\tSUBSTITUTING OUR IN WE HAVE A = "<<g<<"^"<<a<<" mod "<<p<<endl;
                Sleep(3000);
                cout <<"\n\n\t\t\t\t\tSO FIRSTLY, LETS CALCULATE g^a (i.e)"<<g<<"^"<<a<<endl;
                Sleep(2500);
                cout <<"\n\n\t\t\t\t\tNOTE: THE NUMBERS MIGHT BE INCREDIBLY HIGH, DUE TO HIGH POWERS"<<endl;
                Sleep(2700);
                cout <<"\n\n\t\t\t\t\tWHENEVER THE PROGRAM SLOWS DOWN DURING EXPLANATION, NOTE THAT A BIG COPUTATION IS GOING ON"<<endl;
                Sleep(3000);
                cout <<"\n\n\t\t\t\t\tJUST RELAX AND WAIT FOR IT TO COMPLETE"<<endl;
                Sleep(2500);
                cout <<"\n\n\t\t\t\t\tSOLVING MANUALY, YOU SHOULD BREAK THE POWER DOWN FIRST"<<endl;
                Sleep(2500);
                cout <<"\n\n\t\t\t\t\tYOU CAN CHECK YOUTUBE TO LEARN THAT, I RECOMMEND THIS VIDEO(modular exponential made easy)"<<endl;
                Sleep(2500);
                cout <<"\n\n\t\t\t\t\tCOMPUTING............"<<endl;
                mp::cpp_int aPower = findPower(g,a);
                cout <<"\n\n\t\t\t\t\tCOMPUTING "<<g<<"^"<<a<<" WE HAVE "<<g<<"^"<<a<<" = "<<aPower<<endl;
                Sleep(2500);
                cout <<"\n\n\t\t\t\t\tPUTING THAT BACK INTO THE EQUATION"<<endl;
                Sleep(2500);
                cout <<"\n\n\t\t\t\t\tWE HAVE A = "<<aPower<<" mod "<<p<<endl;
                Sleep(2500);
                Ay = (aPower%p);
                cout <<"\n\n\t\t\t\t\tCALCULATING THAT WE HAVE A = "<<Ay<<endl;
                Sleep(2500);
                cout <<"\n\n\t\t\t\t\tTHE NEXT STEP IS TO CALCULATE 'B' WHERE B = g^b mod p"<<endl;
                Sleep(2500);
                cout <<"\n\n\t\t\t\t\tSUBSTITUTING IN WE HAVE B = "<<g<<"^"<<b<<" mod "<<p<<endl;
                Sleep(2500);
                cout <<"\n\n\t\t\t\t\tJUST LIKE BEFORE, LETS CALCULATE OUR g^b FIRST (i.e "<<g<<"^"<<b<<")"<<endl;
                Sleep(2500);
                cout <<"\n\n\t\t\t\t\tCOMPUTING........"<<endl;
                mp::cpp_int bPower = findPower(g,b);
                cout <<"\n\n\t\t\t\t\tDOING SO WE HAVE "<<g<<"^"<<b<<" = "<<bPower<<endl;
                Sleep(2500);
                cout <<"\n\n\t\t\t\t\tAFTER THAT LETS GET THE MODULUS"<<endl;
                Sleep(2500);
                cout <<"\n\n\t\t\t\t\t B = "<<bPower<<" mod "<<p<<endl;
                Sleep(2500);
                Be = (bPower%p);
                cout <<"\n\n\t\t\t\t\tCALCULATING WE HAVE B = "<<Be<<endl;
                Sleep(2500);
                cout <<"\n\n\t\t\t\t\tWE NOW HAVE OUR A = "<<Ay<<" AND B = "<<Be<<endl;
                Sleep(2500);
                cout <<"\n\n\t\t\t\t\tTHE NEXT THING TO DO IS TO COMPUTE THE PRIVATE KEY"<<endl;
                Sleep(2500);
                cout <<"\n\n\t\t\t\t\tTHEREFORE WE NEED TO COMPUTE 'Ai' AND 'Bi'"<<endl;
                Sleep(2500);
                cout <<"\n\n\t\t\t\t\tWHRERE 'Ai' = B^a mod p AND 'Bi' = A^b mod p"<<endl;
                Sleep(2500);
                cout <<"\n\n\t\t\t\t\tSO, LETS COMPUTE Ai, Ai = "<<Be<<"^"<<a<<" mod "<<p<<endl;
                Ai = (findPower(Be,a)%p);
                cout <<"\n\n\t\t\t\t\tSOLVING THE POWER AND GETING THE MODULUS, WE HAVE Ai = "<<Ai<<endl;
                Sleep(2500);
                cout <<"\n\n\t\t\t\t\tNEXT WE COMPUTE Bi, WHERE Bi = "<<Ay<<"^"<<b<<" mod "<<p<<endl;
                Bi = (findPower(Ay,b)%p);
                cout <<"\n\n\t\t\t\t\tSOLVING THAT WE HAVE Bi = "<<Bi<<endl;
                Sleep(2500);
                cout <<"\n\n\t\t\t\t\tSO, IN ORDER TO BE SURE ABOUT OUR CALCULATIONS, LETS COMPUTE g^ab, AND COMPARE ALL THE VALUES"<<endl;

                Sleep(2500);
                cout <<"\n\n\t\t\t\t\tg^ab = "<<g<<"^"<<a<<"*"<<b<<endl;
                Sleep(2500);
                cout <<"\n\n\t\t\t\t\tTHIS MIGHT TAKE A WHILE FOR LARGE VALUES OF 'a' AND 'b' DEPENDING ON YOUR SYSTEM SPEED"<<endl;
                gabi:Sleep(2500);
                cout <<"\n\n\t\t\t\t\tDO YOU WANT TO CALCULATE IT"<<endl;
                cout<<"\n\n\t\t\t\t\tENTER YOUR CHOICE : ";
                char gab;
                cin >>gab;
                if(gab == 'y' || gab == 'Y')
                {
                    Sleep(2500);
                    cout <<"\n\n\t\t\t\t\tCALCULATING......."<<endl;
                    ab = a*b;
                    Gab = (findPower(g,ab)%p);
                    Sleep(2500);
                    cout <<"\n\n\t\t\t\t\tSOLVING THAT WE HAVE g^ab = "<<Gab<<endl;
                    Sleep(2500);
                    cout <<"\n\n\t\t\t\t\tSO NOW LETS COMPARE OUR VALUES"<<endl;
                    Sleep(2000);
                    cout <<"\n\n\t\t\t\t\t\tAi = "<<Ai<<endl;
                    cout <<"\n\n\t\t\t\t\t\tBi = "<<Bi<<endl;
                    cout <<"\n\n\t\t\t\t\t\tg^(a*b) = "<<Gab<<endl;
                    Sleep(2500);
                    cout <<"\n\n\t\t\t\t\tIF Ai = Bi = g^ab THEN OUR CALCULATTION IS CORRECT"<<endl;
                    Sleep(2500);
                    cout <<"\n\n\t\t\t\t\tIF NOT, THEN CHECK THE QUESTION AND SEE IF THERE IS ANY ERROR"<<endl;
                    if(Ai==Bi && Ai ==Gab)
                    {
                        Sleep(2500);
                        cout <<"\n\n\t\t\t\t\tFROM THE SYSTEM, I CAN SEE THAT ITS CORRECT, AND LETS WRAP THIS UP"<<endl;
                        Sleep(2500);
                        cout <<"\n\n\t\t\t\t\tTHEREFORE, THE PRIVATE KEY WILL BE "<<Ai<<endl;
                        Sleep(2500);
                        cout <<"\n\n\t\t\t\t\tWE HAVE SUCCESFULLY SOLVED THE QUESTION :)"<<endl;
                        Sleep(2500);
                        cout <<"\n\n\t\t\t\t";
                        system("pause");
                        goto saveAll3;
                    }
                    else
                    {
                        Sleep(2500);
                        cout <<"\n\n\t\t\t\t\tI NOTICED THAT THE ANSWER IS NOT CORRECT, YOU SHOULD PROBABLY CHECK THE QUESTION :("<<endl;
                        Sleep(2500);
                        cout <<"\n\n\t\t\t\t";
                        system("pause");
                        goto Diffie;
                    }
                }
                else if(gab == 'n' || gab == 'N' )
                {
                    Sleep(2000);
                    cout <<"\n\n\t\t\t\t\t OK, LETS MOVE ON"<<endl;
                    Sleep(2000);
                    cout <<"\n\n\t\t\t\t\tSO NOW LETS COMPARE OUR VALUES"<<endl;
                    Sleep(2000);
                    cout <<"\n\n\t\t\t\t\t\tAi = "<<Ai<<endl;
                    cout <<"\n\n\t\t\t\t\t\tBi = "<<Bi<<endl;
                    Sleep(2500);
                    cout <<"\n\n\t\t\t\t\tIF Ai = Bi THEN OUR CALCULATTION IS CORRECT"<<endl;
                    Sleep(2500);
                    cout <<"\n\n\t\t\t\t\tIF NOT, THEN CHECK THE QUESTION AND SEE IF THERE IS ANY ERROR"<<endl;
                    if(Ai==Bi)
                    {
                        Sleep(2500);
                        cout <<"\n\n\t\t\t\t\tFROM THE SYSTEM, I CAN SEE THAT ITS CORRECT, AND LETS WRAP THIS UP"<<endl;
                        Sleep(2500);
                        cout <<"\n\n\t\t\t\t\tTHEREFORE, THE PRIVATE KEY WILL BE "<<Ai<<endl;
                        Sleep(2500);
                        cout <<"\n\n\t\t\t\t\tWE HAVE SUCCESFULLY SOLVED THE QUESTION :)"<<endl;
                        Sleep(2500);
                        cout <<"\n\n\t\t\t\t";
                        system("pause");
                        goto saveAll3;
                    }
                    else
                    {
                        Sleep(2500);
                        cout <<"\n\n\t\t\t\t\tI NOTICED THAT THE ANSWER IS NOT CORRECT, YOU SHOULD PROBABLY CHECK THE QUESTION :("<<endl;
                        Sleep(2500);
                        cout <<"\n\n\t\t\t\t";
                        system("pause");
                        goto Diffie;
                    }

                }
                else
                {
                    cout <<"\n\n\t\t\t\t\tPLEASE ENTER A VALID OPTION"<<endl;
                    goto gabi;
                }

                Sleep(100000);
                cout <<"\n\n\t\t\t\t\t\t";
                system("pause");
                goto saveAll3;
                }


                {
                DiffieNoSteps:
                cout <<"\n\n\n\t\t\t\t\t\tENTER THE VALUE OF 'p' : ";
                cin >>p;
                cout <<"\n\n\t\t\t\t\t\tENTER THE VALUE OF 'g' : ";
                cin >>g;
                cout <<"\n\n\t\t\t\t\t\tCHOOSE THE VALUE OF 'a' : ";
                cin >> a;
                cout <<"\n\n\t\t\t\t\t\tCHOOSE THE VALUE OF 'b' : ";
                cin >>b;
                cout << "\n\n\t\t\t\t\t\tCALCULATING...."<<endl;
                cout << "\n\n\t\t\t\t\t\tTHIS MIGHT TAKE A WHILE FOR LARGE NUMBERS...."<<endl;

                Ay = (findPower(g,a)%p);
                Be = (findPower(g,b)%p);
                Ai = (findPower(Be,a)%p);
                Bi = (findPower(Ay,b)%p);
                cout <<"\n\n\t\t\t\t\tTO COMPUTE g^ab = "<<g<<"^"<<a<<"*"<<b<<endl;
                Sleep(2500);
                cout <<"\n\n\t\t\t\t\tTHIS MIGHT TAKE A WHILE FOR LARGE VALUES OF 'a' AND 'b' DEPENDING ON YOUR SYSTEM SPEED"<<endl;
                gabi2:Sleep(2500);
                cout <<"\n\n\t\t\t\t\tDO YOU WANT TO CALCULATE IT"<<endl;
                cout<<"\n\n\t\t\t\t\tENTER YOUR CHOICE : ";
                char gab;
                cin >>gab;
                if(gab == 'y' || gab == 'Y')
                {
                    Sleep(2500);
                    cout <<"\n\n\t\t\t\t\tCALCULATING......."<<endl;
                    ab = a*b;
                    Gab = (findPower(g,ab)%p);
                    Sleep(2500);
                    cout <<"\n\n\t\t\t\t\tSOLVING THAT WE HAVE g^ab = "<<Gab<<endl;
                    Sleep(2500);
                    cout <<"\n\n\t\t\t\t\tSO NOW LETS COMPARE OUR VALUES"<<endl;
                    Sleep(2000);
                    cout <<"\n\n\t\t\t\t\t\tA = "<<Ay<<endl;
                    cout <<"\n\n\t\t\t\t\t\tB = "<<Be<<endl;
                    cout <<"\n\n\t\t\t\t\t\tAi = "<<Ai<<endl;
                    cout <<"\n\n\t\t\t\t\t\tBi = "<<Bi<<endl;
                    cout <<"\n\n\t\t\t\t\t\tg^(a*b) = "<<Gab<<endl;
                    if(Ai==Bi && Ai ==Gab)
                    {
                        Sleep(2500);
                        cout <<"\n\n\t\t\t\t\tFROM THE SYSTEM, I CAN SEE THAT ITS CORRECT"<<endl;
                        Sleep(2500);
                        cout <<"\n\n\t\t\t\t\t\tTHEREFORE THE SECRET KEY THAT WILL BE USED BY ADE AND OLA IS = "<<Gab<<endl;
                        Sleep(2500);
                        cout <<"\n\n\t\t\t\t\tWE HAVE SUCCESFULLY SOLVED THE QUESTION :)"<<endl;
                        Sleep(2500);
                        cout <<"\n\n\t\t\t\t";
                        system("pause");
                        goto saveAll3;

                    }
                    else
                    {
                        Sleep(2500);
                        cout <<"\n\n\t\t\t\t\tI NOTICED THAT THE ANSWER IS NOT CORRECT, YOU SHOULD PROBABLY CHECK THE QUESTION :("<<endl;
                        Sleep(2500);
                        cout <<"\n\n\t\t\t\t";
                        system("pause");
                        goto Diffie;
                    }
                }
                else if(gab == 'n' || gab == 'N' )
                {
                    Sleep(2000);
                    cout <<"\n\n\t\t\t\t\t OK, LETS MOVE ON"<<endl;
                    Sleep(2000);
                    cout <<"\n\n\t\t\t\t\t\tA = "<<Ay<<endl;
                    cout <<"\n\n\t\t\t\t\t\tB = "<<Be<<endl;
                    cout <<"\n\n\t\t\t\t\t\tAi = "<<Ai<<endl;
                    cout <<"\n\n\t\t\t\t\t\tBi = "<<Bi<<endl;
                    if(Ai==Bi)
                    {
                        Sleep(2500);
                        cout <<"\n\n\t\t\t\t\tFROM THE SYSTEM, I CAN SEE THAT ITS CORRECT, AND LETS WRAP THIS UP"<<endl;
                        Sleep(2500);
                        cout <<"\n\n\t\t\t\t\tTHEREFORE, THE PRIVATE KEY WILL BE "<<Ai<<endl;
                        Sleep(2500);
                        cout <<"\n\n\t\t\t\t\tWE HAVE SUCCESFULLY SOLVED THE QUESTION :)"<<endl;
                        Sleep(2500);
                        cout <<"\n\n\t\t\t\t";
                        system("pause");
                        goto saveAll3;
                    }
                    else
                    {
                        Sleep(2500);
                        cout <<"\n\n\t\t\t\t\tI NOTICED THAT THE ANSWER IS NOT CORRECT, YOU SHOULD PROBABLY CHECK THE QUESTION :("<<endl;
                        Sleep(2500);
                        cout <<"\n\n\t\t\t\t";
                        system("pause");
                        goto Diffie;
                    }

                }
                else
                {
                    cout <<"\n\n\t\t\t\t\tPLEASE ENTER A VALID OPTION"<<endl;
                    goto gabi2;
                }
                Sleep(5000);
                cout <<"\n\n\t\t\t\t\t\t";
                system("pause");
                goto saveAll3;
                }

                saveAll3:system("cls");
                cout << "\n\n\n\n\n\t\t\t\t\tDO YOU WANT TO SAVE THE SOLUTION TO THIS D-H KEY EXCHANGE(Y/N) : ";
                char save;
                cin >>save;
                if(save== 'y' || save == 'Y' )
                {
                    fstream DiscreteLog("Diffie.abd", ios::app);
                    if(DiscreteLog.fail())
                    {
                        cout<<"\n\n\n\n\n\t\t\t\tSORRY FOR THE INCOVINIENCE, SYSTEM IS UNDERGOING SOME ISSUES TRYING TO SAVE THE DATA"<<endl;
                        cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\tPLEASE CONTACT THE ADMIN TO RECTIFY THIS ISSUE"<<endl;
                        cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t**THANKS FOR YOUR UNDERSTANDING"<<endl;
                        cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t";
                        system("pause");
                        goto Diffie;
                    }
                    else
                    {
                        int getOut2 = 3;
                        myDecor.slowDemDown();
                        system("cls");
                        cout<<"\n\n\n\n\n\t\t\t\t\t\t\tTHIS IS A PREMIUM FUNCTION, PLEASE FILL DETAILS TO CONTINUE"<<endl;
                        fillAgain4:string username2, password2;

                        cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\tENTER USERNAME : ";
                        cin >> username2;
                        cout<<"\n\n\t\t\t\t\t\t\t\t\tENTER PASSWORD : ";
                        cin >> password2;
                        for(int i=0; i<=14; i++)
                        {
                        if((arrUsername[i]==username2)&&(arrpassword[i]==password2))
                        {
                            cout <<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t**ACCESS GRANTED**"<<endl;
                            cout <<"\n\n\t\t\t\t\t\t\t\t\t";
                            system("pause");
                            Sleep(2000);
                            goto saveThings3;
                        }
                        }

                        cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t***INVALID PASSWORD**"<<endl;
                        --getOut2;
                        cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t("<<getOut2<<") Trials Remaining"<<endl;
                        cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t";
                        system("pause");
                        system("cls");
                        if(getOut2 == 0)
                        {
                            cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\tTRIALS EXAUSTED, DATA CAN'T BE SAVED"<<endl;
                            goto Diffie;
                        }
                        else{
                            system("cls");
                            goto fillAgain4;
                            }


                            saveThings3:DiscreteLog<<p<<" "<<g<<" "<<a<<" "<<b<<" "<<Ay<<" "<<Be<<" "<<Ai
                            <<" "<<Bi<<" "<<Gab<<"\n";
                            cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\tDATA SAVED SUCCESSFULLY";
                            cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t";
                            DiscreteLog.close();
                            system("pause");
                            goto Diffie;

                        }
                                //write saving function here
                    }
                    else if(save == 'N' || save == 'n')
                    {
                        cout <<"\n\n\n\n\n\t\t\t\t\t\t\t\tOK, THANK YOU FOR USING MY PROGRAM"<<endl;
                        cout <<"\n\n\n\n\n\t\t\t\t\t\t\t\t";
                        system("pause");
                        goto Diffie;
                    }
                    else
                    {
                        cout <<"\n\n\n\n\n\t\t\t\t\t\t\t\tPLEASE ENTER A VALID OPTION, ABI MAKE I SPEAK PIGIN"<<endl;
                        cout <<"\n\n\n\n\n\t\t\t\t\t\t\t\tABEG MAKE UNA ENTER VALID OPTION NA :)"<<endl;
                        system("pause");
                        goto saveAll3;
                    }


                Diffie:char choice2;
                cout <<"\n\n\t\t\t\t\t\t\t\tDO YOU WANT TO GENERATE ANOTHER D-H KEY (y/n) : ";
                cin >> choice2;
                if(choice2 == 'y' || choice2 == 'Y')
                {
                    myDecor.slowDemDown();
                    goto backDiffie;
                }
                else if(choice2 == 'n' || choice2 == 'N')
                {
                    myDecor.slowDemDown();
                    goto cases;
                }
                else
                {
                    cout <<"\n\n\t\t\t\t\t\t\t\tPLEASE ENTER A VALID OPTION";
                    myDecor.slowDemDown();
                    goto Diffie;
                }


            }
        case '6':
            {//RSA
                myDecor.slowDemDown();
                Rivest:
                char arrayRSA[]={'T','H','E',' ','R','I','V','E','S','T',' ','S','H','A',
                'M','I','R',' ','A','D','L','E','M','A','N','(','R','S','A',')',' ','S','Y','S','T','E','M'};
                cout<<"\n\n\t\t\t\t\t\t";
                for(int i=0;i<37;i++)
                {
                    cout<<arrayRSA[i];
                    Sleep(100);
                }
                cout <<"\n\n\t\t\t\t\tWHAT ACTION WOULD YOU LIKE TO PERFORM?"<<endl;
                Sleep(1000);
                cout<<"\n\n\t\t\t\t\t(1)GENERATE RSA PUBLIC AND PRIVATE KEY"<<endl;
                cout<<"\n\n\t\t\t\t\t(2)ENCRYPT AND DECRYPT MESSAGE"<<endl;
                char choice;
                cout <<"\n\n\t\t\t\t\tENTER YOUR CHOICE : ";
                cin>>choice;
                system("cls");
                switch(choice)
                {
                case '1':
                    {
                        int p,q,c,n, phiN,d,inv;
                        cout<<"\n\n\t\t\t\t\tENTER THE VALUE OF 'p' : ";
                        cin >>p;
                        cout<<"\n\n\t\t\t\t\tENTER THE VALUE OF 'q' : ";
                        cin >>q;
                        checkC:cout<<"\n\n\t\t\t\t\tENTER A DESIRED PRIME NUMBER 'c' : ";
                        cin >>c;
                        int check;
                        check = prime(c);
                        if(check != 1)
                            goto checkC;
                        n = p*q;
                        phiN = phi(n);
                        inv = findInverseMod(c, phiN);
                        d = inv%phiN;

                        cout <<"\n\n\n\t\t\t\t\tTHE PUBLIC KEY (n,c) = ("<<n<<","<<c<<")"<<" RESPECTIVELY"<<endl;
                        cout <<"\n\n\n\t\t\t\t\tTHE PRIVATE KEY d = "<<d<<" WHICH SHOULD BE KEPT SECRET"<<endl;
                        Sleep(3000);
                        cout <<"\n\n\n\t\t\t\t\t";
                        system("pause");
                        saveAll4:system("cls");
                        cout << "\n\n\n\n\n\t\t\t\t\tDO YOU WANT TO SAVE THE SOLUTION TO THIS RSA KEY GENERATOR(Y/N) : ";
                        char save;
                        cin >>save;
                        if(save== 'y' || save == 'Y' )
                        {
                            fstream DiscreteLog("RSA.abd", ios::app);
                            if(DiscreteLog.fail())
                            {
                                cout<<"\n\n\n\n\n\t\t\t\tSORRY FOR THE INCOVINIENCE, SYSTEM IS UNDERGOING SOME ISSUES TRYING TO SAVE THE DATA"<<endl;
                                cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\tPLEASE CONTACT THE ADMIN TO RECTIFY THIS ISSUE"<<endl;
                                cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t**THANKS FOR YOUR UNDERSTANDING"<<endl;
                                cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t";
                                system("pause");
                                goto shamir;
                            }
                            else
                            {
                                int getOut2 = 3;
                                myDecor.slowDemDown();
                                system("cls");
                                cout<<"\n\n\n\n\n\t\t\t\t\t\t\tTHIS IS A PREMIUM FUNCTION, PLEASE FILL DETAILS TO CONTINUE"<<endl;
                                string username2, password2;

                                fillAgain7:cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\tENTER USERNAME : ";
                                cin >> username2;
                                cout<<"\n\n\t\t\t\t\t\t\t\t\tENTER PASSWORD : ";
                                cin >> password2;
                                for(int i=0; i<=14; i++)
                                {
                                if((arrUsername[i]==username2)&&(arrpassword[i]==password2))
                                {
                                    cout <<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t**ACCESS GRANTED**"<<endl;
                                    cout <<"\n\n\t\t\t\t\t\t\t\t\t";
                                    system("pause");
                                    Sleep(2000);
                                    goto saveThings4;
                                }
                                }

                                cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t***INVALID PASSWORD**"<<endl;
                                --getOut2;
                                cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t("<<getOut2<<") Trials Remaining"<<endl;
                                cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t";
                                system("pause");
                                system("cls");
                                if(getOut2 == 0)
                                {
                                    cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\tTRIALS EXAUSTED, DATA CAN'T BE SAVED"<<endl;
                                    goto shamir;
                                }
                                else{
                                    system("cls");
                                    goto fillAgain7;
                                    }


                                    saveThings4:DiscreteLog<<"KEY"<<" "<<p<<" "<<q<<" "<<n<<" "<<c<<" "<<d<<"\n";
                                    cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\tDATA SAVED SUCCESSFULLY";
                                    cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t";
                                    DiscreteLog.close();
                                    system("pause");
                                    goto shamir;

                                }
                                        //write saving function here
                            }
                            else if(save == 'N' || save == 'n')
                            {
                                cout <<"\n\n\n\n\n\t\t\t\t\t\t\t\tOK, THANK YOU FOR USING MY PROGRAM"<<endl;
                                cout <<"\n\n\n\n\n\t\t\t\t\t\t\t\t";
                                system("pause");
                                goto shamir;
                            }
                            else
                            {
                                cout <<"\n\n\n\n\n\t\t\t\t\t\t\t\tPLEASE ENTER A VALID OPTION, ABI MAKE I SPEAK PIGIN"<<endl;
                                cout <<"\n\n\n\n\n\t\t\t\t\t\t\t\tABEG MAKE UNA ENTER VALID OPTION NA :)"<<endl;
                                system("pause");
                                goto saveAll4;
                            }
                    }
                case '2':
                    {
                        adleman:cout<<"\n\n\tINSTRUCTION :- PLEASE CONVERT ALL CHARACTERS TO THIER NUMERICAL ANSI EQUIVALENT"<<endl;
                        cout <<"\n\n\t\t\t\t\tWHAT ACTION WOULD YOU LIKE TO PERFORM?"<<endl;
                        cout<<"\n\n\t\t\t\t\t(1)ENCRYPT MESSAGE"<<endl;
                        cout<<"\n\n\t\t\t\t\t(2)DECRYPT MESSAGE"<<endl;
                        char choice;
                        cout <<"\n\n\t\t\t\t\tENTER YOUR CHOICE : ";
                        cin>>choice;
                        system("cls");
                        switch(choice)
                        {
                        case '1':
                            {//encryption
                                restart:mp::cpp_int c,n,m;
                                int digit;
                                mp::cpp_int encrpt;
                                cout<<"\n\n\t\t\t\t\tENTER YOUR FIRST PUBLIC KEY 'n' : ";
                                cin >>n;
                                cout<<"\n\n\t\t\t\t\tENTER YOUR SECOND PUBLIC KEY 'c' : ";
                                cin>>c;
                                cout<<"\n\n\t\t\t\t\tHOW MANY DIGIT(S) IS THE MESSAGE : ";
                                cin >> digit;
                                mp::cpp_int arrayDigit[digit];
                                cout<<"\n\n\t\t\t\t\tPLEASE ENTER NO MORE THAN FOUR(4) DIGITS AT A TIME"<<endl;
                                int num =0;
                                QueuePtr<mp::cpp_int> myQueue;
                                QueuePtr<mp::cpp_int> myQueue2;
                                for(int i=0; i<digit; i++)
                                {



                                    if(digit==4)
                                    {
                                        cout<<"\n\n\t\t\t\t\tENTER REMAINING 4 DIGIT(s) : ";
                                        cin >>m;
                                        encrpt = (findPower(m,c)%n);

                                        myQueue.enqueue(encrpt);
                                        break;
                                    }

                                    if(digit>4)
                                    {
                                        cout<<"\n\n\t\t\t\t\tENTER NO("<<i+1<<") 4 DIGITS : ";
                                        cin >>m;
                                        encrpt = (findPower(m,c)%n);
                                        myQueue.enqueue(encrpt);

                                    }
                                    if(digit<4)
                                    {
                                        cout<<"\n\n\t\t\t\t\tENTER REMAINING "<<i+1<<" DIGIT(s) : ";
                                        cin >>m;
                                        encrpt = (findPower(m,c)%n);
                                        myQueue.enqueue(encrpt);
                                        break;
                                    }
                                    if(m > 9999)
                                    {
                                        cout<<"\n\n\t\t\t\t\tYOU CANT ENTER MORE THAN FOUR(4) DIGIT AT A TIME"<<endl;
                                        cout<<"\n\n\t\t\t\t\tPLEASE REFILL THE INFO"<<endl;
                                        system("cls");
                                        goto restart;
                                    }
                                    num++;
                                    digit-=4;
                                }
                                cout<<"\n\n\t\t\t\t\tENCRYPTED TEXT IS = ";
                                mp::cpp_int deq;
                                myQueue2 = myQueue;
                                while(!myQueue.isEmpty())
                                {
                                    myQueue.dequeue(deq);
                                    cout <<deq;
                                }
                                Sleep(3000);
                                cout<<"\n\n\t\t\t\t\t";
                                system("pause");
                                saveAll5:system("cls");
                                cout << "\n\n\n\n\n\t\t\t\t\tDO YOU WANT TO SAVE THE SOLUTION TO THIS RSA ENCRYPTION/N) : ";
                                char save;
                                cin >>save;
                                if(save== 'y' || save == 'Y' )
                                {
                                    fstream DiscreteLog("RSA.abd", ios::app);
                                    if(DiscreteLog.fail())
                                    {
                                        cout<<"\n\n\n\n\n\t\t\t\tSORRY FOR THE INCOVINIENCE, SYSTEM IS UNDERGOING SOME ISSUES TRYING TO SAVE THE DATA"<<endl;
                                        cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\tPLEASE CONTACT THE ADMIN TO RECTIFY THIS ISSUE"<<endl;
                                        cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t**THANKS FOR YOUR UNDERSTANDING"<<endl;
                                        cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t";
                                        system("pause");
                                        goto shamir;
                                    }
                                    else
                                    {
                                        int getOut2 = 3;
                                        myDecor.slowDemDown();
                                        system("cls");
                                        cout<<"\n\n\n\n\n\t\t\t\t\t\t\tTHIS IS A PREMIUM FUNCTION, PLEASE FILL DETAILS TO CONTINUE"<<endl;
                                        string username2, password2;

                                        fillAgain5:cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\tENTER USERNAME : ";
                                        cin >> username2;
                                        cout<<"\n\n\t\t\t\t\t\t\t\t\tENTER PASSWORD : ";
                                        cin >> password2;
                                        for(int i=0; i<=14; i++)
                                        {
                                        if((arrUsername[i]==username2)&&(arrpassword[i]==password2))
                                        {
                                            cout <<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t**ACCESS GRANTED**"<<endl;
                                            cout <<"\n\n\t\t\t\t\t\t\t\t\t";
                                            system("pause");
                                            Sleep(2000);
                                            goto saveThings5;
                                        }
                                        }

                                        cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t***INVALID PASSWORD**"<<endl;
                                        --getOut2;
                                        cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t("<<getOut2<<") Trials Remaining"<<endl;
                                        cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t";
                                        system("pause");
                                        system("cls");
                                        if(getOut2 == 0)
                                        {
                                            cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\tTRIALS EXAUSTED, DATA CAN'T BE SAVED"<<endl;
                                            goto shamir;
                                        }
                                        else{
                                            system("cls");
                                            goto fillAgain5;
                                            }


                                            saveThings5:DiscreteLog<<"ENCRYPT"<<" "<<n<<" "<<c<<" ";
                                            mp::cpp_int putin;
                                            while(!myQueue2.isEmpty())
                                            {
                                                myQueue2.dequeue(putin);
                                                DiscreteLog <<putin;
                                            }
                                            DiscreteLog<<"\n";
                                            cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\tDATA SAVED SUCCESSFULLY";
                                            cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t";
                                            DiscreteLog.close();
                                            system("pause");
                                            goto shamir;

                                        }
                                                //write saving function here
                                    }
                                    else if(save == 'N' || save == 'n')
                                    {
                                        cout <<"\n\n\n\n\n\t\t\t\t\t\t\t\tOK, THANK YOU FOR USING MY PROGRAM"<<endl;
                                        cout <<"\n\n\n\n\n\t\t\t\t\t\t\t\t";
                                        system("pause");
                                        goto shamir;
                                    }
                                    else
                                    {
                                        cout <<"\n\n\n\n\n\t\t\t\t\t\t\t\tPLEASE ENTER A VALID OPTION, ABI MAKE I SPEAK PIGIN"<<endl;
                                        cout <<"\n\n\n\n\n\t\t\t\t\t\t\t\tABEG MAKE UNA ENTER VALID OPTION NA :)"<<endl;
                                        system("pause");
                                        goto saveAll5;
                                    }
                            }
                        case '2':
                            {//decryption

                               restart1:mp::cpp_int d, m;

                                int digit,n;
                                mp::cpp_int encrpt;
                                cout<<"\n\n\t\t\t\t\tENTER YOUR PRIVATE KEY 'd' : ";
                                cin >>d;
                                cout<<"\n\n\t\t\t\t\tENTER YOUR PUBLIC KEY 'n' : ";
                                cin>>n;
                                cout<<"\n\n\t\t\t\t\tHOW MANY DIGIT(S) IS THE CIPHER TEXT : ";
                                cin >> digit;
                                cout<<"\n\n\t\t\t\t\tPLEASE ENTER NO MORE THAN FOUR(4) DIGITS AT A TIME"<<endl;
                                int num =0;
                                QueuePtr<mp::cpp_int> myQueue;
                                QueuePtr<mp::cpp_int> myQueue2;
                                for(int i=0; i<digit; i++)
                                {



                                    if(digit==4)
                                    {
                                        cout<<"\n\n\t\t\t\t\tENTER REMAINING 4 DIGIT(s) : ";
                                        cin >>m;
                                        encrpt = (findPower(m,d)%n);

                                        myQueue.enqueue(encrpt);
                                        break;
                                    }

                                    if(digit>4)
                                    {
                                        cout<<"\n\n\t\t\t\t\tENTER NO("<<i+1<<") 4 DIGITS : ";
                                        cin >>m;
                                        encrpt = (findPower(m,d)%n);
                                        myQueue.enqueue(encrpt);

                                    }
                                    if(digit<4)
                                    {
                                        cout<<"\n\n\t\t\t\t\tENTER REMAINING "<<i+1<<" DIGIT(s) : ";
                                        cin >>m;
                                        encrpt = (findPower(m,d)%n);
                                        myQueue.enqueue(encrpt);
                                        break;
                                    }
                                    if(m > 9999)
                                    {
                                        cout<<"\n\n\t\t\t\t\tYOU CANT ENTER MORE THAN FOUR(4) DIGIT AT A TIME"<<endl;
                                        cout<<"\n\n\t\t\t\t\tPLEASE REFILL THE INFO"<<endl;
                                        system("cls");
                                        goto restart1;
                                    }
                                    num++;
                                    digit-=4;
                                }
                                cout<<"\n\n\t\t\t\t\tPLAIN TEXT IS = ";
                                mp::cpp_int deq;
                                myQueue2 = myQueue;
                                while(!myQueue.isEmpty())
                                {
                                    myQueue.dequeue(deq);
                                    cout <<deq;
                                }
                                Sleep(3000);
                                cout<<"\n\n\t\t\t\t\t";
                                system("pause");
                                saveAll6:system("cls");
                                cout << "\n\n\n\n\n\t\t\t\t\tDO YOU WANT TO SAVE THE SOLUTION TO THIS RSA DECRYPTION(Y/N) : ";
                                char save;
                                cin >>save;
                                if(save== 'y' || save == 'Y' )
                                {
                                    fstream DiscreteLog("RSA.abd", ios::app);
                                    if(DiscreteLog.fail())
                                    {
                                        cout<<"\n\n\n\n\n\t\t\t\tSORRY FOR THE INCOVINIENCE, SYSTEM IS UNDERGOING SOME ISSUES TRYING TO SAVE THE DATA"<<endl;
                                        cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\tPLEASE CONTACT THE ADMIN TO RECTIFY THIS ISSUE"<<endl;
                                        cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t**THANKS FOR YOUR UNDERSTANDING"<<endl;
                                        cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t";
                                        system("pause");
                                        goto shamir;
                                    }
                                    else
                                    {
                                        int getOut2 = 3;
                                        myDecor.slowDemDown();
                                        system("cls");
                                        cout<<"\n\n\n\n\n\t\t\t\t\t\t\tTHIS IS A PREMIUM FUNCTION, PLEASE FILL DETAILS TO CONTINUE"<<endl;
                                        string username2, password2;

                                        fillAgain6:cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\tENTER USERNAME : ";
                                        cin >> username2;
                                        cout<<"\n\n\t\t\t\t\t\t\t\t\tENTER PASSWORD : ";
                                        cin >> password2;
                                        for(int i=0; i<=14; i++)
                                        {
                                        if((arrUsername[i]==username2)&&(arrpassword[i]==password2))
                                        {
                                            cout <<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t**ACCESS GRANTED**"<<endl;
                                            cout <<"\n\n\t\t\t\t\t\t\t\t\t";
                                            system("pause");
                                            Sleep(2000);
                                            goto saveThings6;
                                        }
                                        }

                                        cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t***INVALID PASSWORD**"<<endl;
                                        --getOut2;
                                        cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t("<<getOut2<<") Trials Remaining"<<endl;
                                        cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t";
                                        system("pause");
                                        system("cls");
                                        if(getOut2 == 0)
                                        {
                                            cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\tTRIALS EXAUSTED, DATA CAN'T BE SAVED"<<endl;
                                            goto shamir;
                                        }
                                        else{
                                            system("cls");
                                            goto fillAgain6;
                                            }


                                            saveThings6:DiscreteLog<<"DECRYPT"<<" "<<n<<" "<<d<<" ";
                                            mp::cpp_int putin;
                                            while(!myQueue2.isEmpty())
                                            {
                                                myQueue2.dequeue(putin);
                                                DiscreteLog <<putin;
                                            }
                                            DiscreteLog<<"\n";
                                            cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\tDATA SAVED SUCCESSFULLY";
                                            cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t";
                                            DiscreteLog.close();
                                            system("pause");
                                            goto shamir;

                                        }
                                                //write saving function here
                                    }
                                    else if(save == 'N' || save == 'n')
                                    {
                                        cout <<"\n\n\n\n\n\t\t\t\t\t\t\t\tOK, THANK YOU FOR USING MY PROGRAM"<<endl;
                                        cout <<"\n\n\n\n\n\t\t\t\t\t\t\t\t";
                                        system("pause");
                                        goto shamir;
                                    }
                                    else
                                    {
                                        cout <<"\n\n\n\n\n\t\t\t\t\t\t\t\tPLEASE ENTER A VALID OPTION, ABI MAKE I SPEAK PIGIN"<<endl;
                                        cout <<"\n\n\n\n\n\t\t\t\t\t\t\t\tABEG MAKE UNA ENTER VALID OPTION NA :)"<<endl;
                                        system("pause");
                                        goto saveAll6;
                                    }

                        }
                        default :
                        {
                            cout <<"\n\n\n\t\t\t\t\tPLEASE ENTER A VALID OPTION :("<<endl;
                            Sleep(2000);
                            system("cls");
                            goto adleman;
                        }

                    }
                default :
                    {
                        cout <<"\n\n\n\t\t\t\t\tPLEASE ENTER A VALID OPTION :("<<endl;
                        Sleep(2000);
                        system("cls");
                        goto Rivest;
                    }



                shamir:char choice2;
                system("cls");
                cout <<"\n\n\t\t\t\t\t\t\t\tDO YOU WANT TO SOLVE ANOTHER RSA PROBLEM (y/n) : ";
                cin >> choice2;
                if(choice2 == 'y' || choice2 == 'Y')
                {
                    myDecor.slowDemDown();
                    goto Rivest;
                }
                else if(choice2 == 'n' || choice2 == 'N')
                {
                    myDecor.slowDemDown();
                    goto cases;
                }
                else
                {
                    cout <<"\n\n\t\t\t\t\t\t\t\tPLEASE ENTER A VALID OPTION";
                    myDecor.slowDemDown();
                    goto shamir;
                }

            }
        }
            }

        case '7'://Pollard
            {
                system("cls");
                char arrayPollard[]={'P','O','L','L','A','R',' ','D','R','H','O',' ','D','I','S',
                'C','R','E','T','E',' ','L','O','G','S','Y','S','T','E','M'};
                cout<<"\n\n\t\t\t\t\t\t";
                for(int i=0;i<37;i++)
                {
                    cout<<arrayPollard[i];
                    Sleep(100);
                }

                int i =0;
                int p, alpha, beta, n, x, a, b;
                int arrx[100], arra[100], arrb[100];
                int fx, fa ,fb;
                cout << "ENTER P ";
                cin >> p;
                cout << "ENTER alpha ";
                cin >> alpha;
                cout << "ENTER beta ";
                cin >> beta;
                cout << "ENTER n ";
                cin >> n;
                for(i = 0; i<= 100; i++)
                {
                    if(i = 0)
                    {
                        x= 1;
                        a = 0;
                        b = 0;
                    }
                    else
                    {
                        if(x%3 == 1)
                        {
                            fx = (beta*x)% p;
                            fa = a%p;
                            fb = (b +1)%p;
                            arrx[i]= fx;
                            arra[i]= fa;
                            arrb[i]= fb;
                        }
                        else if(x%3 == 0)
                        {
                            int mypow = pow(x,2);
                            fx = mypow% p;
                            fa = (2*a)%p;
                            fb = (2* b)%p;
                            arrx[i]= fx;
                            arra[i]= fa;
                            arrb[i]= fb;
                        }
                        else if(x%3 == 2)
                        {
                            fx = (alpha*x)% p;
                            fa = (a +1)%p;
                            fb = b%p;
                            arrx[i]= fx;
                            arra[i]= fa;
                            arrb[i]= fb;
                        }
                    }


                }
                for(int j =0; j<=100; j++)
                {
                    if(arrx[j]== arrx[j*2])
                    {
                        int gcdb,gcdB2;
                        gcdB2 = arrb[2*j];
                        gcdb = arrb[j];
                        if(gcd(gcdB2,gcdb) != 1)
                        {
                            cout <<endl<< "FAILURE"<<endl;
                        }
                        else
                        {
                            int answer, aa, bb;
                            aa = arra[j]- arra[j*2];
                            bb = arrb[j*2]- arrb[j];
                            answer = (aa* findInverseMod(bb, p))%n;
                            cout << "ANSWER IS AT ITERATION "<<j<< " WHERE ai = "<< arra[j]<<" bi == "<<arrb[j] <<" a2i ="<< arra[j*2]<<" b2i = "<<arrb[j*2] <<endl;
                            cout << "DISCRETE LOG ANSWER IS = "<<answer;
                        }
                    }
                }

            }

        case '9'://about
            {
                myDecor.slowDemDown();
               ifstream about("aboutUs.abd");
               if(about.fail())
               {
                   system("cls");
                   cout <<"\n\n\n\n\n\n\t\t\tSORRY HAVING ISSUES WITH THIS FUNCTION, PLS CONTACT THE ADMIN WITH ERROR CODE 'X129about0ABD'"<<endl;
                   cout <<"\n\n\t\t**THANKS FOR YOUR UNDERSTANDING"<<endl;
                   system("pause");
                   goto cases;
               }
               else
               {
                   about_again:char a;
                   system("cls");
                   cout<<"\n\n\n\n\t\t\t\t\t\t\t\t\t\tABOUT THE SYSTEM"<<endl;
                   cout <<"\n\n\n";
                    while(about>>a)
                    {
                       if(a=='<')
                       {
                           cout <<" ";
                           Sleep(100);

                       }
                       else if(a =='>')
                       {
                            cout <<endl;
                            Sleep(100);
                       }
                       else if(a == '/')
                       {
                           cout<<"\t\t\t\t\t";
                       }
                       else
                       {
                           cout <<a;
                           Sleep(100);
                       }
                    }
                   }

                   about.close();
                   cout <<"\n\n\n\n\n\n\n\t\t\t\t\t\t";
                   system("pause");

                   aboutUS:char choice2;
                cout <<"\n\n\t\t\t\t\t\t\t\tDO YOU WANT TO VIEW THIS AGAIN(y/n) : ";
                cin >> choice2;
                if(choice2 == 'y' || choice2 == 'Y')
                {
                    myDecor.slowDemDown();
                    goto about_again;
                }
                else if(choice2 == 'n' || choice2 == 'N')
                {
                    myDecor.slowDemDown();
                    goto cases;
                }
                else
                {
                    cout <<"\n\n\t\t\t\t\t\t\t\tPLEASE ENTER A VALID OPTION";
                    myDecor.slowDemDown();
                    goto aboutUS;
                }
               }
        default :
            {
                system("cls");
                cout<< "\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tABEG MAKE UNA ENTER A VALID OPTION"<<endl;
                cout <<"\n\n\t\t\t\t\t\t\t\t";
                myDecor.slowDemDown();
                goto backhere;
            }

        }
    char choice;
    do{
        cases:int a;
        system("cls");
        cout << "\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tWHAT OPERATION WOULD YOU LIKE TO PERFORM"<<endl;
        cout << "\n\t\t\t\t\t\t\t\t(1) GO BACK TO THE MAIN MENU\n"
        <<"\n\t\t\t\t\t\t\t\t(2) EXIT THE SYSTEM"<<endl;
        cout <<"\n\t\t\t\t\t\t\t\tENTER YOUR CHOICE : ";
        cin >> choice;
        switch(choice)
        {
        case '1':
            myDecor.slowDemDown();
            system("cls");
            goto backhere;
        case '2':
            myDecor.callExit();
        default :
            cout<< "\n\t\t\t\t\t\t\t\tABEG MAKE UNA ENTER A VALID OPTION"<<endl;
            cout<< "\n\t\t\t\t\t\t\t\t";
            system("pause");
            goto cases;
        }
    }while(choice != '2');


    return 0;
}


