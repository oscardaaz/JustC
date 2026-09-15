#include <stdio.h>

int main() {
    
    int n1,n2;
   // printf("Ingrese el primer numero: ");
    //scanf("%d", &n1);
    /* printf("Ingrese el segundo numero: ");
    scanf("%d", &n2);*/

do  {
    printf("\nIngrese el primer numero: ");
    scanf(" %d",&n1);
    for (int i = 1; i <= n1; i++)
    {
        n1 = n1*i;
    }

    printf("%d",n1);
} while (n1>=0);


/*
    if(n1>n2){
        printf("El primer numero es mayor que el segundo\n");
    }else if(n1<n2){
        printf("El segundo numero es mayor que el primero\n");
    }else{
        printf("Los numeros son iguales\n");
    }
*/
/*
    int n3;
    printf("Ingrese el tercer numero: ");
    scanf("%d", &n3);
    
    if (n3 == n1)
    {
    
    }
   */
    /*
    printf("Los numeros entre 1 y %d son: \n",n1);
    for (int i = 1; i <= n1; i++) {
        printf("%d ",i);
        printf("%d\n",-i);
     }
     */

    return 0;
}