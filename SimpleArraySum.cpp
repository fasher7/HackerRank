#include <iostream>
using namespace std;

int simpleArraySum (int arrsum[], int size)
{
    int total = 0;
    for (int x = 0; x < size; ++x)
    {
        total = total + arrsum[x];
    }

    return total;
}

int main()
{
    int size;
    cin >> size;
    int arrsum[size];

    for (int i = 0; i < size; ++i)
    {
        cin >> arrsum[i];
    }

    cout << simpleArraySum(arrsum, size);

    return 0;
}