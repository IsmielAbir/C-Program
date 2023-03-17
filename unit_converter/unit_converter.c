#include<stdio.h>
int main()
{
    int c,t,m,a;
    double fer,cel, kg,mass,ca,de,gr,be,he;
    printf("Which type converter do you want to use:\n\n");
    printf("1. Temperature\n2. Mass\n3. Angle\n4. Sound\n5. Frequency\n\n");
    scanf("%d", &c);

    switch(c){

case 1:
    printf("Which type of temperature do you want to use for convert:\n\n");
    printf("1. Fahrenheit to Celsius\n2. Celsius to Fahrenheit\n3. Celsius to Kelvin\n\n");
    scanf("%d", &t);
    switch(t){
case 1:
    printf("Enter the value of Fahrenheit:\n\n");
    scanf("%lf", &fer);
              printf("Celsius: %.5g\n", ((fer-32) * (5.0/9.0)));
              break;
case 2:
     printf("Enter the value of Celsius:\n\n");
    scanf("%lf", &cel);
              printf("Fahrenheit: %.5g\n", ((9.0/5.0)*cel + 32));
              break;
case 3:
    printf("Enter the value of Celsius:\n\n");
    scanf("%lf", &cel);
              printf("Celsius: %.5g\n", cel+273.15);
              break;
default:
    printf("Enter a valid input\n\n");
    break;



    }
    break;

case 2:
     printf("Which type of mass do you want to use for convert:\n\n");
    printf("1. Kilogram to Pounds\n2. Mass to weight\n3. Carat to gram\n\n");
    scanf("%d", &m);
    switch(m){
case 1:
    printf("Enter the value of Kilogram:\n\n");
    scanf("%lf", &kg);
              printf("Pounds: %.5g\n", kg*2.20462);
              break;
case 2:
     printf("Enter the value of Mass:\n\n");
    scanf("%lf", &mass);
              printf("Weight: %.5g\n", mass*9.8);
              break;
case 3:
     printf("Enter the value of Carat:\n\n");
    scanf("%lf", &ca);
              printf("Gram: %.5g\n", ca*0.2);
              break;
              default:
    printf("Enter a valid input\n\n");
    break;

    }
    break;

case 3:
     printf("Which type of Angle do you want to use for convert:\n\n");
    printf("1. Degree to Radian\n2. Grad to Radian\n\n");
    scanf("%d", &a);
    switch(a){
case 1:
     printf("Enter the value of Degree:\n\n");
    scanf("%lf", &de);
              printf("Radian: %.15g\n", de*0.0174533);
              break;
case 2:
       printf("Enter the value of Grad:\n\n");
    scanf("%lf", &gr);
              printf("Radian: %.15g\n", gr*0.01570796973211878);
              break;
              default:
    printf("Enter a valid input\n\n");
    break;


    }
    break;
case 4:
       printf("Enter the value of Bel:\n\n");
    scanf("%lf", &be);
              printf("Decibel: %.15g\n", be*10);
              break;
case 5:
     printf("Enter the value of Hertz:\n\n");
    scanf("%lf", &he);
              printf("Kilohertz: %.15g\n", he*0.001);
              break;
              default:
    printf("Enter a valid input\n\n");
    break;



    }
return 0;
}
