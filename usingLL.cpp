#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node* next;
};
struct node* top =NULL;

void push(int x){
    struct node* temp=new node();
    temp->data=x;
    temp->next=top;
    top=temp;
}
void pop(){
    struct node* temp;
    if (temp==NULL)
     return;

    temp=top;
    top=top->next;
    
    free(temp);
}

struct node* topi(){
    return top;
}

int isempty(){
    if (top==NULL)
    return 1;

    else
    return 0;
    
    
}
void print()
{
    struct node *temp = top;
    while (temp != NULL)
    {
        cout << temp->data <<" ";
        temp = temp->next;
    }
}

int main(){
    int x;
    for (int i = 0; i < 5; i++)
    {
        cout<<"enter the element to insert into stack :"<<endl;
    cin>>x;
    push(x);
        cout<<endl;
    }
    pop();

    int n=isempty();
    cout<<n<<endl;


    
    
    print();

    return 0;
}