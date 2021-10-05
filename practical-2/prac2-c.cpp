#include<iostream>
using namespace std;

struct node{
    public:
    int data;
    struct node* next;
    struct node* prev;
};

void linksort(struct node * ptr){
    while (ptr->next != NULL){
        if (ptr->data < (ptr->next->data)){//10 < 20
            int temp = (ptr->next->data);
            (ptr->next->data) = ptr->data;
            ptr->data = temp;
        }
        ptr = ptr->next;
    }
}

void linkprint(struct node * ptr){
    cout<<"you are enter into linkprint function"<<endl;
    while (ptr != NULL){
        cout<<ptr->data<<endl;
        ptr = ptr->next;
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
    head->data = 10;
    head->next = second;
    head->prev = NULL;
    
    // linking second node with third
    second->data = 40;
    second->next = third;
    second->prev = head;
    
    // linking third node with four
    third->data = 6;
    third->next = four;
    third->prev = second;
    
    // linking four node with null
    four->data = 50;
    four->next = NULL;
    four->prev = third;

    linkprint(head);
    linksort(head);
    linkprint(head);
    return 0;
}