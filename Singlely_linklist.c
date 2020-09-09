#include<stdio.h>
#include<stdlib.h>
 
struct node
{
int data;
struct node*next;

};
 struct node *head,*newnode,*temp,*tail = NULL;


 //***********create linklist*******************


int addNode( int data)
{

newnode = (struct node*)malloc(sizeof(struct node));
newnode->data = data;
newnode->next =NULL;

if (head==NULL)
{
    head =tail = newnode;
}
else
{
tail->next=newnode;
tail = newnode;

}
}


 //***********insert value at end linklist*******************

void insertend(int data)
{
newnode = (struct node*)malloc(sizeof(struct node));
newnode->data = data;
newnode->next =NULL;

temp=head;
while(temp->next!=0)
{
  temp=temp->next;
}
temp->next=newnode;
}


//***********insert value at given position linklist*******************

void position(int pos,int data)
{
newnode = (struct node*)malloc(sizeof(struct node));
newnode->data = data;
newnode->next =NULL;
temp=head;
int i=1;
while(i<pos-1){
  temp=temp->next;
  i++;
}
newnode->next =temp->next;
temp->next =newnode;
}


//***********Display or traverse linklist*******************


void display(){
printf("Nodes of singly linked list: \n");  
temp = head;
while(temp!=0)
{
    printf("%d",temp->data);
    temp=temp->next;
  
  printf("\n");
}
}

//***********Delete at beg linklist*******************


void deletebeg()
{

  temp=head;
  head=head->next;
  free(temp);
}

//***********Delete at beg linklist*******************


void deleteend()
{
struct node*prevnode;  
temp=head;
while(temp->next!=0)
{
  prevnode=temp;
  temp=temp->next;

}
if(temp==0)
{
  head=0;
}
else
{
  prevnode->next=NULL;
}
free(temp);


}
//***********Delete at specfic postion linklist*******************
void deletepos(int pos)
{
struct node *p;
  int i=1;
  temp =head;
  while (i<pos-1)
  {
    temp=temp->next;
    i++;
  }
  p=temp->next;
  temp->next=p->next;
  free(p);

  

}




int main()  
{  
    // //Add nodes to the list  
    // int a,choice =1;
    // while(choice){
    // printf("Enter no in linklist\n");
    // scanf("%d",&a);
    // addNode(a); 
    // printf("DO you want to continoue press 1 and quit 0: \t");
    // scanf("%d",&choice); 
    // }
      addNode(1); 
      addNode(2); 
      
      addNode(3); 
      addNode(4); 
    //Displays the nodes present in the list  
    printf("Enter before linklist\n");
    display();  
     //position(4,9);
    //  deletebeg();
    //  deleteend();
    deletepos(3);
      printf("Enter after linklist\n");
     display(); 

    return 0;  
} 






