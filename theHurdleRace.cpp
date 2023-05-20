#include <iostream>
using namespace std;

int hurdleRace(int t, int h[], int c)
{
    int max = h[0];
    for (int y = 1; y < c; ++y)
    {
        if (h[y] > max)
        {
            max = h[y];
        }
    }
    int doses = t - max;
    
    if (doses > 0)
    {
        return 0;
    }
    else
    {
        return -doses;
    }
}

int main()
{
    int columns;
    int talent;

    cin >> columns;
    cin >> talent;

    int height[columns];
    for (int x = 0; x < columns; ++x)
    {
        cin >> height[x];
    }
    cout << hurdleRace(talent, height, columns);

    return 0;
}
