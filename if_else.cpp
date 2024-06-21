#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE // not a part of code, used to beatify input and output
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int saving;
    cin >> saving;

    if (saving < 5000)
    {
        cout << "neha\n";
    }
    else
    {
        cout << "reshma\n";
    }
    return 0;
}