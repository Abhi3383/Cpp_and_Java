// Similarly we can do opeator<
#include <bits/stdc++.h>
using namespace std;

class Time
{
    int hour;
    int min;

public:
    Time()
    {
    }
    Time(int h, int m)
    {
        hour = h;
        min = m;
    }

    friend int operator>(Time, Time);

    void display()
    {
        cout << "Hour : " << hour << " , "
             << "Min : " << min << endl;
    }
};

int operator>(Time t1, Time t2)
{
    if (t1.hour > t2.hour)
    {
        return 1;
    }
    else
    {
        if (t1.hour == t2.hour)
        {
            if (t1.min > t2.min)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        return 0;
    }
}

int main()
{
    Time t1(5, 20);
    Time t2(10, 30);
    if (t1 > t2) // t1.operator>(t2);
    {
        cout << "Hello" << endl;
    }
    else
    {
        cout << "Welcome" << endl;
    }

    t1.display();
    t2.display();
    return 0;
}
