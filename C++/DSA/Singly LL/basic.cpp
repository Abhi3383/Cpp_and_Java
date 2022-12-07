#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int value;
    node *next;
    node()
    {
        value = 0;
        next = NULL;
    }
};

class ll
{
    node *head;

public:
    ll()
    {
        head = NULL;
    }

    void insertAtEnd(int v)
    {
        node *temp = new node();
        temp->value = v;
        // for first node
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
            // storing address of temp in t ka next
            t->next = temp;
        }
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
            head = temp;
        }
    }

    void insertAtPos(int pos, int v)
    {
        node *temp = new node();
        temp->value = v;
        if (pos == 1)
        {
            temp->next = head;
            head = temp;
        }
        else
        {
            int cnt = 1;
            node *t = head;
            while (cnt < pos - 1)
            {
                cnt++;
                if (t->next != NULL)
                {
                    t = t->next;
                }
                else
                {
                    cout << "Position does not exist" << endl;
                    return;
                }
            }
            temp->next = t->next;
            t->next = temp;
        }
    }

    void deleteAtMiddle(int n)
    {
        node *temp = head;
        if (n == 1)
        {
            head = head->next;
            cout << temp->value << " been deleted" << endl;
            delete temp;
        }
        else
        {
            // ek pehli positon par aakar rukhna
            while (n > 2)
            {
                n--;
                // ek pehli positon par aakar rukhna
                if (temp->next->next != NULL)
                {
                    temp = temp->next;
                }
                else
                {
                    cout << "Position does not exist" << endl;
                    return;
                }
            }
            node *t = temp->next;
            temp->next = t->next;
            cout << temp->value << " been deleted" << endl;
            delete t;
        }
    }

    void search(int v)
    {
        node *t = head;
        if (head == NULL)
        {
            cout << "LL is emppty" << endl;
        }
        else
        {
            int cnt = 0;
            while (t != NULL)
            {
                cnt++;
                if (t->value = v)
                {
                    cout << "Value found at " << cnt << endl;
                    return;
                }
                else
                {
                    t = t->next;
                }
            }
            cout << "Elemetnt not found" << endl;
        }
    }

    void print()
    {
        node *t = head;
        while (t != NULL)
        {
            cout << t->value << " -> ";
            t = t->next;
        }
    }
};

int main()
{
    ll ll;
    int choice;

    while (1)
    {
        cout << endl
             << endl
             << "================================================" << endl
             << endl;
        cout << "1. Insert at Begin" << endl;
        cout << "2. Insert at Middle" << endl;
        cout << "3. Insert at the End" << endl;
        cout << "4. Delete at the which Position" << endl;
        cout << "5. Search" << endl;
        cout << "6. Print" << endl;
        cout << "7. Exit" << endl;
        cout << "Enter Your choice" << endl;
        cin >> choice;
        int value, position;
        switch (choice)
        {
        case 1:
            cout << "Enter value" << endl;
            cin >> value;
            ll.insertAtBeg(value);
            break;
        case 2:
            cout << "Enter value and position" << endl;
            cin >> value >> position;
            ll.insertAtPos(value, position);
            break;
        case 3:
            cout << "Enter value" << endl;
            cin >> value;
            ll.insertAtEnd(value);
            break;
        case 4:
            cout << "Enter position" << endl;
            cin >> position;
            ll.deleteAtMiddle(position);
            break;
        case 5:
            cout << "Enter value to be search" << endl;
            cin >> value;
            ll.search(value);
            break;
        case 6:
            ll.print();
            break;
        case 7:
            exit(0);
        }
    }

    return 0;
}