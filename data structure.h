#ifndef STACK
#define STACK

#define MAX 500
typedef int type;
typedef struct node{
    type el;
    struct node *pNext;
}Node;
typedef struct queue
{
    Node *front;
    Node *rear;
    int size;
}Queu;
//********************************************
//create
void create(Queu *q);
//********************************************
//is full
int isFull(Queu q);
//********************************************
//size
int QueueSize(Queu q);
//*********************************************
//is empty
int isEmpty(Queu q);
//**********************************************
//inqueu
void inQueu(Queu *q,type el);
//************************************************
//dequeu
type deQueu(Queu *q);
//**************************************************
//traverse
void traverse(Queu *q,void(*F)(type *el));
//**************************************************
void clear(Queu *q);
#endif // STACK







