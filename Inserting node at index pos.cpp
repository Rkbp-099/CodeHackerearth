//#include<bits/stdc++.h>
#include<iostream>
using namespace std;

struct node{
    int data;
    struct node* next;
};

struct node* Insert(struct node* head, int data);
void PrintList(struct node* head);
struct node* arbiInsert(struct node* head, int data, int pos);

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

    /*calling function for insertion in arbitrary postion in the linked list*/

    int k,pos;
    cin>>k;
    cin>>pos;

    head = arbiInsert(head, k, pos);


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

// function for insertion in arbitrary postion in the linked list

struct node* arbiInsert(struct node* head, int data, int pos)
{
    
    struct node* temp2 = new node;
    temp2->data = data;
    temp2->next = nullptr;

    struct node* temp3 = head;
    for(int i=0;i<pos-1;i++)
    {
        temp3 = temp3->next;

    }

    temp2->next = temp3->next;
    temp3->next = temp2;
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



