#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
// #include <alloc.h> ???

int main(){

    // Pointers!
    // int * const int ptr=&x;
    // & for address / * for value
    // %x %X %u %p
    // TypeCasting -> p = ( int *) &a;

    // p=&a;
    // *p=3;

    int i = 6;
    int *p=0;
    p=&i;
    printf("%p,%d",p,*p);
    
    //  q = (int *) malloc (sizeof(int))
    //  void free();
    //  arrays =>>>> x = (int *) malloc(5* sizeof(int))
    // char *str="Computer";
    // *p=i;
    getch();
    return 0;
}