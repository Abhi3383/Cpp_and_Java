#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int getLength(Node *head)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    return len;
}

Node *reverseKNodes(Node *&head, int k)
{
    if (head == NULL)
    {
        cout << "LL is empty" << endl;
        return NULL;
    }
    int len = getLength(head);
    if (k > len)
    {
        cout << "Enter valid value for k " << endl;
        return head;
    }

    // it means number of nodes in LL is >= k
    // Step A: reverse first k nodes of LL
    Node *prev = NULL;
    Node *curr = head;
    Node *next = NULL;
    int count = 0;

    while (count < k && curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    // Step B: recursive call
    if (next != NULL)
    {
        // we still have nodes left to reverse
        head->next = reverseKNodes(next, k);
    }

    // step C: return head of the modified LL
    return prev;
}

int main()
{
    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);
    Node *fifth = new Node(50);
    Node *sixth = new Node(60);
    Node *seventh = new Node(70);
    Node *eighth = new Node(80);
    Node *ninth = new Node(90);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;
    seventh->next = eighth;
    eighth->next = ninth;
    ninth->next = NULL; // Corrected: Setting the next of ninth to NULL instead of fourth

    print(head);
    head = reverseKNodes(head, 5);
    print(head);

    return 0;
}
