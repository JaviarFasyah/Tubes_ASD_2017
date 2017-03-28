#include <iostream>
#include "parent.h"
#include "child.h"
#include "relasi.h"
using namespace std;

void menu(list_a A,list_f F,list_r R);

int main()
{
    list_a A;
    list_f F;
    list_r R;
    createlist(A);
    createlist(F);
    createlist(R);
    menu(A, F, R);
    return 0;
}
