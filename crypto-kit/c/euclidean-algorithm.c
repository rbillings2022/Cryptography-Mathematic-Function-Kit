#include <stdio.h>

int main(){

    //GCD
    unsigned int a = 100;
    unsigned int b = 5;
    unsigned int r;
    unsigned int gcd;

    if(a>b){r = a;}
    else{r = b;}

    for (int i = 1; i <= r; i++){
        if(a%i==0 && b%i==0){
            printf("%d\n",i);
            gcd = i;
        }
    }

    printf("%d",gcd);
    //return(gcd);

    //EA
    while (r != 0){

    }
    return(0);
}