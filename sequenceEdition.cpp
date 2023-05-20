#include <iostream>
using namespace std;

int permutationEquation(int numArr[], int num, int x)
{
    int finder;

    for (int a = 0; a < num; ++a)
    {
        if (x == numArr[a])
        {
            finder = a + 1;
            break;
        }
    }

    for (int b = 0; b < num; ++b)
    {
        if (finder == numArr[b])
        {
            finder = b + 1;
            break;
        }
    }

    return finder;
}

int main()
{
    int num;
    cin >> num;
    int numArr[num];

    for (int y = 0; y < num; ++y)
    {
        cin >> numArr[y];
    }

    int x = 1;
    while (x <= num)
    {
        cout << permutationEquation(numArr, num, x) << endl;
        ++x;
    }

    return 0;
}