#include <iostream>
using namespace std;
int main()
{
    // int val;
    // cin>>val;
    // // switch case is shortcut of if_else condition
    // switch(val)
    // {
    //     case 1:   // it is check that val==1 or not
    //     cout<<"One\n";
    //     break;
    //     case 2:  // it is check that val==2 or not
    //     cout<<"Two\n";
    //     break;
    //     case 3:
    //     cout<<"Three\n";
    //     break;
    //     case 4:
    //     cout<<"Four\n";
    //     break;
    //     case 5:
    //     cout<<"five\n";
    //     break;
    //     default:
    //     cout<<"Didn't match\n";
    // }

    char val;
    cin >> val;
    switch (val)
    {
    case 'a':
        cout << "first alphabet" << endl;
        break;
    case 'b':
        cout << "2nd alphabet" << endl;
    default:
        cout << "Don't match" << endl;
    }
    return 0;
}