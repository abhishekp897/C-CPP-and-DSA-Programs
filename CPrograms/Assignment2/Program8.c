//8. Write a program to print size of an int, a float, a char and a double type variable
#include<stdio.h>
int main(){
    int x;
    float y;
    char ch;
    double d;
    x = sizeof(int);
    y = sizeof(y);
    ch = sizeof(ch);
    d = sizeof(double);
    printf("\n size of int is = %d \n size of flat is = %f \n size of char is = %d \n size of double is =%lf \n",x,y,ch,d);
    return 0;
}