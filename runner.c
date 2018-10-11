#include <stdio.h>
#include <stdlib.h>
#include "mylist.h"

int main(){
  struct node * foo;
  struct node * boo;
  struct node * hoo;
  foo = malloc(sizeof(struct node*));
  boo = malloc(sizeof(struct node*));
  hoo = malloc(sizeof(struct node*));
  printf("Inserting numbers in order of 20, 10, 5 and expecting the reverse to be printed in order for nodes\n");
  foo -> i = 20;
  boo = insert_front(foo,10);
  hoo = insert_front(boo,5);
  print_list(hoo);
  printf("Now freeing list and printing result\n");
  free_list(hoo);
  print_list(hoo);

  return 0;
}
