// B1 Требуется реализовать только одну функцию, которая анализирует данный список и возвращает сколько всего памяти используется.
// Адрес хранится в поле address, поле size - соответствующий размер данного блока.
// Если список пустой, то функция должна возвращать 0.

#include <stdio.h>
#include <stdlib.h>

typedef struct list {
void *address;
size_t size;
char comment[64];
struct list *next;
} list;

size_t totalMemoryUsage(list *head)
{
    size_t mem_sum = 0;

    while (head != NULL)
    {
        list *tmp_ptr = head;

        mem_sum += tmp_ptr->size;

        head = tmp_ptr->next;
    }

    return mem_sum;
}