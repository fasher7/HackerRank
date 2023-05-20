#include <iostream>
using namespace std;

long long int aVeryBigSum(long long int sumarr[], int size)
{
    long long int sum = 0;

    for (int j = 0; j < size; ++j)
    {
        sum = sum + sumarr[j];
    }

    return sum;
}

int main()
{
    int size;
    cin >> size;
    long long int sumarr[size];

    for (int i = 0; i < size; ++i)
    {
        cin >> sumarr[i];
    }

    cout << aVeryBigSum(sumarr, size);

    return 0;
}