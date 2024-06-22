// this not a code of switch case this is the way to ec=xecute the switch case another way we can see perfect 
// working in "switch1".
#include <iostream>
using namespace std;

int main()
{
    char button;
    cout << "input a button: ";
    cin >> button;

    if (button == 'a')
    {
        cout << "hello" << endl;
    }
    else if (button == 'b')
    {
        cout << "Namstee" << endl;
    }
    else if (button == 'c')
    {
        cout << "hii" << endl;
    }
    else if (button == 'd')
    {
        cout << "hola" << endl;
    }
    else
    {
        cout << "i am still learining" << endl;
    }

    return 0;
}