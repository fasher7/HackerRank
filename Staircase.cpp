#include <iostream>
using namespace std;

void staircase(int rows)
{
    for (int x = 1; x <= rows; ++x)
    {
        for (int y = 1; y <= rows - x; ++y)
        {
            cout << " ";
        }
        for (int z = 1; z <= x; ++z)
        {
            cout << "#";
        }
        cout << endl;
    }
}

int main()
{
    int rows;
    cin >> rows;
    staircase(rows);

    return 0;
}