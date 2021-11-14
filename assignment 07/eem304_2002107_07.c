#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#define SIZE 20

typedef struct node_tag {
    char city[SIZE];
    struct node_tag *next;
} node;

 
int main () {

 node* head=NULL;
 int i,n;
 char item[SIZE];

 void push(node **, char []);
 int pop (node **);

 scanf("%d",&n);
 for (i=0; i<n; i++) {
    scanf("%s", item);
    push(&head, item);
 }

for (i=0; i<n; i++)
    printf("%d",pop(&head));

 return 0;
}

void push(node **head, char item[]) { 
   node* ptr  = (node*)malloc(sizeof(node));
   if(*head == NULL){
      strcpy(ptr ->city, item);
      ptr ->next = NULL;
      *head = ptr ;
   }
   else{
      strcpy(ptr ->city, item);
      ptr ->next = *head;
      *head = ptr ;
   }
}

int pop(node ** head) {
   if (*head == NULL) {
        return -1;
    }
    node* hd = *head;
    char *c = hd->city;        
    int data= strlen(c);
    (*head) = (*head)->next; 
    hd->next = NULL; 
    return data;  
   
}
