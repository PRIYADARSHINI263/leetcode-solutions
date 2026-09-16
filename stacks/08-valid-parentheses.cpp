#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Test Case 1
    string s1 = "()[]{}";
    char stack1[100];
    int top = -1;
    bool valid1 = true;

    for (char c : s1)
    {
        if (c == '(' || c == '[' || c == '{')
        {
            stack1[++top] = c;
        }
        else
        {
            if (top == -1)
            {
                valid1 = false;
                break;
            }

            char open = stack1[top--];

            if ((c == ')' && open != '(') ||
                (c == ']' && open != '[') ||
                (c == '}' && open != '{'))
            {
                valid1 = false;
                break;
            }
        }
    }

    if (top != -1)
        valid1 = false;

    cout << "Test Case 1: " << (valid1 ? "true" : "false") << endl;


    // Test Case 2
    string s2 = "(]";
    char stack2[100];
    top = -1;
    bool valid2 = true;

    for (char c : s2)
    {
        if (c == '(' || c == '[' || c == '{')
        {
            stack2[++top] = c;
        }
        else
        {
            if (top == -1)
            {
                valid2 = false;
                break;
            }

            char open = stack2[top--];

            if ((c == ')' && open != '(') ||
                (c == ']' && open != '[') ||
                (c == '}' && open != '{'))
            {
                valid2 = false;
                break;
            }
        }
    }

    if (top != -1)
        valid2 = false;

    cout << "Test Case 2: " << (valid2 ? "true" : "false") << endl;

    return 0;
}