/*11. Assume price of 1 USD is INR 76.23. 
Write a program to take the amount in INR and convert it into USD.*/

#include<stdio.h>
int main(){
    float amountInINR, usd;
    printf("\n enter amount in INR = ");
    scanf("%f",&amountInINR);
    usd = amountInINR / 76.23;
    printf("\n Amount in USD is = %.2f USD", usd);
    return 0;
}