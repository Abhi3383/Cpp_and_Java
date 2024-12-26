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

Node *getMiddle(Node *&head)
{
    if (head == NULL)
    {
        throw runtime_error("Linked list is empty");
    }

    Node *slow = head;
    Node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

int main()
{
    Node *head = new Node(10);
    // Rest of your code...
    try
    {
        cout << "Middle Node is: " << getMiddle(head)->data << endl;
    }
    catch (const exception &e)
    {
        cout << e.what() << endl;
    }

    return 0;
}
