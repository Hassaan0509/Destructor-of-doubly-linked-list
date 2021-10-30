#include "header.h"

list::~list()
{
    node* temp1 = head;
    node* temp2 = temp1;
    while (temp1!=NULL)
    {
        temp1 = temp1->next;
        delete temp2;
        temp2 = temp1;
    }
    delete temp1;
}

