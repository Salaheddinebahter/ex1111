#include <stdio.h>
 int main () 
{
float c ;
printf("Entrez la température en Celsius:");
scanf("%f",&c);
if(c<0){
    printf("Solide");
    } else if (0 <= c && c < 100) {
    printf("Liquide");
    } else  {
    printf("gaz");  
    }
}