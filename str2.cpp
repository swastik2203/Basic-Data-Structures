#include <iostream>
#include <ctype.h>
#include <cstring>
using namespace std;

bool isvowel(char a)
{
    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
    {
        return true;
    }
    else
        return false;
}
bool isconso(char a)
{
    if (!isvowel(a))
    {
        return true;
    }
    else
        return false;
}
int main()
{
    string str;
    getline(cin, str);
    int n = str.length();
    int count = 0;

    for (int i = 0; i < n; i++)
    {

        char s = str[i];
        //to check if 1st char is conso or vowel
        if (isconso(s))
        {
            for (int j = i + 1; j < n; j++)
            {
                char k = str[j];
                if (isvowel(k))
                {
                    count++;
                }
            }
        }
        else if (isvowel(s))
        {
            for (int j = i + 1; j < n; j++)
            {
                char k = str[j];
                if (isconso(k))
                {
                    count++;
                }
            }
        }
    }

    cout << "the no. of substrings starts with vowel and ends with conso and vice versa :" << endl;
    cout << count;

    return 0;
}
