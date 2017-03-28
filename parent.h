/**Javiar Fasyah [1301164477]**/

#ifndef PARENT_H_INCLUDED
#define PARENT_H_INCLUDED
#include<iostream>
#define info(p) (p)->info
#define next(p) (p)->next
#define first(l) l.first

using namespace std;

struct infotype_a{
    string id, nama, ttl, asal, gender, status;
};
typedef struct elmlist_a *address_a;

struct elmlist_a{
    infotype_a info;
    address_a next;
    };

struct list_a{
    address_a first;
    };

void createlist(list_a &l);
address_a alokasi(infotype_a x);
void dealokasi(address_a &p);
void insertfirst(list_a &l, address_a p);
void insertlast(list_a &l, address_a p);
void deletefirst(list_a &l, address_a &p);
void deletelast(list_a &l, address_a &p);
address_a findelm(list_a l, infotype_a x);
void insertafter(list_a &l, address_a q, address_a p);
void deleteafter(list_a &l, address_a q, address_a &p);
void printinfo(list_a l);
#endif // PARENT_H_INCLUDED
