#include <iostream>
using namespace std;

string kangaroo(int x1, int v1, int x2, int v2)
{
    if ((x2 > x1) && (v2 > v1))
    {
        return "NO";
    }

    if ((x1 == x2) && (v1 == v2))
    {
        return "YES";
    }

    if ((x1 == x2) && (v1 != v2))
    {
        return "NO";
    }

    int check1 = x1;
    int check2 = x2;

    if (check2 > check1)
    {
        for (;;)
        {
            check1 = check1 + v1;
            check2 = check2 + v2;
            if (check1 == check2)
            {
                return "YES";
            }
            else if (check1 > check2)
            {
                return "NO";
            }
        }
    }

    if (check1 > check2)
    {
        for (;;)
        {
            check1 = check1 + v1;
            check2 = check2 + v2;
            if (check1 == check2)
            {
                return "YES";
            }
            else if (check2 > check1)
            {
                return "NO";
            }
        }
    }

    return "";
}

int main()
{
    int x1;
    int v1;
    int x2;
    int v2;

    cin >> x1;
    cin >> v1;
    cin >> x2;
    cin >> v2;

    cout << kangaroo(x1, v1, x2, v2) << endl;

    return 0;
}