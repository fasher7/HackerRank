#include <iostream>
using namespace std;

int findDigits(int num)
{
    int count = 0;
    int temp = num;
    int last;

    while (temp != 0)
    {
        last = temp % 10;
        if (last != 0)
        {
            if (num % last == 0)
            {
                ++count;
            }
        }
        temp = temp / 10;
    }

    return count;
}

int main()
{
    int testCases;
    int num;

    cin >> testCases;
    while (testCases != 0)
    {
        cin >> num;
        cout << findDigits(num) << endl;
        --testCases;
    }

    return 0;
}