#include <iostream>
using namespace std;

int saveThePrisoner(long long int p, long long int c, long long int s)
{
    long long int beginning; 
    beginning = ((s - 1) + (c - 1)) % p;
    return ++beginning;
}

int main()
{
    int testCases;
    long long int prisoners;
    long long int candy;
    long long int start;

    cin >> testCases;
    while (testCases != 0)
    {
        cin >> prisoners;
        cin >> candy;
        cin >> start;
        cout << saveThePrisoner(prisoners, candy, start) << endl;
        --testCases;
    }

    return 0;
}