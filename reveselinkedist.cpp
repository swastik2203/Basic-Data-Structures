#include <bits/stdc++.h>
#include <stack>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
struct node *head;

void reverse()
{
    stack<struct node*> s;
    struct node* temp = head;
    while (temp != NULL)
    {
        s.push(temp);
        temp = temp->next;
    }

    head = s.top();
    temp = head;
    s.pop();

      while (!s.empty())               
    {
       
        temp->next = s.top();
         s.pop();
       
        temp = temp->next;
    }  
    
    
/* 
    while (!s.empty())                NOT WORKING PROPERLY
    {
        s.pop();
        temp->next = s.top();
        cout<<temp->data;
        temp = temp->next;
    }  */


    temp->next = NULL;
}
void print()
{
    struct node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data<<" ";
        temp = temp->next;
    }
}

int main()
{
    struct node *temp1 = new node();
    temp1->data = 2;

    struct node *temp2 = new node();
    temp2->data = 3;

    struct node *temp3 = new node();
    temp3->data = 4;

    struct node *temp4 = new node();
    temp4->data = 5;

    temp1->next = temp2;
    temp2->next = temp3;
    temp3->next = temp4;
    temp4->next = NULL;

    head = temp1;

    reverse();
    print();

    return 0;
}