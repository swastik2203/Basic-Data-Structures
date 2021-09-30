#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
struct node *head;

void del(int n)
{
   
struct node* heady=head;
    if(n==1)
    {
        head=heady->next;
    
        return ;
    }
    
    
     for(int i=1; i<=(n-2); i++){
        heady=heady->next;
    }
     struct node *temp = NULL;
    
    temp=heady->next;
    temp=temp->next;
    heady->next=temp;
    
}


void print()
{
    struct node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
   head=NULL; 
    int a = 2, b = 3, c = 4;

    struct node* temp=new node();
    head = temp;
    temp->data=a;
    temp->next=NULL;

    struct node* temp1=new node();
    temp->next = temp1;
    temp1->data=b;

    struct node* temp2=new node();
    temp1->next = temp2;
    temp2->data=c;
    temp2->next=NULL;

    int  n;

    

    cout << "enter the position where element to be deleted :" << endl;
    cin >> n;

    del( n);

    print();
    return 0;
}