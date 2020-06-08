#include<stdio.h>
#include<stdlib.h>
struct listNode
{
    int data;
    struct listNode *next;
}*head=NULL;

typedef struct listNode node;

void createList(){
    node *newNode;
    newNode = (node*)malloc(sizeof(node));
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
    node *p,*newNode;
    newNode = (node*)malloc(sizeof(node));
    newNode->data = data;
    p = head;
    while(p!=NULL)
    {
       p = p->next;
    }
    p->next = newNode;
    newNode->next = NULL;
}

void insertRandom(int data, int position){
    int k = 1;
    node *q,*p,*newNode;
    newNode = (node*)malloc(sizeof(node));
    if(!newNode)
    {
        printf("Memory Full!!");
        return;
    }
    newNode->data = data;
    q = head;
    while(q!=NULL && k<position)
    {
        k++;
        q = q->next;
    }
    newNode->next = q;
    q->next = newNode;
}

void deleteBeg(){
    node *temp;
    temp = head;
    head = head->next;
    free(temp);
}

void deleteEnd(){
    node *temp,*p,*q;
    p = head;
    while(p!=NULL)
    {
        q = p;
        p = p->next;
    }
    temp = q->next;
    q->next = NULL;
    free(temp);
    
}

void deleteRandom(int position){
    int k;
    node *temp,*q,*p;
    p = head;
    while(p!=NULL && k<position)
    {
        k++;
        q = p;
        p = p->next;
    }
    temp = q->next;
    q->next = NULL;
    free(temp);
}

void insertBeg(int data)
{
   node *newNode,*p;
    newNode = (node*)malloc(sizeof(node));
    if(!newNode)
    {
        printf("Memory Full!!");
        return;
    }
    newNode->data = data;
    p = newNode;
    newNode->next = head;
    head = p;
}

void displayList(node *p){
    k = 1;
    while(p->next!=NULL){
        printf("Element %d: %d",k,p->data);
        p = p->next;
        k++;
    }
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
            displayList(head);
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