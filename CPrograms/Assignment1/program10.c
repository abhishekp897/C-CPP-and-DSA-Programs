/*10. WAP to take date as an input in below given format and convert the date format and display the result as given below.
User Input date format – “DD/MM/YYYY” (27/11/2022) Output format –
“Day – DD , Month – MM , Year – YYYY” (Day – 27 ,Month – 07 , Year – 2022)*/

#include<stdio.h>
int main(){
    
    int day,year,month;
    int monthFirstDigit,formatMonth;
    printf("\n enter the date in the format: DD/MM/YYYY :- ");
    scanf("%d/%d/%d",&day,&month,&year);
    printf("\n Date is = %d/%d/%d",day,month,year);
    printf("\n Day - %d",day);
    
  
   formatMonth = month /10;
   //printf("\n  formatMonth = %d", formatMonth);
   if(formatMonth == 0){
      monthFirstDigit = 0;
      printf("\n Month - %d%d",monthFirstDigit,month);
   }
   else{
     printf("\n Month - %d",month);
   }
   
   
    printf("\n Year - %d",year);
    return 0;
}