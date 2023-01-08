// 6. Write a program which takes a character as an input and displays its ASCII code.
#include<stdio.h>
int main(){
    char ch;
    printf("\n enter any charactor from the keyboard = ");
    scanf("%c",&ch);
    printf("\n ASCII code of %c is %d \n", ch, ch);

    return 0;
}