// B0 Требуется реализовать только одну функцию, которая в данном списке находит адрес блока памяти занимающий больше всего места.
// Адрес хранится в поле address, поле size - соответствующий размер данного блока. Если список пустой, то функция должна возвращать 0.
// Если есть несколько таких блоков, то вернуть адрес любого из них.

#include <stdio.h>
#include <stdlib.h>

typedef struct list {
uint64_t address;
size_t size;
char comment[64];
struct list *next;
} list;

uint64_t findMaxBlock(list *head)
{
    size_t max_size = 0;
    uint64_t ret_addr = 0;

    while (head != NULL)
    {
        list *tmp_ptr = head;

        if (tmp_ptr->size > max_size)
        {
            max_size = tmp_ptr->size;
            ret_addr = tmp_ptr->address;
        }

        head = tmp_ptr->next;
    }

    return ret_addr;
}