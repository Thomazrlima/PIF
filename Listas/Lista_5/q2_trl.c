#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node{
  char nome[21];
  struct node *next;
};

void adicionar(struct node **head, char nome, int i;


int main(void) {
  int N, i;
  char nome[21];
  struct node *head = NULL;
  
  scanf("%d", &N);

  for(i=0; i < N; i++){
      adicionar(&head,scanf("%s", nome), N);
  }

  struct node *n = head;
  while(n!= NULL){
  if(strcmp(n->nome, (n+1)->nome) > 0){
    char aux1 = nome[i];
    nome[i] = nome[i+1];
    nome[i+1] = aux1;
    }
  }
}

void add_node(struct node **head, char nome,int i){
  if(i == 0){
    *head = (struct node *) malloc(sizeof(struct node));
    (*head)->nome = nome;
    (*head)->next = NULL;

  }else{
    struct node *n = *head;
    while(n->next != NULL){
    n = n->next;
   }

  n->next = (struct node *) malloc(sizeof(struct node));
  n->next->nome = nome;
  n->next->next = NULL;
  }

}
