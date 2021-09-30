#include <bits/stdc++.h>
using namespace std;

bool checkop(char op)
{
    if (op == '+' || op == '-' || op == '*' || op == '/')
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

int kaamkaro(int x, int y, char op)
{
    if (op == '+')
        return (x + y);
    else if (op == '-')
        return (x - y);
    else if (op == '*')
        return (x * y);
    else if (op == '/')
        return (x / y);
    else
        cout << "Unexpected Error \n";
    return -1;
}

void evaluation(string exp, int ch)
{
    stack<int> s;
    int n = exp.size();
    int op1, op2, res;
    if (ch == 1)
    {
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
                s.push(op);
            }
            else if (checkop(exp[i]))
            {
                op2 = s.top();
                s.pop();
                op1 = s.top();
                s.pop();
                res = kaamkaro(op1, op2, exp[i]);
                s.push(res);
            }
        }
    }
   else
    {
        for (int i = n - 1; i >= 0; i--)
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
                s.push(op);
            }
            else if (checkop(exp[i]))
            {
                op2 = s.top();
                s.pop();
                op1 = s.top();
                s.pop();
                res = kaamkaro(op1, op2, exp[i]);
                s.push(res);
            }
        }
    } 
    cout << res;
}
int main()
{
    int ch;
    string exp;
    cout << "enter the expression" << endl;
    getline(cin,exp);
    cout << "enter your choice" << endl;
    cout << "1 for postfix and 2 for prefix" << endl;
    cin >> ch;
    evaluation(exp, ch);

    return 0;
}