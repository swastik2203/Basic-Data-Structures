#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
struct node *head;

void insert(int x,int n)
{
    struct node *temp = new node();
    temp->data = x;
    temp->next = NULL;
     if(n==1)
    {
        temp->next=head;
        head=temp;
    
        return ;
    }
    
    struct node* heady=head;
   for (int i = 0; i < n-2; i++)
   {
       heady=heady->next;
   }
   
    
   
    temp->next=heady->next;
    heady->next=temp;

    
}
void print()
{
    struct node *temp = head;
    while (temp!= NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

int main()
{
    head = new node();
    struct node* temp1 = new node();
    struct node* temp2= new node();
    

    head->next = temp1;
    temp1->next = temp2;
    temp2->next = NULL;

    head->data = 1;
    temp1->data = 2;
    temp2->data = 3;

    int x, n;

    cout << "enter the element to be inserted :" << endl;
    cin >> x;

    cout << "enter the position where element to be entered :" << endl;
    cin >> n;

    insert(x, n);

    print();
    return 0;
}