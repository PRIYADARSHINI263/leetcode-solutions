#include <iostream>
using namespace std;

int main()
{
    // Test Case 1
    int a[] = {0, 1, 0, 3, 12};
    int n = 5;

    int j = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            j++;
        }
    }

    cout << "Test Case 1: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << endl;


    // Test Case 2
    int b[] = {0, 0, 1};
    int n2 = 3;

    j = 0;

    for (int i = 0; i < n2; i++)
    {
        if (b[i] != 0)
        {
            int temp = b[i];
            b[i] = b[j];
            b[j] = temp;
            j++;
        }
    }

    cout << "Test Case 2: ";
    for (int i = 0; i < n2; i++)
        cout << b[i] << " ";

    cout << endl;

    return 0;
}