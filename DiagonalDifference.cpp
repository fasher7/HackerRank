#include <iostream>
using namespace std;

int main()
{
    int size;
    int d1 = 0;
    int d2 = 0;
    int total;

    cin >> size;
    int matrix[size][size];

    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            cin >> matrix[i][j];
        }
    }

    for (int x = 0; x < size; ++x)
    {
        for (int y = 0; y < size; ++y)
        {
            if (x == y)
            {
                d1 = d1 + matrix[x][y];
            }
            if (x + y == size - 1)
            {
                d2 = d2 + matrix[x][y];
            }
        }
    }

    total = d1 - d2;
    if (total < 0)
    {
        total = -total;
        cout << total;
    }
    else
        cout << total;

    return 0;
}