#include<stdio.h>
#include<stdlib.h>
struct listNode
{
    int data;
    struct listNode *next;
}**head=NULL;


void createList(){
    struct listNode *newNode;
    newNode = (struct listNode*)malloc(sizeof(struct listNode));
    printf("Enter the data");
    scanf("%d",newNode->data);
    newNode->next = NULL;

}

void insertEnd(int data){

}

void insertRandom(int data, int position){

}

void deleteBeg(){

}

void deleteEnd(){

}

void deleteRandom(int position){

}

void insertBeg(int data)
{
    struct listNode *p,*newNode;
    newNode = (struct listNode*)malloc(sizeof(struct listNode));
    p = *head;
     
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