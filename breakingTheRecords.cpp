#include <iostream>
using namespace std;

int* breakingRecords (double scores[], int games)
{
    int counter1 = 0;
    int counter2 = 0;
    int* records = new int[2];

    double max = scores[0];
    double min = scores[0];

    for (int x = 1; x < games; ++x)
    {
        if (scores[x] > max)
        {
            ++counter1;
            max = scores[x];
        }
        else if (scores[x] < min)
        {
            ++counter2;
            min = scores[x];
        }
    }

    records[0] = counter1;
    records[1] = counter2;

    return records;
}

int main()
{
    int games;
    cin >> games;
    double scores[games];

    for (int i = 0; i < games; ++i)
    {
        cin >> scores[i];
    }

    int *counters = breakingRecords(scores, games);
    cout << counters[0] << " " << counters[1] << endl;
    delete[] counters;

    return 0;
}