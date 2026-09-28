#include<stdio.h>

int main(){
    //Properties of divisibility
    // 1. If a divides b (a | b) and a divides c (a | c)
        // That means a divides b + c equally.
    unsigned int a = 7;
    unsigned int b = 63;
    unsigned int c = 42;

    if (b % a == 0 && c % a == 0){
        unsigned int result = b + c;

        unsigned int s = b / a;
        unsigned int t = c / a;
        unsigned int q = result / a;

        printf("Since %d divides %d and the result is: %d\n",a , b, s);
        printf(" And %d divides %d and the result is: %d\n", a, c, t);
        printf("That means if you add %d and %d then divide it by %d, it should preserve it's divisibility. %d\n", b,c,a, q);

        // Proof: If a divides b and a divides c, that must mean  a divides (b + c).
            // That also means if a | b which results in t, therefore a(t) = b
            // Also if a divides c and results in s, that must mean a(s) = c
            // so b + c = a(t) + a(s) = a (t + s)
        printf("If %d divides %d and results in %d that means %d(%d) = %d.\n",a,b,t,a,t,b);
        printf("If %d divides %d and results in %d that must mean %d(%d) = %d.\n", a,c,s,a,s,c);

        // Corollary: If a divides b and a divides c that means any integer multiplying b and c then added
            // Should preserve the divisibility.
        unsigned int m = 20;
        unsigned int n = 90;
        unsigned int o = ((b*m) + (c*n)) / a;
        printf("Since %d divides %d and %d divides %d that means %d | (%d(%d) + %d(%d)) = %d\n", a,b,a,c,a,b,m,c,n,o);
    }
    else{
        printf("%d can divide neither %d or %d.\n",a,b,c);
    }

    // 2. If a divides b equally then any integer multipling b will be divided by a
        // (a | b) -> (a | bc)
    if(b % a == 0){
        unsigned int q = (b * c) / a;

        printf("When %d divides %d that means any integer %d that multiplies %d, should preserve it's divisibilty.\n", a,b,c,b);
    }
    else{
        printf("%d does not divide %d so %d can not divide %d(%d)\n", a,b,a,b,c);
    }

    // 3. If a divides b and b divides c that means a should divide c.
        // a | b and b | c -> a | c
    if(b % a == 0 && c % b == 0){
        unsigned int q = c / a;

        printf("Since %d divides %d and %d divides %d that means %d can divide %d\n",a,b,b,c,a,c);
    }
    else{
        printf("This does not follow the 3rd property of divisibility. a | b and b | c in order for a | c. \n");
    }
    return 0;
}