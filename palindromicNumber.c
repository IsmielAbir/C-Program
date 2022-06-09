// Write a program, that can check either the number is palindromic or not

#include <stdio.h>
int main() {
  int n, rev = 0, rem, store;
    printf("Enter a number: ");
    scanf("%d", &n);
    store = n;

    while (n != 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n= n/10;
    }
    if (store == rev)
        printf("%d is a palindrome number\n", store);
    else
        printf("%d is not a palindrome number", store);

    return 0;
}