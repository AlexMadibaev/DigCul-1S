#include <stdio.h>
int main(){
    int a,b,c;
 scanf("%x%x",&a,&c);
 printf( "%o\t",a); 
     printf(" %x\t", ~a);
    b = a << 4; 
    printf("%x\t",b);
    b = a&c;
    printf("%x",b);
}


