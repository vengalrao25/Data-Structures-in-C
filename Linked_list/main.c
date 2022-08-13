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
print(struct node *head )
{
    struct node *ptr = NULL;
    ptr = head;
    while(ptr!=NULL)
    {
        printf("%d \t" , ptr->x);
        ptr = ptr->link;
    }
}



struct node * add_at_beg(head , data1)
{
    struct node *ptr1 = NULL;
    ptr1 = malloc(sizeof(struct node));
    ptr1->x = data1;
    ptr1->link= NULL;
    ptr1->link = head;
    head = ptr1;
    return head;
};

struct node * add_at_pos(struct node *head ,int  data2 ,int pos)
{
    struct node * ptr= head;
struct node *ptr2 = malloc(sizeof(struct node));
ptr2->x = data2;
ptr2->link=NULL;

pos--;
while(pos!=1)
{
    ptr = ptr->link;
    pos--;
}
       ptr2->link=ptr->link;
       ptr->link = ptr2;
       head= ptr;
    return head;
};





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
printf("%d\n" , head->link->link->x);



struct node * current3 = NULL ;
current3 = malloc( sizeof(struct node ));
 current3->x = 400;
 current3->link = NULL ;
 current2->link = current3;
printf("\n%d" , head->link->link->link->x);
printf("\n\n");

count_noof_nodes( head);

printf("\n\n");

print(head);

printf("\n \n");


int data1 = 101;
head = add_at_beg(head , data1);


print(head);

printf("\n \n");


int data2 = 1234500;
int pos= 3;
printf("%d \n" , pos);
add_at_pos(head , data2 , pos);
add_at_pos(head , data2 , pos);
print(head);
printf("\n\n\n");

struct node * ptr33 = head;
while(ptr33!=NULL)
{
    printf("%d\t\t" , ptr33->x);
   ptr33= ptr33->link;
}



       }

