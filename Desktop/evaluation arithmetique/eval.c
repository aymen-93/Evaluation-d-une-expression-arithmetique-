#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include "lib.h"
/* Projet realiser par :
Hamouche Mohamed abderaouf 191931061662
Ihaddaden Sohaib 191931069669
Teldj Aymen 191931088399
Touati Yacine abderafik 191931069669
*/
int main()
{
     tab table[1024];
     int tailleTab;
     char s[1024];
     greeting();

         printf("Veiller donner une expression:: ");
         gets(s);

        while (verifPar(s)==false)
        {
          printf("veiller donner une expression correct::");
          gets(s);
        }
     rmSpace(s);
     verifMul(s);
     printf("%s",s);
     tailleTab =putInTable(s,table);
     char x[50];
     pileT p=intpileT(p);
     p=transformation(table,tailleTab);
     float o;
     o=resultatfinal(p);
     printf("=%f\n",o);


    return 0;

}
