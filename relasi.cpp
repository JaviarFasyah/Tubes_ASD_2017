/**Javiar Fasyah [1301164477]**/

#include "relasi.h"

void createlist(list_r &l){
    first(l) = NULL;
}

address_r alokasi(address_a a, address_f f){
    address_r p = new elmlist_r;
    aktor(p) = a;
    film(p) = f;
    next(p) = NULL;
    return p;
}

void dealokasi(address_r &p){
    delete p;
}

void insertfirst(list_r &l, address_r p){
    if(first(l) != NULL){
        next(p) = first(l);
        first(l) = p;
    }
    else{
        first(l) = p;
    }
}

void insertlast(list_r &l, address_r p){
    address_r q;
    if(first(l) != NULL){
        q = first(l);
        while(next(q) != NULL){
            q = next(q);
        }
        next(q) = p;
    }
    else{
        insertfirst(l, p);
    }
}

void deletefirst(list_r &l, address_r &p){
    if(first(l) != NULL){
        if(next(first(l)) != NULL){
        p = first(l);
        first(l) = next(p);
        next(p) = NULL;
        dealokasi(p);
        }
        else{
            p = first(l);
            first(l) = NULL;
            dealokasi(p);
        }
    }
}

void deletelast(list_r &l, address_r &p){
    address_r q;
    if(first(l) != NULL){
        if(next(first(l)) != NULL){
            q = first(l);
            while(next(next(q)) != NULL){
                q = next(q);
            }
            p = next(q);
            next(q) = NULL;
            dealokasi(p);
        }
        else{
            deletefirst(l, p);
        }
    }
}

address_r findelm(list_r l, address_a a, address_f f){
    address_r q;
    q = first(l);
    while(q != NULL && aktor(q) != a || film(q) != f){
        q = next(q);
    }
    return q;
}

void insertafter(list_r &l, address_r q, address_r p){
    if(first(l) != NULL){
        next(p) = next(q);
        next(q) = p;
    }
    else{
        insertfirst(l, p);
    }
}

void deleteafter(list_r &l, address_r q, address_r &p){
    if(first(l) != NULL){
        if(next(first(l)) != NULL){
            p = next(q);
            next(q) = next(p);
            next(p) = NULL;
            dealokasi(p);
        }
        else{
            deletefirst(l, p);
        }
    }
}

void printinfo(list_r l){
    address_r q;
    if(first(l) != NULL){
        q = first(l);
        while(q != NULL){
            cout<<"     "<<info(aktor(q)).nama<<" - "<<info(film(q)).nama<<endl;
            q = next(q);
        }
    }
}

