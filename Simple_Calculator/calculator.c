#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
    double num1, num2, ans;
    char sign;

    printf("Enter the value of your calculation:\n\n");
    scanf("%lf %c %lf", &num1, &sign,&num2);

    switch(sign){
    case '+':
        ans=num1+num2;
        break;
        case '-':
        ans=num1-num2;
        break;
        case '*':
        ans=num1*num2;
        break;
        case '/':
        ans=num1/num2;
        break;
        case '^':
        ans=pow(num1,num2);
        break;
        default:
            goto error;
        break;
    }
    printf("%.15g%c%.15g = %.5g\n\n", num1, sign, num2, ans);
    goto exit;
    error:
        printf("Please check your input again.\n\n");
exit:

    return 0;
}
