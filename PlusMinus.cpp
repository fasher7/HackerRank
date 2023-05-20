#include <iostream>
#include <iomanip>
using namespace std;

void plusMinus(int arr[], int size)
{
    float counter1 = 0;
    float counter2 = 0;
    float counter3 = 0;

    for (int x = 0; x < size; ++x)
    {
        if (arr[x] > 0)
        {
            counter1++;
        }
        else if (arr[x] < 0)
        {
            counter2++;
        }
        else
            counter3++;
    }

    cout << fixed << setprecision(6) << counter1 / size << endl;
    cout << fixed << setprecision(6) << counter2 / size << endl;
    cout << fixed << setprecision(6) << counter3 / size;
}

int main()
{
    int size;
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; ++i)
    {
        cin >> arr[i];
    }
    plusMinus(arr, size);

    return 0;
}