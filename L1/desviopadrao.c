#include <stdio.h>

int main() {
    float num[5], media;
    int i;

    for(i = 0; i<5; i++){
        printf("Digita o %d o numero:\n", i+1);
        scanf("%f", &num[i]);

    }

    media = (num[0] + num[1] + num[2] + num[3] + num[4])/5;

    printf("$$\\sigma = \\sqrt{\\frac{(%.4f - %.5f)^{2}+(%.4f - %.5f)^{2}+(%.4f - %.5f)^{2}+(%.4f - %.5f)^{2}+(%.4f - %.5f)^{2}}{4}} = $$", num[0], media, num[1], media, num[2], media, num[3], media, num[4], media);

    return 0;
}