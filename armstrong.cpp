#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int sum = 0;
    int orignaln = n;
    while (n > 0)
    {
        int lastdigit = n / 10;
        sum += pow(lastdigit, 3);
        n = n / 10;
    }
    if (sum == orignaln)
    {
        cout << "armstrong numebr";
    }
    else
    {
        cout << "this is  not armstrong number" << endl;
    }

    return 0;
}