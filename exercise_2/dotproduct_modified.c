#include <stdio.h>
#include <stdlib.h>

int dotproduct(int n, int *firstVector, int *secondVector) {

    int dotProduct = 0;

    for (int i =0; i < n; i++) {
        dotProduct += firstVector[i] * secondVector[i];
    }
    return dotProduct;
}

void retrieveData(int n, int *vector){
    printf("enter vector numbers: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vector[i]);
    }
}


int main() {
    int n, result; 
    int *firstVector, *secondVector;

    printf("enter length of vector: ");
    scanf("%d", &n);

    firstVector = (int *) malloc(n*sizeof(int));
    secondVector = (int *) malloc(n*sizeof(int));
    retrieveData(n,firstVector);
    retrieveData(n,secondVector);

    /*
    printf("Enter %d components of teh first vector: ", n);
    scanf("%d %d %d", &firstVector[0], &firstVector[1], &firstVector[2]);

    printf("Enter %d components of the second vector: ", n);
    scanf("%d %d %d", &secondVector[0], &secondVector[1], &secondVector[2]);
    */
    
    result = dotproduct(n, firstVector, secondVector);

    printf("%d\n", result);
    free(firstVector);
    free(secondVector);
    
}