#include <stdio.h>
#include <stdlib.h>

void key(int N){
    
    int bin = 0, k = 1, count = 0;
    int N2 = N;

    int ostatok = 0;
    while (N)
    {   
        while (N != 0)
        { 
            ostatok = N % 2;
            if (ostatok == 1)
            {
                count++;
            }
            N = N / 2;
        } 
    }
    printf("Key: ");
    int N3 = N2 + count;
    printf("%d", N3);
    printf("\n");
}

int main(){
    int N_input;
    printf("Choose N: ");
    scanf("%d", &N_input);
    printf("\n");
    key(N_input);
    printf("\n");
    return 0;
}
