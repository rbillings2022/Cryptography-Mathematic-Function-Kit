#include<stdio.h>

int main(){
    //Properties of divisibility
    // 1. If a divides b (a | b) and a divides c (a | c)
        // That means a divides b + c equally.
    unsigned int a = 7;
    unsigned int b = 62;
    unsigned int c = 42;

    if (b % a == 0 && c % a == 0){
        unsigned int result = b + c;

        unsigned int s = b / a;
        unsigned int t = c / a;
        unsigned int q = result / a;

        printf("Since %d divides %d and the result is: %d\n",a , b, s);
        printf(" And %d divides %d and the result is: %d\n", a, c, t);
        printf("That means if you add %d and %d then divide it by %d, it should preserve it's divisibility. %d\n", b,c,a, q);
    }
    else{
        printf("%d can divide neither %d or %d.",a,b,c);
    }
    return 0;
}