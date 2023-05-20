#include <iostream>
using namespace std;

string angryProfessor(int stu[], int n, int thre)
{
    int counter = 0;
    for (int y = 0; y < n; ++y)
    {
        if (stu[y] <= 0)
        {
            ++counter;
        }
    }

    if (counter < thre)
    {
        return "YES";
    }
    else
    {
        return "NO";
    }
}

int main()
{
    int testCases;
    int num;
    int threshold;

    cin >> testCases;
    while (testCases != 0)
    {
        cin >> num;
        cin >> threshold;
        int students[num];

        for (int x = 0; x < num; ++x)
        {
            cin >> students[x];
        }
        cout << angryProfessor(students, num, threshold) << endl;

        --testCases;
    }

    return 0;
}