#include <stdio.h>
#include <stdlib.h>
#include "data structure.h"
void print(type *el);
void inc(type *el);
int main()
{
    Queu q;
    create(&q);
    for(int i=1;i<=10;i++)
    {
        inQueu(&q,i);
    }
    printf("size after loop is : %d\n",QueueSize(q));
    printf("dequeu elment = %d\n",deQueu(&q));
    printf("size after dequeu is : %d\n",QueueSize(q));
    traverse(&q,&print);
    traverse(&q,&inc);
    traverse(&q,&print);
    printf("------------------------------\n");
    clear(&q);
    traverse(&q,&print);
    inQueu(&q,4);
    traverse(&q,&print);
    return 0;
}
void print(type *el)
{
    printf("%d\n",(*el));
}
void inc(type *el)
{
    (*el)++;
}
