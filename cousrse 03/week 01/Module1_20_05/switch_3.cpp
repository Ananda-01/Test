#include <iostream>
using namespace std;
int main()
{
    // check a value odd or even
    int val;
    cin >> val;
    switch (val % 2) // it gives case 0 or 1 because of odd and even
    {
    case 0:
        cout << "Even\n";
        break;
    case 1:
        cout << "Odd\n";
        // there is no default case
    }
    return 0;
}