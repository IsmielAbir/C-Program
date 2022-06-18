#include<stdio.h>

int natural_number(int a){
    if(a<=50){
        printf("%d ", a);
        natural_number(a+1);
    }
}

int main(){

    int n=1;
    printf("First 50 Natural Number Print Using Recursion:\n");
    natural_number(n);

    return 0;
}