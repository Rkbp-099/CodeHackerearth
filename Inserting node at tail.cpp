#include<iostream>
using namespace std;

struct node{
        int data;
        struct node* next;
    };

node* Insert(node* head, int data);
void PrintList(struct node* head);


/*Driver programme*/
int main()
{

    struct node* head = nullptr;
    int n;
    cin>>n;
    int y;
    for(int i=0;i<n;i++)
    {
        cin>>y;
        head=Insert(head,y);
        //cout<<head->data<<endl;
       
    }
 
/*Printing the Linked List*/
    PrintList(head);

    return 0;
}

node* Insert(node* head, int data)
{
    node* temp = new node;
    temp->data = data;
    temp->next = nullptr;
    node* H = head;
    if(H==nullptr)
    {
        H = temp;
        
        return temp;
    }
    else
    {
        while(H->next!=nullptr)
        {
            H = H->next;
        }
        H->next = temp;
        
        return head;
    }
}


void PrintList(struct node* head)
{
    node* A = head;
    while(A!=nullptr)
    {
        int f = A->data;
        cout<<f<<endl;
        A = A->next;
        
    }
}


















