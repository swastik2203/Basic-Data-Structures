#include <iostream>
using namespace std;

int main()
{

    string s1, s2, s3;

    getline(cin, s1);
    getline(cin, s2);
    getline(cin, s3);

    string s;
    int i = 0;

    while (1)
    {
        char ch = s1[i];

        if (s2[i] == ch && s3[i] == ch)
        {
            s.push_back(ch);
            i++;
        }
        else
            break;
    }
    cout<<s;

    return 0;
}
