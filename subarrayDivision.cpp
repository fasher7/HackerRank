#include <iostream>
using namespace std;

int birthday(int val[], int number, int d, int m)
{
    int sum = 0;
    int checker = 0;
    int counter = 0;

    for (int x = 0; x < number; ++x)
    {
        if (x + m > number)
        {
            break;
        }

        for (int y = 0, z = x; y < m; ++y)
        {
            sum = sum + val[z + y];
            ++checker;
            if ((sum == d) && (checker == m))
            {
                ++counter;
            }
        }
        
        sum = 0;
        checker = 0;
    }

    return counter;
}

int main()
{
    int number;
    int date;
    int month;
    cin >> number;
    int val[number];

    for (int i = 0; i < number; ++i)
    {
        cin >> val[i];
    }
    cin >> date;
    cin >> month;

    cout << birthday(val, number, date, month) << endl;

    return 0;
}