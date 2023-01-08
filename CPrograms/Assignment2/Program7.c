

#include<stdio.h>
int main(){
    int number;
    printf("\n enter any number=\n ");
    scanf("%d",&number);
    if(number&1){
        printf("\n odd number");
    }
    else{
        printf("\n even number");
    }
    return 0;
}