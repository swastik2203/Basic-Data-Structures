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
void printforward(struct node *temp)
{

    if (temp == NULL)
    {
        cout << "\n";
        return;
    }

    cout << temp->data << " ";
    printforward(temp->next);
}
void printreverse(struct node *temp)
{

    if (temp == NULL)
    {
     
        return;
    }

    printreverse(temp->next);
    cout << temp->data << " ";
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

   
    printforward(head);
    printreverse(head);
    return 0;
}