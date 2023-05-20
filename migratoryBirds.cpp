#include <iostream>
#include <algorithm>
using namespace std;

int migratoryBirds(int birdArr[], int size)
{
    int counter = 0;
    int max = 0;

    sort(birdArr, birdArr+size);
    int target = birdArr[0];
    int type = birdArr[0];
    
    for (int x = 1; x < size; ++x)
    {
        if (target == birdArr[x])
        {
            ++counter;
        }
        else 
        {
            counter = 0;
            target = birdArr[x];
        }
        if (counter > max)
        {
            max = counter;
            type = target;
        }
    }
    
    return type;
}

int main()
{
    int size;
    cin >> size;
    int birdArr[size];

    for (int i = 0; i < size; ++i)
    {
        cin >> birdArr[i];
    }

    cout << migratoryBirds(birdArr, size);

    return 0;
}