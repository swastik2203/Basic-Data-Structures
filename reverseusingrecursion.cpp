#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
struct node *head;

void insert(int x)
{
    struct node *temp = new node();
    temp->data = x;
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
        return;
    }

    struct node *heady = head;
    while (heady->next != NULL)
    {
        heady = heady->next;
    }
    heady->next = temp;
}

void reverse(struct node *p)
{
      


    if (p->next == NULL)
    {
        head=p;
        return;
    }
    
    reverse(p->next);
    struct node* q=p->next;
    q->next=p;
    p->next=NULL;

    
  
}
void print()
{
    struct node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data <<" ";
        temp = temp->next;
    }
}

int main()
{
    head = NULL;

    int n, x;
    cout << "how many elements in the linked list :" << endl;
    cin >> n;
    cout << "enter the elements :" << endl;
    for (int i = 0; i < n; i++)
    {

        cin >> x;

        insert(x);
    }

   reverse(head);
   print();
    return 0;
}