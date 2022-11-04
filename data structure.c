#include <stdio.h>
#include <stdlib.h>
#include "data structure.h"
//create
void create(Queu *q){
    q->front = NULL;
    q->rear  = NULL;
    q->size  = 0;
}
//********************************************
//is full
int isFull(Queu q){
    return 0;
}
//*********************************************
//is empty
int isEmpty(Queu q)
{
    return q.size == 0;
}
//**********************************************
//size
int QueueSize(Queu q){
    return q.size;
}
//**********************************************
//inqueu
void inQueu(Queu *q,type el){
    if(isEmpty(*q))
        {
            Node *pNewNode = (Node *) malloc( sizeof(Node) );
            pNewNode->pNext = NULL;
            q->front = pNewNode;
            q->rear = pNewNode;
            pNewNode->el = el;
            q->size++;
        }
    else
        {
            Node *pNewNode = (Node *) malloc( sizeof(Node) );
            pNewNode->pNext = NULL;
            q->rear->pNext = pNewNode;
            q->rear = pNewNode;
            pNewNode->el = el;
            q->size++;
        }
}
//************************************************
//dequeu
type deQueu(Queu *q){
    if(!isEmpty(*q))
    {
        if(QueueSize(*q) == 1)
        {
            Node *pOldNode = q->front;//it can be
            //Node *pOldNode = q->rear;
            q->front = NULL;
            q->rear = NULL;
            q->size--;
            type item = pOldNode->el;
            free(pOldNode);
            return item;

        }
        else
        {
            type item = q->front->el;
            Node *pOldNode = q->front;
            q->front = pOldNode->pNext;//it can be
            //q->front = q->front->pNext;
            q->size--;
            return item;
        }

    }
    else
    {
        printf("Error:queue underflow\n");
        return -404;
    }
}
//**************************************************
//traverse
void traverse(Queu *q,void(*F)(type *el))
{
    Node *tempNode = q->front;
    while(tempNode)
    {
        (F)(&tempNode->el);
        tempNode = tempNode->pNext;
    }
}
//****************************************************
//clear
void clear(Queu *q)
{
    Node *Q = q->front;
    int size = q->size;
    for(int i=0;i<size;i++)
    {
        Q = Q->pNext;
        free(q->front);
        q->front = Q;
        q->size--;
    }
    q->rear = NULL;
}






