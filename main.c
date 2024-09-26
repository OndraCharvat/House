#include <stdio.h>

void printRoof(int width) {
    int spaces = width / 2;
    int stars = 1;

    for (int i = 0; i <= width / 2; i++) {
        for (int j = 0; j < spaces; j++) {
            printf(" ");
        }
        for (int j = 0; j < stars; j++) {
            printf("*");
        }
        printf("\n");

        spaces--;
        stars += 2;
    }
}

void printWallsAndFence(int height, int width, int fenceLength) {
    for (int i = 0; i < height; i++) {
        printf("*");
        for (int j = 0; j < width - 2; j++) {
            printf(" ");
        }
        printf("*");
        for (int j = 0; j < fenceLength; j++) {
            printf("-|");
        }
        printf("\n");
    }

    for (int i = 0; i < width; i++) {
        printf("*");
    }

    for (int j = 0; j < fenceLength; j++) {
        printf("-|");
    }
    printf("\n");
}

int main() {
    int roofWidth, wallHeight, fenceLength;

    printf("Zadej šířku střechy: ");
    scanf("%d", &roofWidth);
    printf("Zadej výšku zdi: ");
    scanf("%d", &wallHeight);
    printf("Zadej délku plotu: ");
    scanf("%d", &fenceLength);


    printRoof(roofWidth);
    printWallsAndFence(wallHeight, roofWidth, fenceLength);

    return 0;
}
