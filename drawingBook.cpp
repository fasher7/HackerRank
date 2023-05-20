#include <iostream>
using namespace std;

int pageCount(int pages, int target)
{
    if ((pages == target) || (target == 1))
    {
        return 0;
    }

    int counting = 0;
    int middle = (pages / 2);

    if (target <= middle)
    {
        for (int i = 1;; i = i + 2)
        {
            if (i >= target)
            {
                break;
            }
            ++counting;
        }

        return counting;
    }

    if (target > middle)
    {
        if (pages % 2 == 0)
        {
            for (int i = pages;; i = i - 2)
            {

                if (i + 1 == target || i == target)
                {
                    break;
                }
                ++counting;
            }

            return counting;
        }
        else
        {
            for (int i = pages;; i = i - 2)
            {

                if (i - 1 == target || i == target)
                {
                    break;
                }
                ++counting;
            }

            return counting;
        }
    }

    return -1000;
}

int main()
{
    int pages;
    int target;
    cin >> pages >> target;

    cout << pageCount(pages, target) << endl;

    return 0;
}