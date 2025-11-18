#include <stdio.h>

void printMessage(void);
void printNumbers(void); 
void voidWithArguments(int a);

int main(void) {

    printMessage();
    printNumbers(); 

    int value = 42;
    voidWithArguments(value);

    return 0;
}

void printMessage(void) {
    printf("A void function takes no arguments, nothing in parentheses.\n");
    printf("It also returns no value, hence the 'void' keyword.\n");
    printf("They are for performing actions, like printing messages.\n");
}

void printNumbers(void) {
    int a = 5;
    int b = 10;
    int c = a + b;
    printf("The sum of %d and %d is: %d\n", a, b, c);   
}

void voidWithArguments(int a) {
    printf("This function takes an integer argument: %d\n", a);
    printf("We now have more control over our function\n");
}