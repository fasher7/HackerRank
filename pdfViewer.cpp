#include <iostream>
#include <string>
using namespace std;

int designerPdfViewer(int alpha[], int num, string word)
{
    int max = -100;
    int finder;
    int temp = word.size();
    int theSize = 0;
    char alPha[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l' ,'m', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    for (int y = 0; y < temp; ++y)
    {
        if (word[y] != ' ')
        {
            ++theSize;
            for (int z = 0; z < 26; ++z)
            {
                if (alPha[z] == word[y])
                {
                    finder = z+1;
                }
            }
            for (int j = 0; j < finder; ++j)
            {
                if (max < alpha[j])
                {
                    max = alpha[j];
                }
            }
        }
    }

    return max * theSize;
}

int main()
{
    int alpha[26];
    string word;

    for (int i = 0; i < 26; ++i)
    {
        cin >> alpha[i];
    }
    cin >> word;

    cout << designerPdfViewer(alpha, 26, word);

    return 0;
}