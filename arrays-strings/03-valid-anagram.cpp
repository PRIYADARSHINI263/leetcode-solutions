#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Test Case 1
    string s1 = "anagram";
    string s2 = "nagaram";

    int count1[26] = {0};

    for (char c : s1)
        count1[c - 'a']++;

    for (char c : s2)
        count1[c - 'a']--;

    bool result1 = true;

    for (int i = 0; i < 26; i++)
    {
        if (count1[i] != 0)
        {
            result1 = false;
            break;
        }
    }

    cout << "Test Case 1: " << (result1 ? "true" : "false") << endl;


    // Test Case 2
    string s3 = "rat";
    string s4 = "car";

    int count2[26] = {0};

    for (char c : s3)
        count2[c - 'a']++;

    for (char c : s4)
        count2[c - 'a']--;

    bool result2 = true;

    for (int i = 0; i < 26; i++)
    {
        if (count2[i] != 0)
        {
            result2 = false;
            break;
        }
    }

    cout << "Test Case 2: " << (result2 ? "true" : "false") << endl;

    return 0;
}