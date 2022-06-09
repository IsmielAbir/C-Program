//Write a program that can reverse a ginen number.

#include<stdio.h>
int main(){
    int n, remin, rev;
    printf("Enter any number: ");
    scanf("%d", &n);
    while(n!=0){
        remin= n%10;
        rev= rev*10 + remin;
        n=n/10;
    }
    printf("The revers of the following number is: %d\n", rev);

    return 0;
}