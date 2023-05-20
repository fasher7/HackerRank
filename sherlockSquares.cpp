#include <iostream>
using namespace std;

int squares(long long int start, long long int end)
{
    int count = 0;
    int finder = 1;
    int checker;

    for (;;)
    {
        checker = finder * finder;
        if (checker >= start && checker <= end)
        {
            ++count;
            if (checker == end)
            {
                break;
            }
        }
        else if (checker > end)
        {
            break;
        }
        ++finder;
    }

    return count;
}

int main()
{
    int testCases;
    long long int start;
    long long int end;

    cin >> testCases;
    while (testCases != 0)
    {
        cin >> start;
        cin >> end;
        cout << squares(start, end) << endl;
        --testCases;
    }

    return 0;
}