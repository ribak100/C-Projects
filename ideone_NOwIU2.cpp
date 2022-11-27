/*#include <iostream>
#include <utility>
#include "\Users\IBRAHIM\Desktop\c++\Boost\boost_1_66_0\boost\multiprecision\cpp_int.hpp"

namespace mp = boost::multiprecision;
using namespace std;

mp::cpp_int boost_factorial(int num)
{

    mp::cpp_int fact = 1;
    for(int i= num; i>1; --i)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int num;
    cout << "Enter the factorial : ";
    cin >> num;
    cout << "Factorial of "<<num<<" = "<<boost_factorial(num);
}

*/
