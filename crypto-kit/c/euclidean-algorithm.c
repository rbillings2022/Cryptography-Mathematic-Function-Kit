#include <stdio.h>

int main(){

    //GCD
    unsigned int a = 70;
    unsigned int b = 40;
    unsigned int c;
    unsigned int gcd;

    if(a>b){c = a;}
    else{c = b;}

    for (int i = 1; i <= c; i++){
        if(a%i==0 && b%i==0){
            printf("%d\n",i);
            gcd = i;
        }
    }

    printf("Gcd: %d\n",gcd);
    //return(gcd);

    //EA
    unsigned int r;
    if(a<b){unsigned int temp = b; b=a; a=temp;}

    while (r != 0){
        r = a%b;
        a = b;
        b = r;
    }
    printf("Euclidean Algorithm: %d",a);
    //return(a);
    return(0);
}