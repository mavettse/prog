#include <stdio.h>

int main () {

    int X, Y; 
    while(1) {
        
        scanf("%d %d", &X, &Y);
        
        if(X == 0 || Y == 0) {
            break;
        }
    
        if(X > 0 && Y > 0) {
            printf("primeiro\n");
        }

        if(X < 0 && Y > 0) {
            printf("segundo\n");
        }

        if(X < 0 && Y < 0) {
            printf("terceiro\n");
        }

        if(X > 0 && Y < 0) {
            printf("quarto\n");
        }

    }

    return 0; 
}