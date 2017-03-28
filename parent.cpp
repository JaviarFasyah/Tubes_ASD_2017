
#include "parent.h"

void createlist(list_a &l){
    first(l) = NULL;
}

address_a alokasi(infotype_a x){
    address_a p = new elmlist_a;
    info(p) = x;
    next(p) = NULL;
    return p;
}

void dealokasi(address_a &p){
    delete p;
}

void insertfirst(list_a &l, address_a p){
    if(first(l) != NULL){
        next(p) = first(l);
        first(l) = p;
    }
    else{
        first(l) = p;
    }
}

void insertlast(list_a &l, address_a p){
    address_a q;
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

void deletefirst(list_a &l, address_a &p){
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

void deletelast(list_a &l, address_a &p){
    address_a q;
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

address_a findelm(list_a l, infotype_a x){
    address_a q;
    q = first(l);
    while(q != NULL && info(q).id != x.id){
        q = next(q);
    }
    return q;
}

void insertafter(list_a &l, address_a q, address_a p){
    if(first(l) != NULL){
        next(p) = next(q);
        next(q) = p;
    }
    else{
        insertfirst(l, p);
    }
}

void deleteafter(list_a &l, address_a q, address_a &p){
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

void printinfo(list_a l){
    address_a q;
    if(first(l) != NULL){
        q = first(l);
        while(q != NULL){
            cout<<"     "<<info(q).id<<" - "<<info(q).nama<<endl;
            q = next(q);
        }
    }
}
