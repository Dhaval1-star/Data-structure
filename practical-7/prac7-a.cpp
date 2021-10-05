#include<iostream>
using namespace std;

struct node
{
    public:
    int data;
    struct node *right;
};

void display( node * root){
    cout<<"hello this is started"<<endl;
    while(root != NULL)
    {
        cout<<root->data<<endl;
        root = root->right;
    }
    cout<<"hello this is end"<<endl;
}

int main()
{
    node *first;
    node *second;
    node *third;
    node *four;
    
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    four = (struct node *)malloc(sizeof(struct node));
    // entering the data 
    first->data = 10;
    first->right = second;

    second->data = 20;
    second->right = third;

    third->data = 30;
    third->right = four;

    four->data = 40;
    four->right = NULL;

    display(first);
}