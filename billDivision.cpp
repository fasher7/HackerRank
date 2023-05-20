#include <iostream>
using namespace std;

void bonAppetit(int fd[], int it, int NE, int p)
{
    int share = 0;
    int sum = 0;
    int target = fd[NE];

    for (int x = 0; x < it; ++x)
    {
        sum = sum + fd[x];  
    }
    sum = sum - target;
    share = sum/2;
    
    if (share == p)
    {
        cout << "Bon Appetit" << endl;
    }
    else
    {
        cout << p - share << endl;
    }
}

int main()
{
    int items;
    int notEat;
    int paid;
    cin >> items;
    cin >> notEat;
    int foods[items];

    for (int i = 0; i < items; ++i)
    {
        cin >> foods[i];
    }
    cin >> paid;

    bonAppetit(foods, items, notEat, paid);

    return 0;
}
