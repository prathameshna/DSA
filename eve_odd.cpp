//write a program found the even odd numbers 

#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    if (n % 2 == 0)
    {
        cout << "number is even \n";
    }
    else
    {
        cout << "number is odd \n";
    }
    return 0;
}