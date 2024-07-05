#include <iostream>  
#include <climits>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int MaxNo;
    int MinNo;

    for (int i = 0; i < n; i++)
    {
        if (array[i] > MaxNo)
        {
            MaxNo = array[i];
        }
        if (array[i] < MinNo)
        {
            MinNo = array[i];
        }
    }
    return 0;
}