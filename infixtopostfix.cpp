#include <bits/stdc++.h>
using namespace std;
stack<char> s;
bool checkop(char op)
{
    if (op == '+' || op == '-' || op == '*' || op == '/' || op=='(')
        return true;
    else
        return false;
}


bool checknum(char num)
{
    if(num>='0' && num<='9')
    return true;
    else 
    return false;

}
bool isHigherOrder(char op)
{
    if((s.top()=='+' || s.top()=='-') && (op=='*' || op=='/'))
    return true;
    else
    return false;
}

void in_to_post(string exp)
{
    
    int n = exp.size();
    
    string postfix;
        for (int i = 0; i < n; i++)
        {
            if(exp[i]==' ' || exp[i]==',')
            continue;
            else if (checknum(exp[i]))
            {
                int op=0;
                while(checknum(exp[i]))
                {
                    op=(op*10) + (exp[i]-'0');
                    i++;
                }
                i--;
                postfix.append(to_string(op));
                postfix.append(" ");
            }
            else if (checkop(exp[i]))
            {
                if(s.empty())
                s.push(exp[i]);
                else if(!s.empty() && isHigherOrder(exp[i]))
                s.push(exp[i]);
                else
                {
                while(!s.empty())
                {
                    postfix.append(1,s.top());
                    postfix.append(" ");
                    
                    s.pop();
                }
                s.push(exp[i]);
                }
            }
            else 
            {
                s.pop();
            }
        }
    while(!s.empty())
                {
                    postfix.append(1,s.top());
                    postfix.append(" ");
                    
                    s.pop();
                }
   
   cout<<postfix;
}



int main()
{
    int ch;
    string exp;
    cout << "enter the expression with space or comma " << endl;
    getline(cin,exp);
    
    in_to_post(exp);

    return 0;
}