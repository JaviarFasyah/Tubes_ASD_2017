#include<iostream>
#include "parent.h"
#include "child.h"
#include "relasi.h"
#include <windows.h>
using namespace std;

void addactor(list_a &A);
void addmovie(list_f &F);
void addcast(list_r &R, list_a A, list_f F);
void viewallactor(list_a A);
void viewallmovie(list_f F);
void viewallcast(list_r R);
void searchactor(list_a A);
void searchmovie(list_f F);
void searchcast(list_r R, list_a A, list_f F);
void deletecast(list_r &R, list_a A, list_f F);
void deleteactor(list_a &A, list_r &R);
void deletemovie(list_f &F, list_r &R);
void exit();
void enter();

void menu(list_a A, list_f F, list_r R){ /**REYNALDISYAPUTRA_1301164141**/
    int ch;
    enter();
    do{
        cout<<endl;
        cout<<"               Welcome to TMDB"<<endl;
        cout<<endl;
        Sleep(50);
        cout<<"     1. Add Actor"<<endl;
        Sleep(50);
        cout<<"     2. Add Movie"<<endl;
        Sleep(50);
        cout<<"     3. Add Cast"<<endl;
        Sleep(50);
        cout<<"     4. View All Actors"<<endl;
        Sleep(50);
        cout<<"     5. View All Movies"<<endl;
        Sleep(50);
        cout<<"     6. View All Casts"<<endl;
        Sleep(50);
        cout<<"     7. Search Actor"<<endl;
        Sleep(50);
        cout<<"     8. Search Movie"<<endl;
        Sleep(50);
        cout<<"     9. Search Cast"<<endl;
        Sleep(50);
        cout<<"    10. Delete Cast"<<endl;
        Sleep(50);
        cout<<"    11. Delete Actor"<<endl;
        Sleep(50);
        cout<<"    12. Delete Movie"<<endl;
        Sleep(50);
        cout<<"     0. Exit"<<endl;
        Sleep(50);
        cout<<endl;
        Sleep(50);
        cout<<"     Choice : ";
        cin>>ch;
        switch(ch){
            case 1:
                system("cls");
                addactor(A);
                break;
            case 2:
                system("cls");
                addmovie(F);
                break;
            case 3:
                system("cls");
                addcast(R, A, F);
                break;
            case 4:
                system("cls");
                viewallactor(A);
                break;
            case 5:
                system("cls");
                viewallmovie(F);
                break;
            case 6:
                system("cls");
                viewallcast(R);
                break;
            case 7:
                system("cls");
                searchactor(A);
                break;
            case 8:
                system("cls");
                searchmovie(F);
                break;
            case 9:
                system("cls");
                searchcast(R, A, F);
                break;
            case 10:
                system("cls");
                deletecast(R, A, F);
                break;
            case 11:
                system("cls");
                deleteactor(A, R);
                break;
            case 12:
                system("cls");
                deletemovie(F, R);
                break;
        }
    }while(ch != 0);
    exit();
}
