#include <iostream>
using namespace std;

int main()
{
    int day = 2;

    switch (day)
    {
        case 1:
            cout << "Saturday";
            break;

        case 2:
            cout << "Sunday";
            break;

        default:
            cout << "Weekend";
    }

    return 0;
}