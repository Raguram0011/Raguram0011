//if statement
/*#include <stdio.h>

int main() {
    int number = 10;

    if (number > 5) {
        printf("The number is greater than 5.\n");
    }

    return 0;
}*/


//if-else statement
/*#include <stdio.h>

int main() {
    int number = 10;

    // Check if the number is greater than 5
    if (number > 5) {
        printf("The number is greater than 5.\n");
    } else {
        printf("The number is not greater than 5.\n");
    }

    return 0;
}*/


//else-if statement
/*#include <stdio.h>

int main() {
    int number = 10;

    if (number > 10) {
        printf("The number is greater than 10.\n");
    } else if (number < 10) {
        printf("The number is less than 10.\n");
    } else {
        printf("The number is equal to 10.\n");
    }

    return 0;
}*/


//switch statement
/*#include <stdio.h>

int main() {
    int choice;

    printf("Enter a number between 1 and 3: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("You entered 1.\n");
            break;
        case 2:
            printf("You entered 2.\n");
            break;
        case 3:
            printf("You entered 3.\n");
            break;
        default:
            printf("Invalid choice. Please enter a number between 1 and 3.\n");
    }

    return 0;
}*/


//nested if-else
/*#include <stdio.h>

int main() {
    int num = 25;

    if (num > 0) {
        if (num % 2 == 0) {
            printf("The number is positive and even.\n");
        } else {
            printf("The number is positive and odd.\n");
        }
    } else {
        printf("The number is not positive.\n");
    }

    return 0;
}*/


//While loop
/*#include <stdio.h>

int main() {
    int count = 1;

    printf("Counting from 1 to 5 using a while loop:\n");

    while (count <= 5) {
        printf("%d\n", count);
        count++;
    }

    return 0;
}*/


//do-while
/*#include <stdio.h>

int main() {
    int count = 1;

    printf("Counting from 1 to 5 using a do-while loop:\n");

    do {
        printf("%d\n", count);
        count++;
    } while (count <= 5);

    return 0;
}*/


//for loop
/*#include <stdio.h>

int main() {
    printf("Counting from 1 to 5 using a for loop:\n");

    for (int count = 1; count <= 5; count++) {
        printf("%d\n", count);
    }

    return 0;
}*/


//nested for loop
/*#include <stdio.h>

int main() {
    int rows = 3;
    int columns = 3;

    printf("Displaying a pattern using nested for loops:\n");

    // Nested for loops to print a pattern
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= columns; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}*/
