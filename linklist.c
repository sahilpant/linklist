#include<stdio.h>
#include<stdlib.h>
struct listNode
{
    int data;
    struct listNode *next;
}*head=NULL;


void createList(){
    struct listNode *newNode;
    newNode = (struct listNode*)malloc(sizeof(struct listNode));
    if(!newNode)
    {
        printf("Memory Full!!");
        return;
    }
    printf("Enter the data::");
    scanf("%d",newNode->data);
    head = newNode;
    newNode->next = NULL;
}

void insertEnd(int data){
}

void insertRandom(int data, int position){
    int k = 1;
    struct listNode *q,*p,*newNode;
    newNode = (struct linkNode*)malloc(sizeof(struct listNode));
    if(!newNode)
    {
        printf("Memory Full!!");
        return;
    }
    newNode->data = data;
    q = head;
    while(q!=NULL && k<position)
    {
        q = q->next;
    }
    newNode->next = q;
    q->next = newNode;
    free(q);
}

void deleteBeg(){

}

void deleteEnd(){

}

void deleteRandom(int position){

}

void insertBeg(int data)
{
   struct listNode *newNode,*p;
    newNode = (struct listNode*)malloc(sizeof(struct listNode));
    if(!newNode)
    {
        printf("Memory Full!!");
        return;
    }
    newNode->data = data;
    p = newNode;
    newNode->next = head;
    head = p;
    free(p);
}

void displayList(){

}

void displayReverse(){

}


void main()
{
    char ch;int choice,data,position; 
    printf("Do You want to create a Link List?(Y/N)::");
    scanf("%c",&ch);
    (ch=='y'||ch=='Y') ? createList() : exit(0);
    while(1)
    {
        printf("\nchoose from the following options::");
        printf("\n1.Insert at the end::");
        printf("\n2.Insert at the Beginning::");
        printf("\n3.Insert at a random position::");
        printf("\n4.delete at the end::");
        printf("\n5.delete at the beginning::");
        printf("\n6.delete at any random position::");
        printf("\n7.Display the list::");
        printf("\n8.Display the list in reverse order::");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("\nEnter the Data::");
            scanf("%d",&data);
            insertEnd(data);
            break;
            
            case 2:
            printf("\nEnter the Data::");
            scanf("%d",&data);
            insertBeg(data);
            break;

            case 3:
            
            printf("\nEnter the Data and position::");
            scanf("%d%d",&data,&position);
            insertRandom(data,position);
            break;

            case 4:
            
            printf("\nData has been deleted==>");
            deleteEnd();
            break;
            
            case 5:

            printf("\nData has been deleted==>");
            deleteBeg();
            break;

            case 6:

            printf("\nEnter the position::");
            scanf("%d",&position);
            deleteRandom(position);
            printf("\nData has been deleted==>");
            break;

            case 7:
            displayList();
            break;

            case 8:

            displayReverse();
            break;
        }
        printf("\nDo You want to contiue?(y/n)");
        scanf("%c",&ch);
        if(ch=='y'||ch=='Y')
        {
            continue;
        }
        else
        {
            exit(0);
        }
    }
}