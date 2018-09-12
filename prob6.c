#include <stdio.h>
int main() {
    int i;
    int sumOfSquares;
    int squareOfSum; 
    for (i = 1; i <= 100; i++) {
        sumOfSquares += i * i;
        squareOfSum += i;
    }
    squareOfSum *= squareOfSum;
    printf("%d", squareOfSum - sumOfSquares);
    printf("Sum Of Squares: %d \n Square Of Sum: %d", sumOfSquares, squareOfSum);
    return 0;
}
