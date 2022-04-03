#include<stdio.h>
#include<conio.h>
struct node
{
    struct node *left;
    int item;
    struct node *right;
};

void delete0(struct node *ptr,struct node *parptr)
{
    if(parptr->left==ptr)
        parptr->left=NULL;
    else
        parptr->right=NULL;
    free(ptr);
}

int deletion(struct node **r,int data)
{
    struct node *ptr,*parptr=NULL, *pred,*parpred;
    if(*r==NULL)
        return 0;

    ptr=*r;
    while(ptr)
    {
        if(ptr->item==data)
        {
            if(!(ptr->left||ptr->right))
            {
                if(parptr==NULL)
                {
                    free(ptr);
                    *r=NULL;
                }
            else
                delete0(ptr,parptr);
            }
    	}
        else if(data<ptr->item)
        {
            parptr=ptr;
            ptr=ptr->left;
        }
        else
        {
            parptr=ptr;
            ptr=ptr->right;
        }
    }
    if(ptr==NULL)
        return 0;
}

int insert(struct node **r,int data)
{
    struct node *n,*t;
    n=(struct node*)malloc(sizeof(struct node));
    n->left=NULL;
    n->item=data;
    n->right=NULL;
    if(*r==NULL)
        *r=n;
    else
    {
        t=*r;
        while(1)
        {
            if(t->item==data)
            {
                return 0;
            }
            else if(data<t->item)
            {
                if(t->left==NULL)
                {
                    t->left=n;
                    return 1;
                }
                t=t->left;
            }
            else
            {
                if(t->right==NULL)
                {
                    t->right=n;
                    return 1;
                }
                t=t->right;
            }
        }
    }
}
int menu()
{
    int choice;
    printf("\n1. Insertion");
    printf("\n2. Deletion");
    printf("\n3. Exit");
    printf("\n\nEnter your choice\n ");
    scanf("%d",&choice);
    return choice;
}
int main()
{
    struct node *root=NULL;
    int data;

    while(1)
    {
        switch(menu())
        {
        case 1:
            printf("\nEnter data to insert: ");
            scanf("%d",&data);
            if(insert(&root,data))
                printf("\nData inserted");
            else
                printf("Duplicate value not allowed");
            break;
        case 2:
            printf("\nEnter data to delete: ");
            scanf("%d",&data);
            if(deletion(&root,data))
                printf("\nData deleted");
            else
                printf("\nData not found");
            break;
        case 3:
            exit(0);
        default:
            printf("\nInvalid choice,retry");
        }
        getch();
    }
}
