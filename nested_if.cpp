#include <iostream>
using namespace std;

int main() {
    int savings;
    cin >> savings;

    if (savings > 5000) {
        if (savings > 10000) {
            cout << "Road trip";
        } else {
            cout << "movie plan\n";
        }
    } else if (savings > 1000) {
        cout << "reshma \n";
    } else {
        cout << "frnds \n";
    }

    return 0;
}
