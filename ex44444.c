#include <stdio.h>
 int main () 
{
float ms , kmh   ;
printf("Entrez la vitesse en kh/h :");
scanf("%f",&kmh);
ms = kmh * 0.27778;
printf("Résultat en m/s: %.2f",ms);
return 0;
}