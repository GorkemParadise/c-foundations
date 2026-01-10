#define BOOL char
#define FALSE 0
#define TRUE 1
// C does not have a boolean type so we define it with char.
// #include <stdbool.h>

#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    printf("Hello, World!\nMy name is Gorkem\nI'm 20\n");

    int myNum = 10;
    printf("%d\n", myNum);
    // decimal integer

    float pi = 3.14;
    printf("%f\n", pi);
    // floating point, 6-7 decimal digits (after comma)

    double e = 19.99;
    printf("%lf\n", e);
    // floating point, 15 decimal digits (after comma)

    char ch = 'G';
    printf("%c\n", ch);
    // character

    char name[] = "Gorkem";
    printf("%s\n", name);
    // string

    long int n = 100000000000000000;
    printf("%ld\n", n);
    // long integer

    printf("My fav number is %d and my name is %s\n", myNum, name);

    int midterm1 = 85;
    int midterm2 = 93;
    midterm1 = midterm2;
    // midterm1 is now 93, instead of 85

    int x = 5, y = 6, z = 10;
    // int x, y, z; 
    // x = y = z = 20

    int sum = x+y+z;
    // print sum or x+y+z

    int p0 = 2e6;
    // 2 * 10^6

    float myFloatNum = 3.5;
    printf("%.2f\n", myFloatNum); // Only show 2 digit

    int k1;
    float k2;
    double k3;
    char k4;
    printf("Byte: %zu\n", sizeof(k1)); // Memory of int: 2 or 4 bytes
    printf("Byte: %zu\n", sizeof(k2)); // Memory of float: 4 bytes
    printf("Byte: %zu\n", sizeof(k3)); // Memory of double: 8 bytes
    printf("Byte: %zu\n", sizeof(k4)); // Memory of char: 1 byte

    // Example 
    int count = 50;
    float price = 17.59;
    float total = count * price;
    char unit = 'T';
    printf("Total cost = %.2f %c\n", total, unit);

    int m1 = 5, m2 = 2;
    int sum1 = 5 / 2; // 2
    float sum2 = (float) 5 / 2; // 2.500000
    // Example 
    int maxScore = 500;
    int userScore= 329;
    float percentage = (float) userScore / maxScore * 100;
    printf("User's percentage is %.2f\n", percentage);

    const int ONEHOUR = 60;
    // It is constant now, we can not change it.
    
    return 0;
}
    // return 0 is succesfull.
    // the other returns is some error.
