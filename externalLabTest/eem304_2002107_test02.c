#include <stdio.h>
#include <stdlib.h>

 typedef struct node_tag {
    int val;
    struct node_tag * prev, *next;
 } node;

 void display (node * head);
 node * addElements(node *head,int n);

 int main () {
 node *head=NULL; /* Use only this as the head ptr of your list.
					You may not make a global declaration.
					Make other function declarations accordingly. */
/* Your remaining declarations, code go here */

int n;

// printf("Enter no. of Elements : ");
scanf("%d",&n);

head=addElements(head,n);

display(head); /*do not change this line */

 return 0;
}

/* your functions go here */

node * addElements(node *head,int n)
{
    node *ptr,*tmp;
    int i;

    for(i=1;i<=n;i++)
    {
        ptr=(node *)malloc(sizeof(node));
        ptr->next=NULL;
        ptr->prev=NULL;
        scanf("%d",&ptr->val);
        if(head==NULL)
        {
            head=ptr;
        }
        else
        {
            tmp=head;
            while(tmp->next!=NULL)
            {
                tmp=tmp->next;
            }
            tmp->next=ptr;
            ptr->prev=tmp;
        }
    }

    return head;
}


/* An incomplete implementation is provided below for the display function.
Complete it in any way you like, but make sure you use the printf() call as-it-is.
Use it inside a loop as needed, you may fill in the args as required etc. */

void display (node * head) {
		/* your code goes here */
		node *ptr=head;
		int i,f=0;
		while(ptr!=NULL)
        {
            f=0;
            for(i=2;i<=ptr->val/2;i++)
            {
                if(ptr->val%i==0)
                {
                    f=1;
                    break;
                }
            }
            if(f==0)
                printf("->%d",ptr->val);
            ptr=ptr->next;
        }

}
