// 2. Write a program to print a given number without its last digit

#include<stdio.h>
int main(){
    int no;
    printf("\n enter any no: ");
    scanf("%d",&no);
    printf("\n Number without its last digit is = %d ", no / 10);
    return 0;
}