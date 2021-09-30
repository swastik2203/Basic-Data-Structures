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
    temp->next = head;
    head = temp;
}
void print()
{
    struct node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

int main()
{
    head = NULL;

    int n, x;
    cout << "how many elements in the linked list :" << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "enter the element to be inserted at beginning :" << endl;

        cin>> x;

        insert(x);
    }
    print();
    return 0;
}