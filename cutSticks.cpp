#include <iostream>
using namespace std;

int cutTheSticks(int sticks[], int num)
{
    int min = 1001;
    int counter = 0;

    for (int y = 0; y < num; ++y)
    {
        if (sticks[y] < min && sticks[y] != 0)
        {
            min = sticks[y];
        }
    }

    for (int z = 0; z < num; ++z)
    {
        if (sticks[z] > 0)
        {
            sticks[z] = sticks[z] - min;
            ++counter;
        }
    }

    return counter;
}

int main()
{
    int num;
    cin >> num;
    int sticks[num];
    int checker;

    for (int x = 0; x < num; ++x)
    {
        cin >> sticks[x];
    }

    for (;;)
    {
        checker = cutTheSticks(sticks, num);
        if (checker != 0)
        {
            cout << checker << endl;
        }
        if (checker == 0)
        {
            break;
        }
    }

    return 0;
}
