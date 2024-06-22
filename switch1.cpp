#include <iostream>
using namespace std;

int main()
{
    char button;
    cout << "input a button";
    cin >> button;
    switch (button)
    {
    case 'a':
        cout << "hello" << endl;
        break;
    case 'b':
        cout << "hola" << endl;
        break;
    case 'c':
        cout << "namstee" << endl;
        break;
    case 'd':
        cout << "hii" << endl;
        break;
    default:
        cout << "i am still learning";
        break;
    }
    return 0;
}