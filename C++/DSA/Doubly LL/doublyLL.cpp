#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int value;
    node *next;
    node *prev;
    node()
    {
        value = 0;
        next = NULL;
        prev = NULL;
    }
};

class dLL
{
    node *head;

public:
    dLL()
    {
        head = NULL;
    }

    void insertAtBeg(int v)
    {
        node *temp = new node();
        temp->value = v;
        if (head == NULL)
        {
            head = temp;
        }
        else
        {
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
    }
    void insertAtEnd(int v)
    {
        node *temp = new node();
        temp->value = v;
        if (head == NULL)
        {
            head = temp;
        }
        else
        {
            node *t = head;
            while (t->next != NULL)
            {
                t = t->next;
            }
            t->next = temp;
            temp->prev = t;
        }
    }

    void insertAtPos(int v, int pos)
    {
        node *temp = new node();
        temp->value = v;
        node *t = head;
        if (pos == 0 && head != NULL)
        {
            this->insertAtBeg(v);
            return;
        }

        if (head == NULL && pos > 1)
        {
            cout << "Position not found" << endl;
            return;
        }
        while (pos > 1)
        {
            pos--;
            if (t->next == NULL)
            {
                cout << "Position not found" << endl;
                break;
            }
            else
            {
                t = t->next;
            }
        }
        temp->next = t->next;
        temp->prev = t;
        if (t->next != NULL)
            t->next->prev = temp;
        t->next = temp;
    }

    void deletionInMid(int pos)
    {
        node *t = head;
        if (head == NULL)
        {
            cout << "Position not found" << endl;
            return;
        }
        if (pos == 1)
        {
            head = t->next;
            head->prev = NULL;
            cout << t->value << " deleted" << endl;
            delete t;
            return;
        }
        else
        {
            while (pos > 1)
            {
                pos--;
                if (t->next == NULL)
                {
                    cout << "Position not found" << endl;
                    return;
                }
                else
                {
                    t = t->next;
                }
            }
            t->prev->next = t->next;
            if (t->next != NULL)
                t->next->prev = t->prev;
            cout << t->value << " deleted" << endl;
        }
    }

    void printLL()
    {
        node *t = head;
        // printing data so " t != NULL "
        while (t != NULL)
        {
            cout << t->value << " ";
            t = t->next;
        }
        cout << endl;
    }
};

int main()
{

    dLL d1;
    d1.insertAtEnd(50);
    d1.insertAtEnd(40);
    d1.insertAtEnd(30);
    d1.insertAtEnd(20);

    d1.insertAtBeg(5);
    d1.insertAtBeg(4);
    d1.insertAtBeg(3);
    d1.insertAtBeg(2);

    d1.insertAtPos(10, 2);
    d1.insertAtPos(25, 1);
    d1.insertAtPos(80, 6);

    d1.deletionInMid(3);
    d1.deletionInMid(1);
    d1.deletionInMid(8);
    d1.deletionInMid(10);
    d1.printLL();
    return 0;
}