#include <stdio.h>

// Function prototype
int convert_to_binary(int integer);
// This is the safe implementation of modular addition. Where we use a mask
    // To find out whether the result of a + b - p is a negative or not.
int main(){

    signed int a = 16;
    signed int b = 13;
    signed int p = 23;
    signed int r;
    signed int s;
    
    // Integer of the sum so we can get the binary representation of the number
        // Then get the most significant bit from that number and subtract it to 0
        // to get the mask.
        // The mask can either be all 1's or all zeros.
    s = (a+b)-p;
    int t = 1;
    // Binary representation of p so we can perform bitwise AND against the sum
    int *result = convert_to_binary(t);

    printf("%d",result);
    return 0;
}

// This function divides a decimal notation integer
    // It divides the quotient by two, saving the remainder until the quotient reaches 0
int *convert_to_binary(int integer){
    //Initialize variables needed.
    int size = 0;
    int binary[size];
    int quotient = integer;
    int remainder;

    while(quotient > 0){
        quotient = quotient / 2;
        remainder = quotient % 2;
        binary[size] = remainder;
        size++;
    }
    return binary;
}