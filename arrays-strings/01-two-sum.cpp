#include <iostream>
using namespace std;

int main()
{
    // Test Case 1
    int a[] = {2, 7, 11, 15};
    int target = 9;

    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if (a[i] + a[j] == target)
            {
                cout << "Test Case 1: [" << i << ", " << j << "]" << endl;
            }
        }
    }

    // Test Case 2
    int b[] = {3, 3};
    target = 6;

    for (int i = 0; i < 2; i++)
    {
        for (int j = i + 1; j < 2; j++)
        {
            if (b[i] + b[j] == target)
            {
                cout << "Test Case 2: [" << i << ", " << j << "]" << endl;
            }
        }
    }

    return 0;
}