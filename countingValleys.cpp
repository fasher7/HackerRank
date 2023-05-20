#include <iostream>
using namespace std;

int countingValleys(char tracks[], int numPaths)
{
    int finder = 0;
    int valley = 0;

    for (int y = 0; y < numPaths; ++y)
    {
        if (tracks[y] == 'U')
        {
            ++finder;
            if (finder == 0)
            {
                ++valley;
            }
        }
        else if (tracks[y] == 'D')
        {
            --finder;
        }
    }

    return valley;
}

int main()
{
    int numPaths;
    cin >> numPaths;
    char tracks[numPaths];

    for (int x = 0; x < numPaths; ++x)
    {
        cin >> tracks[x];
    }
    cout << countingValleys(tracks, numPaths);

    return 0;
}
