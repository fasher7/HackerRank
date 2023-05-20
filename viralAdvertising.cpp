#include <iostream>
using namespace std;

int viralAdvertising(int day)
{
    int floor;
    int people = 5;
    int start = 1;
    int total = 0;

    while (start <= day)
    {
        floor = people / 2;
        total = total + floor;
        people = floor * 3;
        ++start;
    }

    return total;
}

int main()
{
    int day;
    cin >> day;

    cout << viralAdvertising(day) << endl;

    return 0;
}