/*Write a program to input a number from the user
 and also input a digit. Append a digit in the number 
 and print the resulting number. 
 (Example - number=234 and digit=9 then the resulting number is 2349)*/
 #include<stdio.h>
 int main(){
     int digit, no;
     printf("\n enter any no=");
     scanf("%d",&no);
     printf("\n Enter a single digit: =");
     scanf("%d",&digit);
     no = no * 10;
     no = no + digit;
     printf("\nResulting no is = %d \n",no);
     return 0;
 }
