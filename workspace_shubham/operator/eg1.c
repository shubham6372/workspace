#include<stdio.h>

int main(){

    unsigned char a,b;

    printf("Eneter value of a & b: %u: \n" );
    scanf("%lu %lu",&a,&b);

    printf("a=%d, b=%d\n",a,b);

    printf("a&b = %d\n", a&b);

    printf("a|b = %d\n", a|b);

    printf("a^b = %d\n", a^b);

    printf("~a = %d\n", a=~b);

    printf("b<<3 = %d\n", b<<3);

    printf("b>>2 = %d\n", b>>2);
    return 0;
}