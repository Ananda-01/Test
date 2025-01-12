#include <iostream>
using namespace std;
int main()
{
    char n;
    cin >> n;
    // check vowel or consonant
    switch (n)
    {
    case 'a': // we check that this character is vowel or consonant
        cout << "Vowel\n";
        break;
    case 'e':
        cout << "Vowel\n";
        break;
    case 'i':
        cout << "Vowel\n";
        break;
    case 'o':
        cout << "Vowel\n";
        break;
    case 'u':
        cout << "Vowel\n";
        break;
    default:
        cout << "Consonant\n";
    }
    return 0;
}