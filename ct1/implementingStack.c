#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }

    else
    {
        return 0;
    }
}

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }

    else
    {
        return 0;
    }
}

void push(struct stack *ptr, int val)
{
    if (isFull(ptr))
    {
        printf("Stack overflow!!\n");
    }

    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

int pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack Underflow!!\n");
        return -1;
    }

    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top = ptr->top-1;
        return val;
    }
}
int main()
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));

    printf("The stack has been created sucessfully\n");

    printf("%d\n", isFull(sp));
    printf("%d\n", isEmpty(sp));

    push(sp, 56);
    push(sp, 56);
    push(sp, 56);
    push(sp, 56);
    push(sp, 56);
    push(sp, 56);
    push(sp, 6);
    push(sp, 56);
    

    printf("%d\n", isFull(sp));
    printf("%d\n", isEmpty(sp));

    printf("Popped %d from the stack\n",pop(sp));
    printf("Popped %d from the stack\n",pop(sp));

    return 0;
}