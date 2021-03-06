//Normal queue using C
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Queue
{
    int capacity;
    int front,rear;
    int *ptr;
};
struct Queue* createQueue(int cap)
{
    struct Queue *Q;
    Q=(struct Queue*)malloc(sizeof(struct Queue));
    Q->ptr=(int *)malloc(sizeof(int)*cap);
    Q->capacity=cap;
    Q->front=-1;
    Q->rear=-1;
    return Q;
};
void insert(struct Queue *Q,int data)
{
    if(Q->capacity==Q->rear+1 && Q->front==0 || Q->rear+1==Q->front)
        printf("Overflow");
    else if(Q->rear==-1)//Queue is Empty
    {
        Q->front=0;
        Q->rear=0;
        Q->ptr[Q->rear]=data;
    }
    else
    {
        Q->rear=Q->rear+1;
        Q->ptr[Q->rear]=data;
    }
}
void deletion(struct Queue *Q)
{
    if(Q->front==-1)
        printf("Underflow");
    else if(Q->front==Q->rear)
    {
        Q->front=-1;
        Q->rear=-1;
    }
    else
        Q->front+=1;
}

void view(struct Queue *Q)
{
	int i;
	if(Q->rear==-1)
		printf("Queue is Empty");
	else
	{
		for(i=Q->front;i<=Q->rear;i++)
		{
        	printf("%d ",Q->ptr[i]);
		}
	}	
}
int menu()
{
    int choice;
    printf("\n1. Insertion");
    printf("\n2. Deletion");
    printf("\n3. View");
    printf("\n4. Exit");
    printf("\n\nEnter your choice\n ");
    scanf("%d",&choice);
    return choice;
}
int main()
{
	int size;
	int data;
    struct Queue *Q;
    printf("Enter the size of Queue: ");
    scanf("%d",&size);
    Q=createQueue(size);
    while(1)
    {
    	printf("Elements in Queue now ---> ");
    	view(Q);
        switch(menu())
        {
        case 1:
            printf("\nEnter data to insert: ");
            scanf("%d",&data);
            insert(Q,data);
            break;
        case 2:
            deletion(Q);
            break;
        case 3:
        	view(Q);
        	break;
        case 4:
            exit(0);
        default:
            printf("\nInvalid choice,retry");
        }
        getch();
    }
}
