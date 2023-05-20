#include <iostream>
using namespace std;

void miniMaxSum(long long int arr[])
{
    long long int max, min;
    long long int sum = 0;

    max = arr[0];
    min = arr[0];

    for (int x = 0; x < 5; ++x)
    {
        sum = sum + arr[x];
        if (max <= arr[x])
        {
            max = arr[x];
        }
        if (min >= arr[x])
        {
            min = arr[x];
        }
    }

    cout << sum-max << " " << sum-min;
}

int main()
{
    long long int arr[5];

    for (int i = 0; i < 5; ++i)
    {
        cin >> arr[i];
    }
    miniMaxSum(arr);

    return 0;
}