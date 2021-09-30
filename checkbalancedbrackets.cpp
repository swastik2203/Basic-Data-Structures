

/* #include <bits/stdc++.h>
#include <stack>
using namespace std;


 bool AreParanthesesBalanced(string );
bool ArePair(char , char);


bool AreParanthesesBalanced(string exp)
{
    stack<char> S;
    for (int i = 0; i < exp.length(); i++)
    {
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
            S.push(exp[i]);
        else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
        {
            if (S.empty() || !ArePair(S.top(), exp[i]))
                return false;
            else
                S.pop();
        }
    }
    return S.empty() ? true : false;
}
bool ArePair(char opening, char closing)
{
    if (opening == '(' && closing == ')')
        return true;
    else if (opening == '{' && closing == '}')
        return true;
    else if (opening == '[' && closing == ']')
        return true;
    return false;
}
 
int main()
{

    int n;
    cin >> n;
    char str[n];

    cout << "enter the string :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }

   cout<<AreParanthesesBalanced(str);
    return 0;
} */
#include <bits/stdc++.h>

using namespace std;

bool checkbalancedparen(string exp)
{
    stack<char> s;
    int n = exp.size();
    for (int i = 0; i < n; i++)
    {
        if (exp[i] == '[' || exp[i] == '{' || exp[i] == '(')
        {
            s.push(exp[i]);
        }
        else if (exp[i] == ']' || exp[i] == '}' || exp[i] == ')')
        {
            if (s.top() == '[' && exp[i] == ']')
                s.pop();
            else if (s.top() == '{' && exp[i] == '}')
                s.pop();
            else if (s.top() == '(' && exp[i] == ')')
                s.pop();
            else
                return false;
        }
        
    }
    return s.empty();
}

int main()
{
    string exp;
    cout << "enter a expression: "<<endl;
    cin >> exp;
    if (checkbalancedparen(exp))
        cout << "balanced";
    else
        cout << "not balanced";

    return 0;
} 