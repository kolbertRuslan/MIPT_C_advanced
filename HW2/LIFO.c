#include <stdio.h>
#include <stdlib.h>

struct list
{
    int data;
    struct list* prev;
};


// Функция добавления элемента (Push)
void push(struct list **ptr, int val)
{
    struct list *tmp_ptr = malloc(sizeof(struct list));    
    tmp_ptr->data = val;
    tmp_ptr->prev = *ptr;

    *ptr = tmp_ptr;

    printf("%d\n", tmp_ptr->data);
}

// Функция извлечения элемента (Pop)
int pop(struct list **ptr)
{
    struct list *tmp_ptr;
    tmp_ptr = *ptr;
    printf("%d\n", tmp_ptr->data);
    *ptr = tmp_ptr->prev;
    free(tmp_ptr);
}

int main()
{
    struct list *head_ptr = NULL;

    for (int i=1; i<5; i++)
    {
        push(&head_ptr, i);
    }

    for (int i=1; i<5; i++)
    {
        pop(&head_ptr);
    }

    return 0;
}
