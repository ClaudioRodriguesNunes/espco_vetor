#include <stdio.h>
#include <stdlib.h>

int func(int *vet);
//int func2(int *vet[]); Não se pode usar?
int func3(int vent[]);
int func4(int *vet,int *vet5);
int func5(int vent[], int *vet6);

int main(void ){
    int vet1[]={1,2,3,4,5};
    int vet2[5]={1,2,3,4,5};
    int vet3[5];
    int *vetor4;
    int cont=0;

    vetor4 = malloc(5*sizeof(int));

    vet3[0] = vetor4[0] = 1;
    vetor4[1]=2;
    vetor4[2]=3;
    vetor4[3]=4;
    vetor4[4]=5;

    for(int i=0;i<5;i++){
        vet3[i] = vet3[i] + 1;
    }

    // chamando as funções

    cont = func(vet1);
    printf("func(vet1) retornando para a main = ");
    for(int i=0;i<5;i++){
        printf("%d ",vet1[i]);
    };
    printf("\n=====================\n");

    cont = func3(vet1);
    printf("func(vet1) retornando para a main = ");
    for(int i=0;i<5;i++){
        printf("%d ",vet1[i]);
    };
    printf("\n=====================\n");

    printf("func(vetor4) antes da chamada da main = ");
    for(int i=0;i<5;i++){
        printf("%d ",vetor4[i]);
    };
    printf("\n");
    cont = func3(vetor4);
    printf("func(vetor4) retornando para a main = ");
    for(int i=0;i<5;i++){
        printf("%d ",vetor4[i]);
    };
    printf("\n=====================\n");

    cont = func3(vet2);
    printf("func(vet2) retornando para a main = ");
    for(int i=0;i<5;i++){
        printf("%d ",vet1[i]);
    };
    printf("\n=====================\n");

    cont = func4(vet3,vetor4);
    printf("func(vet3) retornando para a main = ");
    for(int i=0;i<5;i++){
        printf("%d ",vet1[i]);
    };
    printf("\n");
    printf("func(vetor4) retornando para a main = ");
    for(int i=0;i<5;i++){
        printf("%d ",vetor4[i]);
    };
    printf("\n=====================\n");

    cont = func5(vetor4,vet1);
    printf("func(vetor4) retornando para a main = ");
    for(int i=0;i<5;i++){
        printf("%d ",vet1[i]);
    };
    printf("\n");
    printf("func(vet2) retornando para a main = ");
    for(int i=0;i<5;i++){
        printf("%d ",vet3[i]);
    };
    printf("\n=====================\n");

    return 0;
}

int func(int *vet){
    printf("func = ");
    for(int i=0;i<5;i++){
        printf("%d ",vet[i]);
    };
    printf("\n\n");
    for(int i=0;i<5;i++){
        vet[i] = vet[i] + 1;
    }
    printf("func modificado = ");
    for(int i=0;i<5;i++){
        printf("%d ",vet[i]);
    };
    printf("\n\n");

    return 0;
}

int func3(int vet[]){
    printf("func3 = ");
    for(int i=0;i<5;i++){
        printf("%d ",vet[i]);
    };
    printf("\n\n");
    for(int i=0;i<5;i++){
        vet[i] = vet[i] + 1;
    }
    printf("func3 modificado = ");
    for(int i=0;i<5;i++){
        printf("%d ",vet[i]);
    };
    printf("\n\n");

    return 0;
}

int func4(int *vet,int *vet5){
    printf("func4 = ");
    for(int i=0;i<5;i++){
        printf("%d ",vet[i]);
    };
    printf("\n\n");
    for(int i=0;i<5;i++){
        vet[i] = vet[i] + 1;
    }
    printf("fun4c modificado = ");
    for(int i=0;i<5;i++){
        printf("%d ",vet[i]);
    };
    printf("\n");

    printf("func4 = ");
    for(int i=0;i<5;i++){
        printf("%d ",vet5[i]);
    };
    printf("\n\n");
    for(int i=0;i<5;i++){
        vet5[i] = vet5[i] + 1;
    }
    printf("fun4c modificado = ");
    for(int i=0;i<5;i++){
        printf("%d ",vet5[i]);
    };
    printf("\n");
    printf("Testando algumas operações\n");
    printf("vet = vet5\n");
    vet = vet5;
    printf("vet[2] = %d - vet5[2] = %d",vet[2],vet5[2]);

    printf("\n\n");


    return 0;
}

int func5(int vent[], int *vet2){
    printf("func4 = ");
    for(int i=0;i<5;i++){
        printf("%d ",vent[i]);
    };
    printf("\n\n");
    for(int i=0;i<5;i++){
        vent[i] = vent[i] + 1;
    }
    printf("fun4c modificado = ");
    for(int i=0;i<5;i++){
        printf("%d ",vent[i]);
    };
    printf("\n");

    printf("func4 = ");
    for(int i=0;i<5;i++){
        printf("%d ",vet2[i]);
    };
    printf("\n\n");
    for(int i=0;i<5;i++){
        vet2[i] = vet2[i] + 1;
    }
    printf("fun4c modificado = ");
    for(int i=0;i<5;i++){
        printf("%d ",vet2[i]);
    };
    printf("\n");
    printf("Testando algumas operações\n");
    printf("vet2 = vent\n");
    vet2 = vent;
    printf("vent[2] = %d - vet2[2] = %d",vent[2],vet2[2]);

    printf("\n\n");


    return 0;
}
