#include <iostream>
using namespace std;

int main()
{
    // Test Case 1
    string str = "hello";

    for (int i = str.length() - 1; i >= 0; i--)
    {
        cout << str[i];
    }

    cout << endl;

    // Test Case 2
    string str2 = "a";

    for (int i = str2.length() - 1; i >= 0; i--)
    {
        cout << str2[i];
    }

    cout << endl;

    return 0;
}