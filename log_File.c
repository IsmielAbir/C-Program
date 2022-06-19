#include<stdio.h>
int main(){
    FILE *logFile;
    logFile = fopen("log.txt", "a");
    fprintf(logFile,"Now the time is 12:25AM\n");
}