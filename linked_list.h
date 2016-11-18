#pragma once

#include <iostream>
#include <fstream>

using namespace std;

struct linked_list
{
	void* data;
	linked_list* next;
};

linked_list* init();
void print(linked_list*root, void (*f)(void*));
void add(linked_list* l, int index, void* data);
void* remove(linked_list* l,int index);

//count
//add
//delete_one
