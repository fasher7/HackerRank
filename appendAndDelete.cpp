#include <iostream>
#include <string>
using namespace std;

string appendAndDelete(string i, string d, int op)
{
    string name1 = "";
    string name2 = "";

    int val = 0;
    int size1 = i.size();
    int size2 = d.size();

    if (i == d)
    {
        if (i.size() + d.size() <= op)
        {
            return "Yes";
        }
    }

    for (int x = 0;; ++x)
    {
        if (i[x] != d[x])
        {
            val = x;
            break;
        }
    }

    for (int a = val; a < size1; ++a)
    {
        name1 = name1 + i[a];
    }

    for (int b = val; b < size2; ++b)
    {
        name2 = name2 + d[b];
    }

    int finalSize1 = name1.size();
    int finalSize2 = name2.size();

    if (i.size() < d.size())
    {
        if ((i.size() + d.size()) % 2 != 0)
        {
            if (finalSize1 + finalSize2 == op)
            {
                return "Yes";
            }
            else
            {
                return "No";
            }
        }
        else
        {
            if (finalSize1 + finalSize2 <= op)
            {
                return "Yes";
            }
            else
            {
                return "No";
            }
        }
    }
    else
    {
        if (finalSize1 + finalSize2 <= op)
        {
            return "Yes";
        }
        else
        {
            return "No";
        }
    }
}

int main()
{
    string initial;
    string desired;
    int operations;

    cin >> initial;
    cin >> desired;
    cin >> operations;

    cout << appendAndDelete(initial, desired, operations);

    return 0;
}