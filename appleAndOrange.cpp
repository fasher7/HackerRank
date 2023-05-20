#include <iostream>
using namespace std;

void countApplesAndOranges(int s, int t, int a, int b, int disA[], int numA, int disO[], int numO)
{
    if (a > s || s > t || t > b)
    {
        return;
    }

    int countA = 0;
    int countB = 0;
    int checker = 0;

    for (int i = 0; i < numA; ++i)
    {
        if (disA[i] > 0)
        {
            if ((a + disA[i]) >= s && (a + disA[i]) <= t)
            {
                checker++;
            }
        }
    }

    cout << checker << endl;
    checker = 0;

    for (int i = 0; i < numO; ++i)
    {
        if (disO[i] < 0)
        {
            if ((b + disO[i]) >= s && (b + disO[i]) <= t)
            {
                checker++;
            }
        }
    }

    cout << checker << endl;
}

int main()
{
    int start;
    int end;
    int locA;
    int locO;
    cin >> start;
    cin >> end;
    cin >> locA;
    cin >> locO;
    int numA;
    int numO;
    cin >> numA;
    cin >> numO;
    int disA[numA];
    int disO[numO];

    for (int i = 0; i < numA; ++i)
    {
        cin >> disA[i];
    }

    for (int j = 0; j < numO; ++j)
    {
        cin >> disO[j];
    }

    countApplesAndOranges(start, end, locA, locO, disA, numA, disO, numO);

    return 0;
}