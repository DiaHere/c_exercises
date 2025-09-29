#include <stdio.h>

int main() {
    int dotProduct = 0;
    int firstVector[3], secondVector[3];

    printf("Enter 3 components of teh first vector: ");
    scanf("%d %d %d", &firstVector[0], &firstVector[1], &firstVector[2]);

    printf("Enter 3 components of the second vector: ");
    scanf("%d %d %d", &secondVector[0], &secondVector[1], &secondVector[2]);
    
    for (int i =0; i < 3; i++) {
        dotProduct += firstVector[i] * secondVector[i];
    }

    printf("%d\n", dotProduct);
}