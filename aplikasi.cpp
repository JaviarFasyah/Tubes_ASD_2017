/**Javiar Fasyah [1301164477]**/

#include "parent.h"
#include "child.h"
#include "relasi.h"
#include <windows.h>
#include <conio.h>

void addactor(list_a &A){
    infotype_a x;
    address_a p, q;
    cout<<endl;
    cout<<"               Add Actor"<<endl;
    cout<<endl;
    cout<<"     ID          : ";
    cin>>x.id;
    cout<<"     Name        : ";
    cin>>x.nama;
    cout<<"     Born        : ";
    cin>>x.ttl;
    cout<<"     Nationality : ";
    cin>>x.asal;
    cout<<"     Gender      : ";
    cin>>x.gender;
    cout<<"     Status      : ";
    cin>>x.status;
    p = alokasi(x);
    if(first(A) == NULL || info(first(A)).id > x.id && info(first(A)).id != x.id){
        insertfirst(A, p);
        cout<<endl;
        cout<<"     Added :)"<<endl;
    }
    else{
        q = first(A);
        while(next(q) != NULL && info(next(q)).id < x.id){
            q = next(q);
        }
        if(next(q) != NULL && info(q).id != x.id){
            insertafter(A, q, p);
            cout<<endl;
            cout<<"     Added :)"<<endl;
        }
        else if(info(q).id != x.id){
            insertlast(A, p);
            cout<<endl;
            cout<<"     Added :)"<<endl;
        }
        if(info(first(A)).id == x.id || info(q).id == x.id){
            cout<<endl;
            cout<<"     Try different ID :("<<endl;
        }
    }
    getch();
    system("cls");
}

void addmovie(list_f &F){
    infotype_f x;
    address_f p, q;
    cout<<endl;
    cout<<"               Add Movie"<<endl;
    cout<<endl;
    cout<<"     ID       : ";
    cin>>x.id;
    cout<<"     Name     : ";
    cin>>x.nama;
    cout<<"     Released : ";
    cin>>x.rilis;
    cout<<"     Rating   : ";
    cin>>x.rating;
    cout<<"     Genre    : ";
    cin>>x.genre;
    cout<<"     About    : ";
    cin>>x.about;
    p = alokasi(x);
    if(first(F) == NULL || info(first(F)).id > x.id && info(first(F)).id != x.id){
        insertfirst(F, p);
        cout<<endl;
        cout<<"     Added :)"<<endl;
    }
    else{
        q = first(F);
        while(next(q) != NULL && info(next(q)).id < x.id){
            q = next(q);
        }
        if(next(q) != NULL && info(q).id != x.id){
            insertafter(F, q, p);
            cout<<endl;
            cout<<"     Added :)"<<endl;
        }
        else if(info(q).id != x.id){
            insertlast(F, p);
            cout<<endl;
            cout<<"     Added :)"<<endl;
        }
        if(info(first(F)).id == x.id || info(q).id == x.id){
            cout<<endl;
            cout<<"     Try different ID :("<<endl;
        }
    }
    getch();
    system("cls");
}

void addcast(list_r &R, list_a A, list_f F){
    infotype_a x;
    infotype_f y;
    address_a p;
    address_f q;
    address_r r;
    cout<<endl;
    cout<<"               Add Cast"<<endl;
    cout<<endl;
    cout<<"     Actor ID : ";
    cin>>x.id;
    cout<<"     Movie ID : ";
    cin>>y.id;
    p = findelm(A, x);
    q = findelm(F, y);
    if(p != NULL && q != NULL){
        r = alokasi(p, q);
        if(first(R) != NULL){
            insertlast(R, r);
            cout<<endl;
            cout<<"     Added :)"<<endl;
        }
        else{
            insertfirst(R, r);
            cout<<endl;
            cout<<"     Added :)"<<endl;
        }
    }
    else{
        cout<<endl;
        cout<<"     Try different ID :("<<endl;
    }
    getch();
    system("cls");
}

void viewallactor(list_a A){
    cout<<endl;
    cout<<"               View All Actors"<<endl;
    cout<<endl;
    if(first(A) != NULL){
        cout<<endl;
        cout<<"     Here you go :)"<<endl;
        cout<<endl;
        printinfo(A);
    }
    else{
        cout<<"     This list is empty :("<<endl;
    }
    getch();
    system("cls");
}

void viewallmovie(list_f F){
    cout<<endl;
    cout<<"               View All Movies"<<endl;
    cout<<endl;
    if(first(F) != NULL){
        cout<<endl;
        cout<<"     Here you go :)"<<endl;
        cout<<endl;
        printinfo(F);
    }
    else{
        cout<<"     This list is empty :("<<endl;
    }
    getch();
    system("cls");
}

void viewallcast(list_r R){
    cout<<endl;
    cout<<"               View All Casts"<<endl;
    cout<<endl;
    if(first(R) != NULL){
        cout<<endl;
        cout<<"     Here you go :)"<<endl;
        cout<<endl;
        printinfo(R);
    }
    else{
        cout<<"     This list is empty :("<<endl;
    }
    getch();
    system("cls");
}

void searchactor(list_a A){
    infotype_a x;
    address_a p;
    cout<<endl;
    cout<<"               Search Actor"<<endl;
    cout<<endl;
    cout<<"     Actor ID : ";
    cin>>x.id;
    p = findelm(A, x);
    if(p != NULL){
        cout<<endl;
        cout<<"     Here you go :)"<<endl;
        cout<<endl;
        cout<<"     Name        : "<<info(p).nama<<endl;
        cout<<"     Born        : "<<info(p).ttl<<endl;
        cout<<"     Nationality : "<<info(p).asal<<endl;
        cout<<"     Gender      : "<<info(p).gender<<endl;
        cout<<"     Status      : "<<info(p).asal<<endl;
    }
    else{
        cout<<endl;
        cout<<"     Can't find the actor you're lookin' :("<<endl;
    }
    getch();
    system("cls");
}

void searchmovie(list_f F){
    infotype_f y;
    address_f q;
    cout<<endl;
    cout<<"               Search Movie"<<endl;
    cout<<endl;
    cout<<"     Movie ID : ";
    cin>>y.id;
    q = findelm(F, y);
    if(q != NULL){
        cout<<endl;
        cout<<"     Here you go :)"<<endl;
        cout<<endl;
        cout<<"     Name     : "<<info(q).nama<<endl;
        cout<<"     Released : "<<info(q).rilis<<endl;
        cout<<"     Rating   : "<<info(q).rating<<endl;
        cout<<"     Genre    : "<<info(q).genre<<endl;
        cout<<"     About    : "<<info(q).about<<endl;
    }
    else{
        cout<<endl;
        cout<<"     Can't find the movie you're lookin' :("<<endl;
    }
    getch();
    system("cls");
}

void searchcast(list_r R, list_a A, list_f F){
    infotype_a x;
    infotype_f y;
    address_a p;
    address_f q;
    address_r r;
    cout<<endl;
    cout<<"               Search Cast"<<endl;
    cout<<endl;
    cout<<"     Actor ID : ";
    cin>>x.id;
    cout<<"     Movie ID : ";
    cin>>y.id;
    p = findelm(A, x);
    q = findelm(F, y);
    if(p != NULL && q != NULL){
        r = findelm(R, p, q);
        if(r != NULL){
            cout<<endl;
            cout<<"     Here you go :)"<<endl;
            cout<<endl;
            cout<<"     "<<info(aktor(r)).nama<<" played in "<<info(film(r)).nama<<endl;
        }
        else{
            cout<<endl;
            cout<<"     Can't find the cast you're lookin' :("<<endl;
        }
    }
    else{
        cout<<endl;
        cout<<"     Can't find the cast you're lookin' :("<<endl;
    }
    getch();
    system("cls");
}

void deletecast(list_r &R, list_a A, list_f F){
    infotype_a x;
    infotype_f y;
    address_a p;
    address_f q;
    address_r r, r1, rd;
    cout<<endl;
    cout<<"               Delete Cast"<<endl;
    cout<<endl;
    cout<<"     Actor ID : ";
    cin>>x.id;
    cout<<"     Movie ID : ";
    cin>>y.id;
    p = findelm(A, x);
    q = findelm(F, y);
    if(p != NULL && q != NULL && first(R) != NULL){
        r = findelm(R, p, q);
        if(r == first(R)){
            deletefirst(R, r);
        }
        else if(r != first(R) && next(r) != NULL){
            r1 = r;
            r = first(R);
            while(next(r) != r1){
                r = next(r);
            }
            deleteafter(R, r, rd);
        }
        else{
            deletelast(R, r);
        }
        cout<<endl;
        cout<<"     Deleted :)"<<endl;
    }
    else{
        cout<<endl;
        cout<<"     Can't delete that cast :("<<endl;
    }
    getch();
    system("cls");
}

void deleteactor(list_a &A, list_r &R){
    infotype_a x;
    address_a p, p1, p2, pd;
    address_r r, r1, r2, rd;
    cout<<endl;
    cout<<"               Delete Actor"<<endl;
    cout<<endl;
    cout<<"     Actor ID : ";
    cin>>x.id;
    p = findelm(A, x);
    if(p != NULL && first(A) != NULL){
        r = first(R);
        while(r != NULL){
            if(aktor(r) == p && r == first(R)){
                deletefirst(R, rd);
                if(first(R) != NULL){
                    r = first(R);
                }
            }
            else if(aktor(r) == p && r != first(R)){
                r1 = r;
                r = first(R);
                r2 = first(R);
                while(next(r2) != r1){
                    r2 = next(r2);
                }
                deleteafter(R, r2, rd);
            }
            else if(aktor(r) == p && next(r) == NULL){
                deletelast(R, rd);
                r = first(R);
            }
            r = next(r);
        }
        if(p == first(A)){
            deletefirst(A, pd);
        }
        else if(p != first(A) && next(p) != NULL){
            p1 = p;
            p2 = first(A);
            while(next(p2) != p1){
                p2 = next(p2);
            }
            deleteafter(A, p2, pd);
        }
        else if(next(p) == NULL){
            deletelast(A, pd);
        }
        cout<<endl;
        cout<<"     Deleted :)"<<endl;
    }
    else{
        cout<<endl;
        cout<<"     Can't delete that actor :("<<endl;
    }
    getch();
    system("cls");
}

void deletemovie(list_f &F, list_r &R){
    infotype_f y;
    address_f q, q1, q2, qd;
    address_r r, r1, r2, rd;
    cout<<endl;
    cout<<"               Delete Movie"<<endl;
    cout<<endl;
    cout<<"     Movie ID : ";
    cin>>y.id;
    q = findelm(F, y);
    if(q != NULL && first(F) != NULL){
        r = first(R);
        while(r != NULL){
            if(film(r) == q && r == first(R)){
                deletefirst(R, rd);
                if(first(R) != NULL){
                    r = first(R);
                }
            }
            else if(film(r) == q && r != first(R)){
                r1 = r;
                r = first(R);
                r2 = first(R);
                while(next(r2) != r1){
                    r2 = next(r2);
                }
                deleteafter(R, r2, rd);
            }
            else if(film(r) == q && next(r) == NULL){
                deletelast(R, rd);
                r = first(R);
            }
            r = next(r);
        }
        if(q == first(F)){
            deletefirst(F, qd);
        }
        else if(q != first(F) && next(q) != NULL){
            q1 = q;
            q2 = first(F);
            while(next(q2) != q1){
                q2 = next(q2);
            }
            deleteafter(F, q2, qd);
        }
        else if(next(q) == NULL){
            deletelast(F, qd);
        }
        cout<<endl;
        cout<<"     Deleted :)"<<endl;
    }
    else{
        cout<<endl;
        cout<<"     Can't delete that movie :("<<endl;
    }
    getch();
    system("cls");
}

void exit(){
    cout<<endl;
    cout<<"               Thank You Mate! :D"<<endl;
}

void enter(){
    cout<<endl;
    cout<<"               Welcome Mate! :D"<<endl;
    Sleep(2000);
    system("cls");
}
