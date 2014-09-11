#include <stdio.h>
#include <stdlib.h>

struct node {
  int x;
  struct node *next;
};


int main(int argv,char ** args){
  struct node* root;
  struct node* conductor;
  
  root = malloc(sizeof(struct node));
  root->x = 2;
  conductor = root;
  if(conductor != 0){
    while(conductor->next != NULL){
     conductor = conductor->next;
    }
  }
  conductor->next = malloc(sizeof(struct node));
  conductor = conductor->next;
  conductor->next = 0;
  conductor->x = 10;

  conductor = root;
  if(conductor!= 0){
    while(conductor->next != 0){
      printf("%d\n",conductor->x);
      conductor = conductor->next;
    }
    printf("%d\n",conductor->x);
  }
}
