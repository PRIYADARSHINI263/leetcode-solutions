#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Test Case 1
    string words1[] = {"flower", "flow", "flight"};
    int n1 = 3;

    string prefix = words1[0];

    for (int i = 1; i < n1; i++)
    {
        int j = 0;

        while (j < prefix.length() &&
               j < words1[i].length() &&
               prefix[j] == words1[i][j])
        {
            j++;
        }

        prefix = prefix.substr(0, j);
    }

    cout << "Test Case 1: " << prefix << endl;


    // Test Case 2
    string words2[] = {"dog", "racecar", "car"};
    int n2 = 3;

    prefix = words2[0];

    for (int i = 1; i < n2; i++)
    {
        int j = 0;

        while (j < prefix.length() &&
               j < words2[i].length() &&
               prefix[j] == words2[i][j])
        {
            j++;
        }

        prefix = prefix.substr(0, j);
    }

    cout << "Test Case 2: " << prefix << endl;

    return 0;
}