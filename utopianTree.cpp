#include <iostream>
using namespace std;

int utopianTree(int cycles)
{
    int height = 1;

    for (int x = 0; x < cycles; ++x)
    {
        if (x % 2 == 0)
        {
            height = height * 2;
        }
        else
        {
            ++height;
        }
    }

    return height;
}

int main()
{
    int testCases;
    int cycles;

    cin >> testCases;
    while (testCases != 0)
    {
        cin >> cycles;
        cout << utopianTree(cycles) << endl;
        --testCases;
    }

    return 0;
}