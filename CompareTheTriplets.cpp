#include <iostream>
using namespace std;

int* compareTriplets(int a[], int size1, int b[], int size2)
{
    int* finalscore = new int[2];
    int score1 = 0;
    int score2 = 0;

    for (int x = 0; x < 3; ++x)
    {
        if (a[x] > b[x])
        {
            score1++;
        }
        else if (a[x] < b[x])
        {
            score2++;
        }
    }

    finalscore[0] = score1;
    finalscore[1] = score2;

    return finalscore;
}

int main()
{
    int *fs;
    int a[3];
    int b[3];

    for (int i = 0; i < 3; ++i)
    {
        cin >> a[i];
    }

    for (int j = 0; j < 3; ++j)
    {
        cin >> b[j];
    }

    fs = compareTriplets(a, 3, b, 3);
    cout << fs[0] << " " << fs[1];
    delete[] fs;

    return 0;
}