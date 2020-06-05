#include<stdio.h>
#include<stdlib.h>
struct listNode
{
    int data;
    struct listNode *next;
}**head=NULL;


void createList(){

}

void insertEnd(int data){

}

void insertRandom(){

}

void deleteBeg(){

}

void deleteEnd(){

}

void deleteRandom(){

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
    char ch;int choice,data;
    printf("Do You want to create a Link List?(Y/N)::");
    scanf("%c",&ch);
    (ch=='y'||ch=='Y') ? createList() : exit(0);
    while(1)
    {
        printf("choose from the following options::");
        printf("1.Insert at the end::");
        printf("2.Insert at the Beginning::");
        printf("3.Insert at a random position::");
        printf("4.delete at the end::");
        printf("5.delete at the beginning::");
        printf("5.delete at any random position::");
        printf("6.Display the list::");
        printf("7.Display the list in reverse order::");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("Enter the Data::");
            scanf("%d",&data);
            insertEnd(data);
            
            case 2:
            printf("Enter the Data::");
            scanf("%d",&data);
            insertBeg(data);

            case 3:

            case 4:

            case 5:

            case 6:

            case 7:
        }
    }
}