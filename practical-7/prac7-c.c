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

void preorder(node *t) //Root-left-right
{
if(t!=NULL)
{
printf(" %d",t->data);
preorder(t->left);

 preorder(t->right);
}
}
void inorder(node *t) // left-root-right
{
if(t!=NULL)
{
inorder(t->left);
printf(" %d",t->data);

 inorder(t->right);
}
}
void postorder(node *t) // left-right-root
{
if(t!=NULL)
{
postorder(t->left);
postorder(t->right);

 printf(" %d",t->data);
}
}
void main()
{
node *root;
//clrscr();
root=create();
printf("\nThe preorder traversal of tree is: ");
preorder(root);
printf("\nThe inorder traversal of tree is: ");
inorder(root);
printf("\nThe postorder traversal of tree is: ");
postorder(root);
getch();
}