#include<iostream>
#include<string>
using namespace std;
int main(){
    string myString = "Hello";
myString[1] = 'J';
cout << myString;
// Outputs Jello instead of Hello
return 0;
}