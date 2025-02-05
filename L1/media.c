#include <stdio.h>

int main() {
    float num[5], media;
    int i;

    for(i = 0; i<5; i++){
        printf("Digita o %d o numero:\n", i+1);
        scanf("%f", &num[i]);

    }

    media = (num[0] + num[1] + num[2] + num[3] + num[4])/5;

    printf("$$\\overline{x}=\\frac{%.4f + %.4f + %.4f + %.4f + %.4f}{5} = %.5f$$", num[0], num[1], num[2], num[3], num[4], media);

    return 0;
}