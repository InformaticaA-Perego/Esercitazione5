//Scrivere un programma che legga al massimo 100 numeri interi. L'inserimento termina dopo 100 numeri o appena inserito un numero negativo. Individuare i numeri primi. Scorrere l'array senza usare l'indice []

#include <stdio.h>
#define MAX 10

int main(int argc, const char * argv[]) {
    int array[MAX];
    int *puntArray;
    int fine = 0;
    int isPrimo = 0;
    int i;
    int len = 0;
    int d;
    
    //puntArray = &array[0];

    for (puntArray = array; puntArray<array+MAX; puntArray++)
        *puntArray = 0;
    
    printf("Inserisci i numeri (negativo per terminare: \n");
    
    for (puntArray = array; ((puntArray<array+MAX) && (fine == 0)); puntArray++){
        scanf("%d",puntArray);
        if (*puntArray<0)
            fine = 1;
    }
    /*//Con indice
    for (int i=0; ((i<MAX) && (fine==0)); i++){
        scanf("%d",&array[i]);
        if (array[i]<0)
            fine = 1;
    }*/
    /*
    for (int i=0; i<MAX; i++){
        scanf("%d",&d);
        if (d<0)
            break;
        else{
            array[i] = d;
            len++;
        }
    }
    
    for (i=0; i<len; i++){
        
    }
     */
    
    printf("Numeri primi inseriti:\n");
    for (puntArray=array; ((*puntArray >= 0) && (puntArray<array+MAX)) ; puntArray++){
        
        isPrimo = 0;
        for (i=2; ((i<*puntArray) && (isPrimo==0)); i++){
            if (*puntArray%i == 0)
                isPrimo = 1;
        }
        if (isPrimo==0)
            printf("%d\n",*puntArray);
    }
    /*//con indice
    for (int j = 0; ((array[j] >= 0) && (j<MAX)) ; j++){
        
        isPrimo = 0;
        for (i=2; ((i<array[j]) && (isPrimo==0)); i++){
            if (array[j]%i == 0)
                isPrimo = 1;
        }
        if (isPrimo==0)
            printf("%d\n",array[j]);
    }*/
    return 0;
}

