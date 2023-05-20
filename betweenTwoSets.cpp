#include <iostream>
using namespace std;

int getTotalX(int arrF[], int f, int arrS[], int s)
{
    int counter = 0;
    int chcounter = 0;
    int a = 0;
    const int N = 100;
    int subArr[N];

    for (int x = arrF[f - 1]; x <= arrS[0]; ++x)
    {
        for (int y = 0; y < f; ++y)
        {
            if ((x % arrF[y]) == 0)
            {
                ++chcounter;
            }
            if (chcounter == f)
            {
                subArr[a] = x;
                ++a;
            }
        }
        chcounter = 0;
    }

    for (int b = 0; b < a; ++b)
    {
        for (int c = 0; c < s; ++c)
        {
            if ((arrS[c] % subArr[b]) == 0)
            {
                ++chcounter;
            }
            if (chcounter == s)
            {
                ++counter;
            }
        }
        chcounter = 0;
    }

    return counter;
}

int main()
{
    int first;
    int second;
    cin >> first;
    cin >> second;

    int arrF[first];
    int arrS[second];

    for (int i = 0; i < first; ++i)
    {
        cin >> arrF[i];
    }

    for (int i = 0; i < second; ++i)
    {
        cin >> arrS[i];
    }

    cout << getTotalX(arrF, first, arrS, second);

    return 0;
}