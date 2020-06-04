#include<stdio.h>
struct listNode
{
    int data;
    struct listNode *next;
}**head=NULL;


void insert(int data,int position)
{
    int k=1;
    struct listNode *p,*newNode,*q;
    newNode = (struct listNode*)malloc(sizeof(struct listNode));
    if(!newNode)
    {
        printf("No memmory left");
        return;
    }
    newNode->data = data;
    if(position==1)
    {
        head = newNode;
        p = *head;
    }
    else
    {
        while()
    }   
}