#include <iostream>
using namespace std;

long long int birthdayCakeCandles(long long int cndlarr[], long long int size)
{
    long long int max = cndlarr[0];
    long long int counter = 0;

    for (int x = 0; x < size; ++x)
    {
        if (max < cndlarr[x])
        {
            max = cndlarr[x];
            counter = 1;
        }
        else if (max == cndlarr[x])
        {
            counter++;
        }
    }

    return counter;
}

int main()
{
    long long int size;
    cin >> size;

    long long int cndlarr[size];
    for (int i = 0; i < size; ++i)
    {
        cin >> cndlarr[i];
    }
    cout << birthdayCakeCandles(cndlarr, size);

    return 0;
}