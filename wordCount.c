#include<stdio.h>
#include<string.h>
int main(){

    char str[1000];
    int word=0;
    scanf("%[^\n]%*s", str);
    for(int i=0; str[i]!='\0';i++){
        if(str[i] == ' ' && str[i+1]!= ' ')
        word++;
    }
    printf("Number of words is %d\n", word+1);

    return 0;
}