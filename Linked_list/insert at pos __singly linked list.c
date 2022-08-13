#include <stdio.h>
#include <stdlib.h>
struct  node{
    int data;
    struct node * link ;
};

struct node * create(struct node *head , int val)
{
   struct node * temp = head ;
    temp->data = val;
    temp->link=NULL ;
   head =  temp;
   return head ;

}

struct node *add_to_beg(struct node *head , int val)
{
    struct node * temp = malloc(sizeof(struct node));
    temp->data  = val ;
    temp->link =NULL;

    struct node * temp2 =malloc(sizeof(struct node));
    temp2 = head ;
   while(temp2->link!=NULL)
   {
       temp2=temp2->link;
   }
    temp2->link = temp;



    return head ;

}

void reverse(struct node* head)
{
    struct node* temp2 = NULL;
    struct node * temp1 = NULL;
    while(head!=NULL)
    {
        temp2 = head->link ;
        head->link = temp1 ;
        temp1 = head ;
        head = temp2 ;
    }
    printf("\n");
    while(temp1!=NULL)
    {
        printf("%d " ,temp1->data );
       temp1 = temp1->link ;
    }
}




void add_at_mid(struct node * head , int val , int pos)
{
    struct node * temp1 = malloc(sizeof(struct node));
    struct node * temp2 = head ;
     temp1->data = val ;
pos--;
    while(pos!=1)
    {
        temp2=temp2->link;
        pos--;
    }

    temp1->link=temp2->link;
    temp2->link=temp1;
    while(head!=NULL)
{
    printf("%d " , head->data);
    head = head->link;
}
printf("\n") ;
}

int main()
{
struct node * head = malloc(sizeof(struct node));

head = create(head , 11);
head = add_to_beg(head , 22);
head = add_to_beg(head ,33);
head = add_to_beg(head ,44);
head = add_to_beg(head , 55);


add_at_mid(head,30, 3);

//reverse(head );
//removee(head);
    return 0;
}
