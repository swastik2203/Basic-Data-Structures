#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
struct node *head;

void reverse()
{
   struct node* temp=NULL;
   struct node* heady=head;

   while (heady!=NULL)
   {
       head=head->next;
       heady->next=temp;
       temp=heady;
       heady=head;
   }
   head=temp;
   


    
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
   

    struct node* temp=new node();
    head = temp;
    temp->data=7;
    temp->next=NULL;

    struct node* temp1=new node();
    temp->next = temp1;
    temp1->data=10;

    struct node* temp2=new node();
    temp1->next = temp2;
    temp2->data=11;
    temp2->next=NULL;

    struct node* temp3=new node();
    temp2->next = temp3;
    temp3->data=17;
    temp3->next=NULL;

    

    reverse();

    print();
    return 0;
}