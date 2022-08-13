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

void sorting(struct node * head)
{
    int temp ; 
    struct node * ptr=head ; 
    struct node *cpt ;
  
    while(ptr->link!=NULL)
    {
        cpt = ptr->link;
        while(cpt!=NULL)
        {
            if(ptr->data > cpt->data)
            {
                int temp = cpt->data;
                cpt->data = ptr->data ; 
                ptr->data = temp ;
            }
            
            cpt=cpt->link;
        }
        
        ptr = ptr->link;

    }
    
    while(head!=NULL)
    {
        printf("%d " , head->data );
        head= head->link;
    }
}


void delete(struct node * head , int pos)
{
    struct node * temp1 = malloc(sizeof(struct node));
    struct node * temp2 = head ;

pos--;
    while(pos!=1)
    {
        temp2=temp2->link;
        pos--;
    }

  temp2->link = temp2->link->link ; 
    
    
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

head = create(head , 1100);
head = add_to_beg(head , 22);
head = add_to_beg(head ,33300);
head = add_to_beg(head ,44);
head = add_to_beg(head , 55);

//reverse(head );
//sorting(head);

delete(head  ,2) ;
    return 0;
}
