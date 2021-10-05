#include<stdio.h>
#include<conio.h>
#include<malloc.h>
typedef struct node
{
int data;
struct node *left;
// struct node *mid;
struct node *right;

} node;

node *create()
{
node *treenode;
int x;
printf("Enter data(-1 for NIL node):");
scanf("%d",&x);

 if(x==-1)
return NULL;

 treenode=(node*)malloc(sizeof(node));
treenode->data=x;
printf("Enter left child of %d:\n",x);
treenode->left=create();

 printf("Enter right child of %d:\n",x);
treenode->right=create();
return treenode;
}
void display( node * first){
    node * temp = first;
    while (temp != NULL)
    {
        printf("%d ,", temp->data);
        temp = temp->left;
    }
    printf("\n");
    temp = first;
    while (temp != NULL)
    {
        printf("%d ,", temp->data);
        temp = temp->right;
    }
}

void main()
{
node *root;
//clrscr();
root=create();

display(root);
getch();
}