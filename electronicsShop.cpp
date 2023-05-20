#include <iostream>
using namespace std;

int getMoneySpent(int b, int k[], int nk, int d[], int nd)
{
    int max = -100;

    for (int i = 0; i < nk; ++i)
    {
        for (int j = 0; j < nd; ++j)
        {
            if ((k[i] + d[j]) > max)
            {
                if ((k[i] + d[j]) <= b)
                {
                    max = k[i] + d[j];
                }
            }
        }
    }

    if (max == -100)
    {
        return -1;
    }
    else
    {
        return max;
    }
}

int main()
{
    int budget;
    cin >> budget;
    int numKey;
    cin >> numKey;
    int numDri;
    cin >> numDri;

    int key[numKey];
    int dri[numDri];

    for (int x = 0; x < numKey; ++x)
    {
        cin >> key[x];
    }

    for (int y = 0; y < numDri; ++y)
    {
        cin >> dri[y];
    }

    cout << getMoneySpent(budget, key, numKey, dri, numDri);

    return 0;
}