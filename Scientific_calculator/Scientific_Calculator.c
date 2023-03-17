#include<stdio.h>
#include<math.h>
int main()
{

    int c,x,y;
    double a,b;
    printf("Select Your Option for calculate\n\n");
    printf(" 1. Addition\n 2. Subtraction\n 3. Multiplication\n 4. Division\n 5. Square Root\n 6. Power of two value A^B\n 7. Square\n 8. Cube\n 9. Modulus\n10. Round\n11. Ceil\n12. Floor\n13. Log\n14. Power of 10 notation\n15. ln\n16. Exp\n17. sin()\n18. cos()\n19. tan()\n\n");

    scanf("%d", &c);
switch(c){
    case 1:
        printf("Enter Your two value for Addition:\n\n");
        scanf("%lf%lf", &a,&b);
        printf("%.15g+%.15g = %.5g\n",a,b, a+b);
        break;
        case 2:
        printf("Enter Your two value for Subtraction:\n\n");
        scanf("%lf%lf", &a,&b);
        printf("%.15g-%.15g = %.5g\n",a,b, a-b);
        break;

        case 3:
        printf("Enter Your two value for Multiplication:\n\n");
        scanf("%lf%lf", &a,&b);
        printf("%.15g*%.15g = %.5g\n",a,b, a*b);
        break;

        case 4:
        printf("Enter Your two value for Division:\n\n");
        scanf("%lf%lf", &a,&b);
        printf("%.15g/%.15g = %.5g\n",a,b, a/b);
        break;

        case 5:
            printf("Enter a value for Square Root:\n\n");
            scanf("%lf", &a);
            printf("Square Root %.15g = %.5g\n",a, sqrt(a));
            break;

             case 6:
        printf("Enter Your two value for measure Power:\n\n");
        scanf("%lf%lf", &a,&b);
        printf("%.15g^%.15g = %.5g\n",a,b, pow(a,b));
        break;

        case 7:
        printf("Enter Your a value for measure Square:\n\n");
        scanf("%lf", &a);
        printf("Square of %.15g = %.5g\n",a, pow(a,2));
        break;

        case 8:
        printf("Enter Your a value for measure Cube:\n\n");
        scanf("%lf", &a);
        printf("Cube of %.15g = %.5g\n",a, pow(a,3));
        break;


         case 9:
        printf("Enter Your two value for measure Modulus:\n\n");
        scanf("%d%d", &x,&y);
        printf("%d %% %d = %d\n",x,y, x%y);
        break;

        case 10:
        printf("Enter Your a value for measure Round:\n\n");
        scanf("%lf", &a);
        printf("round of %.15g = %.5g\n",a, round(a));
        break;

        case 11:
        printf("Enter Your a value for measure Ceil:\n\n");
        scanf("%lf", &a);
        printf("Ceil of %.15g = %.5g\n",a, ceil(a));
        break;


         case 12:
        printf("Enter Your a value for measure Floor:\n\n");
        scanf("%lf", &a);
        printf("Floor of %.15g = %.5g\n",a, floor(a));
        break;

        case 13:
        printf("Enter Your a value for measure Log:\n\n");
        scanf("%lf", &a);
        printf("Log of %.15g = %.5g\n",a, log10(a));
        break;


        case 14:
        printf("Enter Your a value for measure Power of 10:\n\n");
        scanf("%lf", &a);
        printf("%.15g Power of 10 is = %.15g\n",a, pow(10, a));
        break;

        case 15:
        printf("Enter Your a value for measure ln:\n\n");
        scanf("%lf", &a);
        printf("ln of %.15g = %.5g\n",a, log(a));
        break;

         case 16:
        printf("Enter Your a value for measure Exp:\n\n");
        scanf("%lf", &a);
        printf("Exp of %.15g = %.5g\n",a, exp(a));
        break;

         case 17:
        printf("Enter Your a value for measure sin():\n\n");
        scanf("%lf", &a);
        printf("sin() of %.15g = %.5g\n",a, sin(a*3.14159/180));
        break;

        case 18:
        printf("Enter Your a value for measure cos():\n\n");
        scanf("%lf", &a);
        printf("cos() of %.15g = %.5g\n",a, cos(a*3.14159/180));
        break;

          case 19:
        printf("Enter Your a value for measure tan():\n\n");
        scanf("%lf", &a);
        printf("tan() of %.15g = %.5g\n",a, tan(a*3.14159/180));
        break;

        
          default:
            printf("Please Enter the correct value\n\n");
            break;





}

}
