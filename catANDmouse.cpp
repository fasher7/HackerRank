#include <iostream>
#include <cstdlib>
using namespace std;

string catAndMouse(int A, int B, int C)
{
    int disA = abs(C-A);
    int disB = abs(C-B);

    if (disA == disB)
    {
        return "Mouse C";
    }
    else if (disA > disB)
    {
        return "Cat B";
    }
    else
    {
        return "Cat A";
    }
}

int main()
{
    int queries;
    int catA;
    int catB;
    int mouseC;

    cin >> queries;
    for (int i = 0; i < queries; ++i)
    {
        cin >> catA;
        cin >> catB;
        cin >> mouseC;

        cout << catAndMouse(catA, catB, mouseC) << endl;
    }

    return 0;
}
