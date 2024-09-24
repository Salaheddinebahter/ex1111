#include <stdio.h>
int main (){
    float a , b , r1 , r2 , r3 , r4;
    printf("entre a:");
    scanf("%f",&a);
    printf("entre b:");
    scanf("%f",&b);
r1= a+b;
r2= a-b;
r3= a*b;
r4= a/b;
    printf("Le résultat +:%.2f\n", r1);
    printf("Le résultat -:%.2f\n", r2);
    printf("Le résultat *:%.2f\n", r3);
    printf("Le résultat /:%.2f\n", r4);
return 0;
}