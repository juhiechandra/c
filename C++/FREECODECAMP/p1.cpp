// #include <iostream>
// using namespace std;

// int main()
// {
//     int age;
//     cout << "Enter your age:";
//     cin >> age;

//     cout << "Your are " << age << " years old";

//     return 0;
// }

// PRINTING USING STRINGS //

#include <iostream>
using namespace std;

int main()
{
    string name;
    cout << "Enter your name:";
    getline(cin, name);

    cout << "Hello!" << name;

    return 0;
}