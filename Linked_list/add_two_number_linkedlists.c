#include <stdio.h>
#include <stdlib.h>


//  ADDING TWO NUMBERS USING LINKED LISTS !
// NESO 104 ;

struct node {
     int data ;
     struct node * link;
};




struct node * reverse(struct node * head){
   struct node * prev =NULL;
   struct node * current = head ;
   struct node * ptr = NULL;
   while(current)
   {
      ptr =  current->link;
      current->link=prev ;
      prev =  current ;
      current = ptr;
   }
   return prev ;
};

struct node *add_to_head(struct node * head , int val)
{

    struct node * ptr = malloc(sizeof(struct node));
    ptr->data=val;
    ptr->link = NULL ;

    ptr->link = head ;
    head= ptr;

    return head;

};

struct node * create(struct node *head ,int n)
{
    while(n!=0)
    {

      head =   add_to_head(head , n%10);
        n = n/10;
    }
    return head ;
};

void print(struct node * head)
{
    while(head)
    {
        printf("%d ",head->data);
        head=head->link;
    }
    printf("\n");
}

int carry ;
struct node *add(struct node *head1 , struct node * head2)
{
    if(head1->data==0)
        return head2;
    if (head2->data==0)
        return head1;

    int sum = 0 ;
 struct node * head3 = NULL;
    while(head1 || head2){
            sum = 0 ;
    if (head1)
    {
         sum+=head1->data;
    }
     if (head2)
    {
         sum+=head2->data;
    }
    sum +=carry ;
    carry = sum/10;
    sum = sum%10;

    head3 = add_to_head(head3 , sum );

    if(head1)
    {
        head1 =head1->link;
    }
    if(head2)
    {
        head2 =head2->link;
    }
}
    if(carry)
    {
        head3 = add_to_head(head3 , carry);
    }
    return head3 ;
};


int main()
{
    int a, b ;
    //scanf("%d%d" , &a,&b);
    a =456 ;
    b =978 ;




  struct node * head1 = NULL;
  head1 =  create(head1 , a);
printf("Linked list 1 ...going to add\t:- ");

   printf("\n");
  head1 = reverse(head1);
 print(head1);
    struct node * head2 = NULL ;
     head2 = create(head2 , b);
 printf("Linked list 1 ...going to add\t:- ");

       head2 = reverse(head2);
print(head2);


   struct node * head3 = add(head1,head2);
 printf("Finally  number added using linked list :");
 print(head3);
   printf("\n");


}
