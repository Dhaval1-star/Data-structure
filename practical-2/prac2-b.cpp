// b. Write a program to search the elements in the linked list and display the same
#include<iostream>
using namespace std;

struct node{
    public:
    int data;
    struct node* next;
};

void searchlist(struct node * ptr,int num){
    while (ptr != NULL)
    {
        if (ptr->data == num)
        {
            cout<<"yes your number in the list "<<ptr->data<<endl;
        }
        ptr = ptr->next;
    }
}

int main(){

    struct node *head;
    struct node *first;
    struct node *second;
    struct node *third;
    struct node *four;
    
    head = (struct node* ) malloc( sizeof(struct node));
    first = (struct node* ) malloc( sizeof(struct node));
    second = (struct node* ) malloc( sizeof(struct node));
    third = (struct node* ) malloc( sizeof(struct node));
    four = (struct node* ) malloc( sizeof(struct node));

    head->data = 0;
    head->next = first;

    first->data = 10;
    first->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = four;

    four->data = 40;
    four->next = NULL;

    searchlist(head,40);
}