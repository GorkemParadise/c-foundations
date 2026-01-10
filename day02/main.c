#include <stdio.h>
#include <stdbool.h>

int main() {

int x = 10;
int y = 3;

printf("%d\n", x + y); // 13
printf("%d\n", x - y); // 7
printf("%d\n", x * y); // 30
printf("%d\n", x / y); // 3
printf("%d\n", x % y); // 1

int z = 5;
++z;
printf("%d\n", z); // 6
--z;
printf("%d\n", z); // 5

// AND && 
// OR ||
// NOT ! 

bool isProgrammingFun = true;
bool isFishTasty = false;
printf("%d\n", isProgrammingFun);   // Returns 1 (true)
printf("%d\n", isFishTasty);        // Returns 0 (false)

int time1 = 22;
if (time1 < 10) {
    printf("Good morning.");
} else if (time1 < 20) {
    printf("Good day.");
} else {
    printf("Good evening.");
}

int time2 = 20;
(time2 < 18) ? printf("Good day.") : printf("Good evening."); 
// Short If Structure

bool isLoggedIn = true;
bool isAdmin = false;
int securityLevel = 3; 
if (isLoggedIn && (isAdmin || securityLevel <= 2)) {
    printf("Access granted\n");
} else {
    printf("Access denied\n");
}
// Try changing securityLevel and isAdmin to test different outcomes:
// securityLevel 1 = Access granted
// securityLevel 2 = Access granted
// securityLevel 3 = Access denied
// securityLevel 4 = Access denied
// If isAdmin = true, access is granted.

int myNum = 5;
if (myNum % 2 == 0) {
    printf("%d is even.\n", myNum);
} else {
    printf("%d is odd.\n", myNum);
}

int day = 4;
switch (day) {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    case 4:
        printf("Thursday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    case 6:
        printf("Saturday\n");
        break;
    case 7:
        printf("Sunday\n");
        break;
}

return 0;
}