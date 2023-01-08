//1. Write a program to print unit digit of a given number
#include<stdio.h>
int main(){
    int no;
    printf("\n enter any number: ");
    scanf("%d",&no);
    printf("\n unit digit of no is = %d ", no % 10);
    return 0;
}

