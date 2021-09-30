#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head;

void insertatbegi(int x)
{
    struct node *temp = new node();
    temp->data = x;
    temp->next = NULL;
    temp->prev = NULL;
    if (head == NULL)
    {
        head = temp;
        return;
    }
    head->prev = temp;
    temp->next = head;
    head = temp;
}
void insertatend(int x)
{
    struct node *temp = new node();
    temp->data = x;
    temp->next = NULL;
    temp->prev = NULL;
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
    temp->prev=heady;
}
void printforward(struct node *temp)
{
    struct node *heady = head;
    while (heady != NULL)
    {
        cout << heady->data << " ";
        heady = heady->next;
    }
    cout<<endl;
}
void printreverse(struct node *temp)
{
    struct node *heady = head;
    while (heady->next != NULL)
    {

        heady = heady->next;
    }

    while (heady != NULL)
    {
        cout << heady->data << " ";
        heady = heady->prev;
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

        //insertatbegi(x);
        insertatend(x);
    }

    printforward(head);
    printreverse(head);
    return 0;
}