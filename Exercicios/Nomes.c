#include <stdio.h>
int main (){
    char letra = 't';

    printf("Nome com a inicial '%c:\n'", letra);
    switch (letra){
        case 't':
            printf("Tiago\n");
            break;
        case 'm':
            printf("Miguel\n");
            break;
        case 'j':
            printf("Jaqueline\n");
            break;
        case 'g':
            printf("Gema\n");
            break;
        default:
            printf("Inicial invalida");
    }
    return 0;
}