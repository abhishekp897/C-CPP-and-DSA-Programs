// 5. Write a program to input a three digit number and display the sum of the digits.

#include<stdio.h>
int main(){
    int no, firstDigit, middleDigit, lastDigit;
    printf("\n Enter any 3 digit number = \n");
    scanf("%d",&no);
    firstDigit = no / 100;
    lastDigit = no % 10;
    middleDigit = no / 10 % 10;
    printf("\n First = %d middle = %d last = %d ", firstDigit, middleDigit, lastDigit);
    printf("\n Sum of 3 digit is = %d " , firstDigit + middleDigit + lastDigit);

    return 0;
}