/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

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



int main()
{
struct node * head = malloc(sizeof(struct node));

head = create(head , 11);
head = add_to_beg(head , 22);
head = add_to_beg(head ,33);
head = add_to_beg(head ,44);
head = add_to_beg(head , 55);

reverse(head );

    return 0;
}
