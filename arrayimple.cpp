#include <bits/stdc++.h>
using namespace std;
#define MAX_SIZE 101
int A[MAX_SIZE];
int f = -1, r = -1;

bool isEmpty()
{
    if (f == -1 && r == -1)
        return true;
    else
        return false;
}

void Enqueue(int x)
{

    if (isEmpty())
    {

        ++f;
        ++r;
    }
    else if (((r + 1) % MAX_SIZE) == f)
    {
        cout << "queue is full";
        return;
    }

    else
    {
        r = ((r + 1) % MAX_SIZE);
    }
    A[r] = x;
}
void Dequeue()
{
    if (isEmpty())
    {
        cout << "queue is empty";
        return;
    }
    else
    {
        f = ((f + 1) % MAX_SIZE);
    }
}

int main()
{

    Enqueue(5);
    
    Enqueue(6);
    Enqueue(9);
    Enqueue(10);
    Enqueue(12);
    
    Dequeue();

    int front = f;
   while (1)
   {
       if(front==r)
       {
        cout << A[front] << " ";
       break ;
       }
       else
       {
          cout << A[front] << " ";
          front=((front + 1) % MAX_SIZE); 
       }
    } 

    return 0;
}