#include <stdio.h>

int main(){
    for(int i = 1; i<11; i++){
        for(int w = 1; w < 11; w++){
            printf("%d x %d = %d\n", i, w, i * w);
        }
        printf("------------------\n");
    }
    return 0;
}