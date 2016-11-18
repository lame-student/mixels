#include "linked_list.h"

void print(linked_list*root, void (*f)(void*))
{
    if (root->next != NULL)
    {
        f(root->data);
        print(root->next, f);
    }
}

linked_list* init()
{
    linked_list* l=new linked_list;
    l->data=NULL;
    l->next=NULL;
    return l;
}

void add(linked_list* l, int index, void* data)
{
    if((index<=0)||(l->next==NULL))
    {
        linked_list* ll = init();
        ll->data = l->data;
        ll->next = l->next;
        l->next=ll;
        l->data=data;
    }
    else
    {
        add(l->next,index-1,data);
    }
}

void* remove(linked_list* l,int index)
{
    if(l != NULL)
    {
        if((index<=0)||(l->next==NULL))
        {
            void* l1_data;
            l1_data = l->data;
            l->data = l->next->data;
            linked_list* l2;
            l2 = l->next;
            l->next = l->next->next;
            delete l2;
            return l1_data;
        }
        else
        {
            return remove(l->next,index-1);
        }
    }
}

int count(linked_list* l1)
{
    int c=0;
    while(l1->next !=NULL)
    {
        c=c++;
        l1=l1->next;
    }
    return c;
}


