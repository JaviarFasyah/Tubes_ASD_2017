/**Javiar Fasyah [1301164477]**/
#ifndef RELASI_H_INCLUDED
#define RELASI_H_INCLUDED

#include<iostream>

#include "parent.h"
#include "child.h"
#include "relasi.h"

#define aktor(p) (p)->aktor
#define film(p) (p)->film

typedef struct elmlist_r *address_r;

using namespace std;

struct elmlist_r{
    address_r next;
    address_a aktor;
    address_f film;
};

struct list_r{
    address_r first;
};

void createlist(list_r &l);
address_r alokasi(address_a a, address_f f);
void dealokasi(address_r &p);
void insertfirst(list_r &l, address_r p);
void insertlast(list_r &l, address_r p);
void deletefirst(list_r &l, address_r &p);
void deletelast(list_r &l, address_r &p);
address_r findelm(list_r l, address_a a, address_f f);
void insertafter(list_r &l, address_r q, address_r p);
void deleteafter(list_r &l, address_r q, address_r &p);
void printinfo(list_r l);
#endif // RELASI_H_INCLUDED
