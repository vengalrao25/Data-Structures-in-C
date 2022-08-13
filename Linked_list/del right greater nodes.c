/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
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





struct node *  reverse(struct node* head)
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
    head = temp1;
    return head ; 
}

void print(struct node*head)
{
    while(head)
   {
   printf("%d ",head->data );
   head =  head->link;
   }
   printf("\n");
}

struct node* check_it(struct node * head)
{
    head = reverse(head);
    
    printf("\n");
    struct node * ptr1 =head;
    //struct node * ptr2 = ptr1->link;
    
    int max=ptr1->data;
    while(ptr1->link)
    {
        if(ptr1->link->data >max)
        {
            max =ptr1->link->data;
            ptr1 =ptr1->link ;
        }
        else
        {
            ptr1->link = ptr1->link->link ;  
        }
        
    }
    
    ptr1 = reverse(head);
    print(ptr1);
   
    
}


int main()
{
struct node * head = malloc(sizeof(struct node));

head = create(head , 14);
head = add_to_beg(head ,15);
head = add_to_beg(head ,20);
head = add_to_beg(head ,12);
head = add_to_beg(head , 11);
 

check_it(head);

    return 0;
}
