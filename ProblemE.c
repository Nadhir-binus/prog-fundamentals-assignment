/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int N, M;
   scanf("%d %d", &N, &M);
   int counter = 0;
   
   while(counter < M){
       printf("%d\n", N + counter); 
       
       counter++;
       
   }
    return 0;
}
