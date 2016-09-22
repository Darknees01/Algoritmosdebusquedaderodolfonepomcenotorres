#include <stdio.h>
int Encontrar, encontrado, i;
int a[10] = {54,26,93,17,77,31,44,55,20,93};
main(){
    printf("Escriba un numero por favor:");
    scanf("%d", &Encontrar);
    printf("Usted ingreo %d\n",Encontrar);
    encontrado = 0;
    for (i=0;i<4;i++){
        if (a[i] == Encontrar){
            encontrado =1;
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
