//#include<bits/stdc++.h>
#include<iostream>
using namespace std;

struct node{
    int data;
    struct node* next;
};

struct node* Insert(struct node* head, int data);
void PrintList(struct node* head);
struct node* Delete(struct node* head, int g);

struct node* head = nullptr;

int main()
{

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    
    int n;
    cin>>n;
    int m;
    for(int i=0;i<n;i++)
    {
        cin>>m;
        head = Insert(head, m);
    }

    /*calling function for deletion in arbitrary postion in the linked list*/

    int g;
    cin>>g;

    head = Delete(head, g);


    PrintList(head);
    return 0;
}

/*function for creating a linked list by inserting nodes at tail*/
struct node* Insert(struct node* head, int data)
{
    struct node* temp = new node;
    temp->data = data;
    temp->next = nullptr;

    if(head == nullptr )
    {
        head = temp;
        temp->next= nullptr;
    }
    else
    {
       struct node* temp1;
       temp1 = head;
       while(temp1->next != nullptr)
       {
            temp1 = temp1->next;
       }
       temp1->next = temp;
       temp->next =nullptr;
    }
    return head;
}

// function for deletion in arbitrary postion in the linked list

struct node* Delete(struct node* head, int g)
{
    struct node* temp2 = nullptr;
    struct node* temp3 = head;

    for(int i=0;i<g-1;i++)
    {
        temp3 = temp3->next;

    }

    temp2 = temp3->next;
    temp3->next = temp2->next;
    
    return head;
}


void PrintList(struct node* head)
{
    struct node* temp1 = head;
    while(temp1 != nullptr)
    {
        int f = temp1->data;
        cout<<f<<endl;
        temp1 = temp1->next;
    }
}



