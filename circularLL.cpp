#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
struct node *head;

void insert(int x, int n)
{
    struct node *temp = new node();
    temp->data = x;
    temp->next = NULL;
    if (n == 1)
    {
         struct node *temp1 = head;
        while (temp1->next != head)
        {
            temp1 = temp1->next;
        }
        temp1->next = temp;

        temp->next = head;
        head = temp;
       

        return;
    }

    struct node *heady = head;
    for (int i = 0; i < n - 2; i++)
    {
        heady = heady->next;
    }

    temp->next = heady->next;
    heady->next = temp;
}
void print()
{

    struct node *temp = head;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
}

int main()
{
    struct node *temp1 = new node();
    struct node *temp2 = new node();
    struct node *temp3 = new node();
    struct node *temp4 = new node();
    head = temp1;
    temp1->data = 1;
    temp1->next = temp2;
    temp2->data = 2;
    temp2->next = temp3;
    temp3->data = 3;
    temp3->next = temp4;
    temp4->data = 4;
    temp4->next = temp1;

    int x,n;
    cout<<" enter the num which u want to insert :"<<endl;
    cin>>x;
    cout<<" enter the position :"<<endl;
    cin>>n;
    insert(x, n);
    print();

    return 0;
}