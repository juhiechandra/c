/* #include <iostream>

using namespace std;
int main()
{
    int num1,num2;
    cout << "Enter the first number:\n";
    cin >> num1;
    cout << "Enter the second number:\n";
    cin >> num2;
    cout << num1 + num2;
    return 0;
}
*/

#include <iostream>
using namespace std;

int main()
{
    string color, pluralNoun, celebrity;
    cout << "Enter a color: ";
    getline(cin, color);
    cout << "Enter a plural noun: ";
    getline(cin, pluralNoun);
    cout << "Enter a celebrity: ";
    getline(cin, celebrity);

    cout << "Roses are " << color << endl;
    cout << pluralNoun << " are blue" << endl;
    cout << "I love " << celebrity << endl;
    return 0;
}