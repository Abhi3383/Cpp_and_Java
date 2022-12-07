#include <bits/stdc++.h>
using namespace std;

class queuee
{
public:
    int q[100];
    int front;
    int rear;
    int size;
    queuee()
    {
        front = -1;
        rear = -1;
        size = 100;
    }
    ~queuee()
    {
        front = -1;
        rear = -1;
    }

    void enqueue(int v)
    {
        if (isQueueFull())
        {
            cout << "Queue overflow" << endl;
        }
        else if (isQueueEmpty())
        {
            front++;
            rear++;
            q[rear] = v;
        }
        else
        {
            rear++;
            q[rear] = v;
        }
    }
    int isQueueFull()
    {
        if (rear == size - 1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int isQueueEmpty()
    {
        if (rear == -1, front == -1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    void deQueue()
    {
        if (isQueueEmpty())
        {
            cout << "Queue underflow" << endl;
        }
        else if (front == rear)
        {
            cout << q[front] << " deleted" << endl;
            front = rear = -1;
        }
        else
        {
            cout << "\n"
                 << q[front] << " deleted" << endl;
            front++;
        }
    }

    void print()
    {
        if (isQueueEmpty())
        {
            cout << "Queue underflow " << endl;
            return;
        }
        else
        {
            for (size_t i = front; i <= rear; i++)
            {
                cout << q[i] << " ";
            }
        }
    }
};

int main()
{
    queuee q;
    q.print();
    q.enqueue(5);
    q.enqueue(10);
    q.enqueue(15);
    q.print();
    q.deQueue();
    q.print();
    return 0;
}