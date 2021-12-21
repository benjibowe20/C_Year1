#include <stdlib.h>
#include "item.h"

Typedef struct STACKnode * link
Struct STACKnode { Item item; link next; };
Static link head;

link NEW(Item item, link next)
{
    link x = malloc(sizeof *x);
    x->item = item;
    x->next = next;
    return x;
}

void STACKinit(int maxN)
{
    head = NULL;
}

int STACKempty(void)
{
    return head == NULL;
}

void STACKpush(Item item)
{
    head = new(item, head);
}

Item STACKpop()
{
    Item item = head->item;
    link t = head->next;
    free(head);   head = t;
    return item;
}
