#include <iostream>
#include <ctype.h>

#include <cstring>

using namespace std;

bool pallin(string a, int n)
{
    int i,start=0,end=n-1;
    while(start<=end)
    {
        if (!isalpha(a[start]))
        {
            start++;
        }
         if (!isalpha(a[end]))
        {
            end--;
        }
        if (a[start]>='A' && a[start]<='z')
        {
            a[start]=tolower(a[start]);
        }
        if (a[end]>='A' && a[end]<='z')
        {
            a[end]=tolower(a[end]);
        }
        

        
        

        if (a[start] != a[end])
        {
          return false;
        }
        
        start++;
        end--;
    }
   return true;
}

int main()
{
    string str;
    getline(cin, str);

    int n = str.length();

   cout<< pallin(str, n);

    return 0;
}
