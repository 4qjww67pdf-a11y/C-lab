#include <stdio.h>

int main() {
    float marks, percentage;
    int index;

    printf("Enter your marks out of 800: ");
    scanf("%f", &marks);

    percentage = (marks / 800) * 100;
    printf("\nYour percentage is %.2f%%\n", percentage);

    index = percentage / 10; 

    switch (index) {
        case 10:
        case 9:
        case 8:
            printf("Distinction\n");
            break;
        case 7:
        case 6:
            printf("First Division\n");
            break;
        case 5:
            printf("Second Division\n");
            break;
        case 4:
            printf("Third Division\n");
            break;
        default:
            printf("Fail\n");
            break;
    }

    return 0;
}
