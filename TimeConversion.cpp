#include <iostream>
#include <cstring>
using namespace std;

string timeConversion(string ntime)
{
    string mtime;
    int val = stoi(ntime);

    if (ntime[8] == 'P')
    {
        int first;
        string ftime;
        if (val == 12)
        {
            first = 12;
            ftime = to_string(first);
            mtime = mtime + ftime;
            for (int x = 2; x < 8; ++x)
            {
                mtime = mtime + ntime[x];
            }
            return mtime;
        }
        else if (val != 12)
        {
            first = 12 + val;
            ftime = to_string(first);
            mtime = mtime + ftime;
            for (int x = 2; x < 8; ++x)
            {
                mtime = mtime + ntime[x];
            }
            return mtime;
        }
    }
    else if (ntime[8] == 'A')
    {
        int first;
        string ftime;
        if (val == 12)
        {
            first = 0;
            mtime = mtime + "0";
            ftime = to_string(first);
            mtime = mtime + ftime;
            for (int x = 2; x < 8; ++x)
            {
                mtime = mtime + ntime[x];
            }
            return mtime;
        }
        else if (val != 12)
        {
            first = 0 + val;
            if (first >= 10)
            {
                ftime = to_string(first);
                mtime = mtime + ftime;
                for (int x = 2; x < 8; ++x)
                {
                    mtime = mtime + ntime[x];
                }
                return mtime;
            }
            else if (first < 10)
            {
                mtime = mtime + "0";
                ftime = to_string(first);
                mtime = mtime + ftime;
                for (int x = 2; x < 8; ++x)
                {
                    mtime = mtime + ntime[x];
                }
                return mtime;
            }
        }
    }

    return "Invalid Time";
}

int main()
{
    string ntime;
    cin >> ntime;

    cout << timeConversion(ntime);

    return 0;
}
