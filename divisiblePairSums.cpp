#include <iostream>
using namespace std;

int divisibleSumPairs(int size, int arr[], int d)
{
    int counter = 0;

    for (int x = 0; x < size; ++x)
    {
        for (int y = x + 1; y < size; ++y)
        {
            int val = arr[x] + arr[y];
            if ((val % d) == 0)
            {
                ++counter;
            }
        }
    }

    return counter;
}

int main()
{
    int size;
    int divisor;
    cin >> size >> divisor;
    int arr[size];

    for (int i = 0; i < size; ++i)
    {
        cin >> arr[i];
    }

    cout << divisibleSumPairs(size, arr, divisor);

    return 0;
}