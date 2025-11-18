#include <stdio.h>


void printWords();
void printSpecificWords(char *word);
int returnInteger(int n);
int addTwoIntegers(int a, int b); // Unused function pr
double returnDouble(double d); 

int main(void) {

    printf("Introduction to Functions.\n");

    printWords();

    char word[] = "Michael";
    printSpecificWords(word);

    int x = 100;
    int result = returnInteger(x);
    printf("The returned number is: %d\n", result);

    int valueOne = 10;
    int valueTwo = 20;
    int sum = addTwoIntegers(valueOne, valueTwo);
    printf("The sum of %d and %d is: %d\n", valueOne, valueTwo, sum);

    double y = 99.99;
    double dResult = returnDouble(y);
    printf("The returned double is: %.2f\n", dResult);

    return 0;
}

void printWords() {
    printf("Function to print words.\n");
}

void printSpecificWords(char *word) {
    printf("Function to print specific word: %s\n", word);
}

int returnInteger(int n) {
    return n;
}

int addTwoIntegers(int a, int b) {
    return a + b;
}

double returnDouble(double d) {
    return d;
}
