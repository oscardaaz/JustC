#include <stdio.h>

int main() {
    
    int num1,num2,num3,num4,num5,num6,num7,num8;
    printf("Ingrese el primer numero: ");
    num1 =scanf("%d",&num1);
    printf("%d",num1);
    printf("Ingrese el segundo numero: ",num1);
    
    
    int resto;
    char letra;
    int dni;
    resto = dni % 23;
    switch (resto) {
        case 0:
            letra = 'A';
            break;
        case 1:
            letra = 'B';
            break;
        default:
            letra = 'Z';
            break;
    }

}