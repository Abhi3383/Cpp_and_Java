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

    int operator>(Time t)
    {
        if (hour > t.hour)
        {
            return 1;
        }
        else
        {
            if (hour == t.hour)
            {
                if (min > t.min)
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
    void display()
    {
        cout << "Hour : " << hour << " , "
             << "Min : " << min << endl;
    }
};

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
