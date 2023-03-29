//Program to implement Binary Search Tree

#include<stdio.h>
#include<stdlib.h>

struct tree
{
    int data;
    struct tree *left;
    struct tree *right;
};
typedef struct tree *TREE;

TREE insert_into_BST(TREE root,int data)
{
    TREE newnode;
    newnode=(struct tree*)malloc(sizeof(struct tree));

    if(newnode==NULL)
    {
        printf("Memory allocation failed");
        return root;
    }

    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;

    if(root==NULL)
    {
        printf("Root created");
        return newnode;
    }

    TREE curr,parent;
    curr=root;
    parent=NULL;

    while(curr!=NULL)
    {
        parent=curr;

        if(newnode->data<curr->data)
            curr=curr->left;

        else
            curr=curr->right;
    }

        if(newnode->data<parent->data)
            parent->left=newnode;
        else
            parent->right=newnode;

        return root;
}

void inorder(TREE root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d\t",root->data);
        inorder(root->right);
    }
}

void preorder(TREE root)
{
    if(root!=NULL)
    {
        printf("%d\t",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(TREE root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d\t",root->data);
    }
}

int main()
{
    TREE root=NULL;
    int choice,data;

    while(1)
    {
     printf("Enter 1 to insert, 2 to inorder, 3 to preorder, 4 to postorder, 5 to exit:");
     scanf("%d",&choice);

     switch(choice)
     {
        case 1:printf("Enter the element to insert=");
                scanf("%d",&data);
                root=insert_into_BST(root,data);
                break;
        case 2:inorder(root);
            break;
        case 3:preorder(root);
            break;
        case 4:postorder(root);
            break;
        case 5:exit(0);
            break;
        default:printf("Invalid input");
            break;
     }
    }
    return 0;
}
