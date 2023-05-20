#include <iostream>
#include <cstdlib>
using namespace std;

bool revANDbeauty(long long int v1, long long int v3)
{
    long long int rem;
    long long int sum = 0;
    long long int temp = v1;

    while (v1 != 0)
    {
        rem = v1 % 10;
        sum = sum * 10 + rem;
        v1 = v1 / 10;
    }

    sum = abs(temp - sum);
    if (sum % v3 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int beautifulDays(long long int v1, long long int v2, long long int v3)
{
    int counter = 0;
    bool rev = false;

    while (v1 <= v2)
    {
        rev = revANDbeauty(v1, v3);
        if (rev == true)
        {
            ++counter;
        }
        ++v1;
    }

    return counter;
}

int main()
{
    long long int val1;
    long long int val2;
    long long int val3;

    cin >> val1;
    cin >> val2;
    cin >> val3;

    cout << beautifulDays(val1, val2, val3) << endl;

    return 0;
}