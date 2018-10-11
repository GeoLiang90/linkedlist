#include "mylist.h"
#include <stdio.h>
#include <stdlib.h>

void print_list(struct node * curr){
  if (curr == NULL){
    return;
  }
  if (curr -> next != NULL){
    printf("Node cargo is: %d\n",curr-> i);
    print_list(curr -> next);
  }
  else{
    printf("Last node cargo is: %d\n", curr-> i);
  }
  return;
}

struct node * insert_front(struct node * curr, int v){
 struct node * new_node = malloc(sizeof(struct node*));
 new_node -> next = curr;
 new_node -> i = v;
 return new_node;
}

struct node * free_list(struct node * curr){
  struct node * next_n = curr -> next;
  free(curr);
  if (next_n != NULL){
    free_list(next_n);
  }
  return curr;
}
