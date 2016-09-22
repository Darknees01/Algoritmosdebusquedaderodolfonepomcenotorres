#include <stdio.h>
int Encontrar, encontrado, i;
int a[10] = {17,20,26,31,44,54,55,65,77,93};
main(){
    printf("Escriba un numero por favor:");
    scanf("%d", &Encontrar);
    printf("Usted ingreo %d\n",Encontrar);
    encontrado = 0;
    for (i=0;;i++){
        if (a[i] == Encontrar){
             break;
        }
    }
    if(encontrado==1){
        printf("Numero encontrado!");
    }else{
        printf("Numero no encontrado!\nLista de Numeros ");
        for (i=0; i<10; i++){
            (i<9)?printf("%d, ",a[i]):printf("%d.",a[i]);
        }
    }
    getchar();
    return 0 ;
}
