#include <iostream>
using namespace std;

int jumpingOnClouds(int clouds[], int num, int jD)
{
    int total = 100;
    int starting = 0;
    for (;;)
    {
        starting = (starting + jD) % num;
        if (clouds[starting] == 1)
        {
            total = total - 3;
        }
        else
        {
            total = total - 1;
        }
        if (starting == 0)
        {
            break;
        }
    }
    return total;
}

int main()
{
    int num;
    int jumpDis;
    cin >> num;
    cin >> jumpDis;
    int clouds[num];

    for (int x = 0; x < num; ++x)
    {
        cin >> clouds[x];
    }
    cout << jumpingOnClouds(clouds, num, jumpDis);

    return 0;
}