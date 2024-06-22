#include <iostream>
using namespace std;

int main()
{

    int rows, cols;
    cin >> rows >> cols;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 0; j <= cols; j++)
        {
            if (i == 1 || i == rows || j == 1 || j == cols)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
    }
    return 0;
}