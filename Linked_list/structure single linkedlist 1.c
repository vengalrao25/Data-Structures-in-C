#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
struct node  {               int x  ;
                struct node *link;
                };



count_noof_nodes(struct node *head)
{
    int count = 0;
    struct node *ptr = NULL;
  ptr  = head ;
    while(ptr!=NULL)
    {
        count++;
        ptr=ptr->link;
    }
    printf("%d" , count);
}

void del_atend(struct node * head )
{
    struct node * ptr1 = head ;
        struct node * ptr2 = head ;


    while(ptr2->link!=NULL)
    {
        ptr1 = ptr2;
        ptr2 = ptr2->link;
    }
     ptr2->link = NULL;
     free(ptr1);
     ptr1=NULL;
}


int main()
{
 struct node * head = NULL ;
 head = malloc( sizeof(struct node ));
 head->x = 100;
 head->link = NULL ;

struct node * current = NULL ;
current = malloc( sizeof(struct node ));
 current->x = 200;
 current->link = NULL ;
 head->link = current;



struct node * current2 = NULL ;
current2 = malloc( sizeof(struct node ));
 current2->x = 300;
 current2->link = NULL ;
 current->link = current2;
printf("%d" , head->link->link->x);



struct node * current3 = NULL ;
current3 = malloc( sizeof(struct node ));
 current3->x = 300;
 current3->link = NULL ;
 current2->link = current3;
printf("%d" , head->link->link->x);
printf("\n\n");

count_noof_nodes( head);


//del_atend(head );
struct node * l = head ;
while(l!=NULL)
{
    printf("%d" , l->x);
    l = l->link;
}
       }

