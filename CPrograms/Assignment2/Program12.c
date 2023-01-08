/* 12. Write a program to take a three digit number 
from the user and rotate its digits by one position towards the right.*/

#include<stdio.h>
int main(){
    int first, middle, last, rotationNumber,no;
    printf("\n enter any 3 digit number = ");
    scanf("%d",&no);
    middle = no / 10 % 10;
    last = no % 10;
    first = no / 100;
    rotationNumber = first * 100 + last * 10 + middle;
    printf("\n After rotating by one postion in the right side number is = %d\n", rotationNumber);

    return 0;
    
}