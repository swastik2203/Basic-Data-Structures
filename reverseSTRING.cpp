#include <bits/stdc++.h>
#include <stack>
using namespace std;

void reverse(char* str, int n)
{
    stack<char> s;
   
    for (int  i = 0; i < n; i++)
    s.push(str[i]);

    
     int i=0;
    while (!s.empty())
    {
        str[i]=s.top();
        s.pop();
        i++;
    }  
      /* for (int  i = 0; i <n; i++){
         str[i]=s.top();
        s.pop();
        
     } 
 */

    
}

int main(){
    
    int n;
    cin>>n;
    char str[n];

    
    cout<<"enter the string :"<<endl;
   for (int  i = 0; i <n ; i++)
   {
       cin>>str[i];
    
   }
    
   


    reverse(str,n);
     for (int  i = 0; i <n ; i++)
   {
       cout<<str[i];
    
   }
   

    
    
    
    
    return 0;
}