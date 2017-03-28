#ifndef CHILD_H_INCLUDED
#define CHILD_H_INCLUDED
#include<iostream>
#include "parent.h"

#define last(l) l.last
#define prev(p) p->prev

using namespace std;

struct infotype_f{
    string id, nama, rilis, genre, about;
    int rating;
};

typedef struct elmlist_f *address_f;

struct elmlist_f{
    infotype_f info;
    address_f next, prev;
};

struct list_f{
    address_f first, last;
};

void createlist(list_f &l);
address_f alokasi(infotype_f x);
void dealokasi(address_f &p);
void insertfirst(list_f &l, address_f p);
void insertlast(list_f &l, address_f p);
void deletefirst(list_f &l, address_f &p);
void deletelast(list_f &l, address_f &p);
address_f findelm(list_f l, infotype_f x);
void insertafter(list_f &l, address_f q, address_f p);
void deleteafter(list_f &l, address_f q, address_f &p);
void printinfo(list_f l);
#endif // CHILD_H_INCLUDED
