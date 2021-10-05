#include<iostream>
using namespace std;

struct node{
    public:
    int data;
    struct node* next;
    struct node* prev;
};

void linktravel(struct node * ptr){
    while (ptr != NULL){
    cout<<ptr->data<<" ,";
    ptr = ptr->prev;    
    }
}

int main(){
    struct node* head;
    struct node* second;
    struct node* third;
    struct node* four;

    // allocate memory for node in the linked list in the heap
    head = (struct node*) malloc(sizeof(struct node));
    second = (struct node*) malloc(sizeof(struct node));
    third = (struct node*) malloc(sizeof(struct node));
    four = (struct node*) malloc(sizeof(struct node));
    
    // linking first node with second 
    head->data = 7;
    head->next = second;
    head->prev = NULL;
    
    // linking second node with third 
    second->data = 10;
    second->next = third;
    second->prev = head;
    
    // linking third node with four 
    third->data = 20;
    third->next = four;
    third->prev = second;
    
    // linking four node with null 
    four->data = 40;
    four->next = NULL;
    four->prev = third;

    linktravel(four);
    return 0;
}