#include <iostream>
using namespace std;

void circularArrayRotation(int numArr[], int num, int RC, int q)
{
    int val;
    int change;
    int tempArr[num];

    for (int j = 0; j < num; ++j)
    {
        tempArr[j] = numArr[j];
    }

    for (int y = 0; y < num; ++y)
    {
        change = (y + RC) % num;
        numArr[change] = tempArr[y];
    }

    for (int z = 0; z < q; ++z)
    {
        cin >> val;
        cout << numArr[val] << endl;
    }
}

int main()
{
    int num;
    int rotCount;
    int queries;
    cin >> num;

    int numArr[num];
    cin >> rotCount;
    cin >> queries;
    for (int x = 0; x < num; ++x)
    {
        cin >> numArr[x];
    }

    circularArrayRotation(numArr, num, rotCount, queries);

    return 0;
}