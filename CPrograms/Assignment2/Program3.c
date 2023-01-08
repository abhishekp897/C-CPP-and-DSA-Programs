//3. Write a program to swap values of two int variables

#include<stdio.h>
int main(){
    int a, b, temp;
    printf("\n enter two numbers : ");
    scanf("%d%d",&a,&b);
    printf("\nBefore Swap - value of a = %d and value of b = %d  ", a,b);
    temp = a;
    a = b;
    b = temp;
    printf("\nAfter Swap - value of a = %d and value of b = %d ", a,b);   
    return 0;
}