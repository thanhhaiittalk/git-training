#include <stdio.h>

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

int main() {
    int num1 = 5;
    int num2 = 10;

    // Call the add function and store the result
    int result = add(num1, num2);

    // Print the result
    printf("The sum of %d and %d is %d\n", num1, num2, result);

    return 0;
}
