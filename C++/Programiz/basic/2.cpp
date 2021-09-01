#include<iostream>
using namespace std;
int main()
{
    int a=2, b=3, temp;
    
    cout<<"Before Swapping\n"<<endl;
    cout<<"a ="<<a<<"b ="<<b<<endl;
    
    temp=a;
    a=b;
    b=temp;

    cout<<"After Swapping\n"<<endl;
    cout<<"a ="<<a<<"b ="<<b<<endl;

    return 0;
}