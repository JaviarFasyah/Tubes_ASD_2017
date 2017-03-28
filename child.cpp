/**REYNALDISYAPUTRA_1301164141**/

#include "child.h"

void createlist(list_f &l){
    first(l) = NULL;
    last(l) = NULL;
}

address_f alokasi(infotype_f x){
    address_f p = new elmlist_f;
    info(p) = x;
    next(p) = NULL;
    prev(p) = NULL;
    return p;
}

void dealokasi(address_f &p){
    delete p;
}

address_f findelm(list_f l, infotype_f x){
    address_f q = first(l);
    while(q != NULL && info(q).id != x.id){
        q = next(q);
    }
    return q;
}

void insertfirst(list_f &l, address_f p){
    if(first(l) != NULL){
        next(p) = first(l);
        prev(first(l)) = p;
        first(l) = p;
    }
    else{
        first(l) = p;
        last(l) = p;
    }
}

void insertlast(list_f &l, address_f p){
    if(first(l) != NULL){
        prev(p) = last(l);
        next(last(l)) = p;
        last(l) = p;
    }
    else{
        insertfirst(l, p);
    }
}

void insertafter(list_f &l, address_f q, address_f p){
    if(q != NULL){
        if(next(q) != NULL){
            next(p) = next(q);
            prev(p) = q;
            prev(next(p)) = p;
            next(q) = p;
        }
        else{
            insertlast(l, p);
        }
    }
}

void deletefirst(list_f &l, address_f &p){
    if(first(l) != NULL){
        if(next(first(l)) != NULL){
            p = first(l);
            first(l) = next(p);
            prev(first(l)) = NULL;
            next(p) = NULL;
        }
        else{
            p = first(l);
            first(l) = NULL;
            last(l) = NULL;
        }
    }
}

void deletelast(list_f &l, address_f &p){
    if(first(l) != NULL){
        if(next(first(l)) != NULL){
            p = last(l);
            last(l) = prev(p);
            next(last(l)) = NULL;
            prev(p) = NULL;
        }
        else{
            deletefirst(l, p);
        }
    }
}

void deleteafter(list_f &l, address_f q, address_f &p){
    if(first(l) != NULL){
        if(q != NULL && q != last(l)){
            if(next(q) != last(l)){
                p = next(q);
                next(q) = next(p);
                prev(next(p)) = q;
                next(p) = NULL;
                prev(p) = NULL;
            }
            else{
                deletelast(l, p);
            }
        }
    }
}

void printinfo(list_f l){
    address_f q = first(l);
    if(first(l) != NULL){
        while(q != NULL){
            cout<<"     "<<info(q).id<<" - "<<info(q).nama<<endl;
            q = next(q);
        }
    }
}
