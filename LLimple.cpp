#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* link;
};
Node* f = NULL;
Node* r = NULL;


void Enqueue(int x)
{
    Node* temp = new Node();
    temp->data=x;
    temp->link=NULL;
    if(f==NULL)
    {
        f=temp;
        r=temp;
    }
    else
    {
        r->link=temp;
        r=r->link;
    }
}

void Dequeue()
{
    f=f->link;

}

int main()
{
    
    Enqueue(5);
    
    Enqueue(6);
    Enqueue(9);
    Enqueue(10);
    Enqueue(12);
    
    Dequeue();
    
           Node* front =f;
   while(1)
   {
       if(f==NULL)
       {
           cout<<"LL is empty ";
           break;
       }
       else
       {
         cout<<front->data<<" ";
         front=front->link;

       }
   }
 


/* while(front!=NULL)
{
     cout<<front->data<<" ";
         front=front->link;

} */
return 0;
} 