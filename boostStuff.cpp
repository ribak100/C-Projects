/*
#include <iostream>
#include "\Users\IBRAHIM\Desktop\c++\Boost\boost_1_66_0\boost\random\random_device.hpp"
#include "\Users\IBRAHIM\Desktop\c++\Boost\boost_1_66_0\boost\random.hpp"
#include "\Users\IBRAHIM\Desktop\c++\Boost\boost_1_66_0\boost\multiprecision\cpp_int.hpp"

 namespace mp = boost::multiprecision;
 using namespace std;

 mp::cpp_int findPower(int&a, int&b)
 {
     mp::cpp_int power = 1;
     for( int i=1; i<=b; i++)
     {
         power *= a;
     }

     return power;
 }
char x;
int main()
{
   /*
    mp::cpp_int x = mp::pow(mp::cpp_int(2), 1024);
    std::cout << x <<std::endl;

    boost::random::random_device gen;
    boost::random::uniform_int_distribution<mp::cpp_int> ui(1,x);

    for (unsigned i = 0; i<10; ++i)
    {
        mp::cpp_int y = ui(gen);
        std::cout << y <<std::endl;
    }


    int a, b;

    do{


        cout << "enter value of a: ";
        cin >>a;
        cout << "enter value of b: ";
        cin >>b;
        cout << a <<" pow "<<b <<" = " <<findPower(a,b)<<endl;


        cout << "do you want to go again : ";
        cin >>x;
    }while(x != 'n');

}
*/

