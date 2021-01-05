#include<stdio.h>
#include<stdlib.h>

typedef struct node{
  int data;
  struct node *next;
}node1;

void atbegining( node1**, int);
void atend(node1**, int);
void display(node1*);
void reverse(node1**);

void main(){
  
  int data =9,i;
  node1 *start=NULL;
  
  atbegining(&start,data);
  
  for(i=1;i<=5;i++){
    data =i;
    atend(&start,data);
  }
  display(start);
  reverse(&start);
  display(start);
}

void atbegining(node1 **start, int data){
  node1 *tmp;
  
  tmp = (struct node *)malloc(sizeof(node1));
  tmp->data=data;
  tmp->next = NULL;
  
  *start = tmp;
}
void atend(node1 **start, int data){
  node1 *p,*tmp;
  tmp =(struct node *)malloc(sizeof(node1));
  tmp->data = data;
  
  p =*start;
  
  while(p->next!=NULL){
    p=p->next;
  }
  p->next= tmp;
  tmp->next=NULL;
}

void display(node1 *start){
  
  while(start!=NULL){
    printf("%d", start->data);
    start = start->next;
    
  }
  printf("\n");
}

void reverse(node1 **start){
  node1 *ptr,*prev,*next;
  
  ptr=*start;
  while(ptr!=NULL){
    next = ptr->next;
    ptr->next = prev;
    prev = ptr;
    ptr = next;
  }
  *start = q;
}


  