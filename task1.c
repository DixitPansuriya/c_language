#include <stdio.h>

int main() {
    int number, first, last, sum;

   
    printf("Enter a number: ");
    scanf("%d", &number);

    
    first = number;
    while (first >= 10) {
        first /= 10;
    }

 
    last = number % 10;

  
    sum = first + last;


    printf("Sum of first and last digit: %d\n", sum);

    return 0;
}
