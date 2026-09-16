#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

void printList(Node* head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node* reverseList(Node* head)
{
    Node* previous = NULL;
    Node* current = head;

    while (current != NULL)
    {
        Node* next = current->next;
        current->next = previous;
        previous = current;
        current = next;
    }

    return previous;
}

int main()
{
    // Test Case 1
    Node n1 = {1, NULL};
    Node n2 = {2, NULL};
    Node n3 = {3, NULL};

    n1.next = &n2;
    n2.next = &n3;

    Node* head = &n1;

    cout << "Test Case 1: ";
    head = reverseList(head);
    printList(head);


    // Test Case 2
    Node n4 = {5, NULL};

    head = &n4;

    cout << "Test Case 2: ";
    head = reverseList(head);
    printList(head);

    return 0;
}