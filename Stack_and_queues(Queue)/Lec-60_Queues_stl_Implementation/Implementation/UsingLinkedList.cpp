#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

struct Node *head = NULL;
int count = 0;


void insert_begin(int x)
{
    struct Node *ptr = head;
    struct Node *new_n = new Node;
    new_n->data = x;
    new_n->next = head;
    head = new_n;
    count++;
}



void enqueue(int x)
{
    if (head == NULL)
    {
        insert_begin(x);
    }
    
    else
    {
        struct Node *ptr = head;
        struct Node *newn = new Node;
        
        newn->data = x;
        newn->next = NULL;
        
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = newn;
        count++;
    }
}

void dequeue()
{
    struct Node *ptrr = head;
    
    if (head->next != NULL)
    {
        head = head->next;
    }
    else
    {
        head = NULL;
    }

    delete (ptrr);
}

void display()
{
    Node *ptr = head;
    if (head == NULL)
    {
        cout << "Queue UNDER-FLOW" << endl;
    }
    else
    {
        while (ptr != NULL)
        {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
    }
    cout << endl;
}

int main()
{
    Node l;
    
    enqueue(100);
    enqueue(200);
    enqueue(300);
    enqueue(400);
    enqueue(500);
    
    dequeue();
    
    
    display();
    
    

    return 0;
}