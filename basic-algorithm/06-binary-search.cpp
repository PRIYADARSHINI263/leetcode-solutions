#include <iostream>
using namespace std;

int main()
{
    // Test Case 1
    int a[] = {1, 3, 5, 7, 9};
    int n = 5;
    int target = 5;

    int low = 0;
    int high = n - 1;
    int result = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (a[mid] == target)
        {
            result = mid;
            break;
        }
        else if (a[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    cout << "Test Case 1: " << result << endl;


    // Test Case 2
    int b[] = {2, 4, 6, 8, 10};
    int n2 = 5;
    target = 7;

    low = 0;
    high = n2 - 1;
    result = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (b[mid] == target)
        {
            result = mid;
            break;
        }
        else if (b[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    cout << "Test Case 2: " << result << endl;

    return 0;
}