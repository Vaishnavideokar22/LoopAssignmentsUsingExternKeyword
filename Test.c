#include<stdio.h>
#include"Test1.c"
#include"Test2.c"
#include"Test3.c"
#include"Test4.c"
#include"Test5.c"
#include"Test6.c"
#include"Test7.c"
#include"Test8.c"
#include"Test9.c"
#include"Test10.c"


extern void count();

extern void alpha();

extern void even();

extern void evensum();

extern void natural();

extern void naturalreverse();

extern void naturalsum();

extern void odd();

extern void oddsum();

extern void table();


int main(){

 count();

 alpha();

 even();

 evensum();

 natural();

 naturalreverse();

 naturalsum();

 odd();

 table();

    return 0;
}