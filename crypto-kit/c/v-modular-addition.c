#include <stdio.h>

// v-modular-addition.c Is the vulnerable implementation of
    // Modular arithmetic. A reduction operation combined with
    // Standard arithmetic.
int main(){
    // Computing modular reduction with sum = a + b - modulus
        // If an only if, 0 < a & b < modulus. a and b are less than the modulus but greater than 0
        // Where if sum < 0 then the remainder = sum + modulus
        // If sum > 0 then the remainder =  Sum

    signed int a = 16; // Random arbritray number
    signed int b = 13; // Random arbritray number
    signed int p = 23; //Modulus
    signed int r;
    signed int s;

    // We find if a and b are numbers greater than 0 but less than the modulus
        // Then we check if ths sum is a negative number, if so add the modulus to sum, (sum + modulus)
        // If the Sum is greater than or equal to 0, the remainder is the sum.
    if(p > a && a > 0 && p > b && b > 0){
        s = a + b - p;
        if(s < 0){
            r = s + p;
        }
        else{
            r = s;
        }
        printf("%d plus %d subtracted by the modulus %d is the remainder: %d",a,b,p,r);
    }
    
    return 0;    
}