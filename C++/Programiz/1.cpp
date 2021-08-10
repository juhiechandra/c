// // Your First C++ Program

// #include <iostream>

// int main()
// {
//     std::cout << "Hello World!";
//     return 0;
// }


#include<iostream>
using namespace std;
int main()
{
    int divisor, dividend, quotient, remainder;

    cout<< "Enter dividend: ";
    cin >> dividend;
    cout << "Enter divisor: ";
    cin>>divisor;

    quotient = dividend/divisor;
    remainder= dividend%divisor;

    cout << "Quotient = " << quotient << endl;
    cout << "Remainder = "<< remainder;

    return 0;
}