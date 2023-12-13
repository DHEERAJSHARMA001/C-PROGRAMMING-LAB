#include <stdio.h>

union student {
    char name[20];
    int roll;
    float perc;
};

int main() {
    union student s;

    printf("Enter the details of the student:\n");
    printf("Name: ");
    scanf("%s", s.name);
    printf("Name: %s\n", s.name);

    printf("Roll number: ");
    scanf("%d", &s.roll);
    printf("Roll number: %d\n", s.roll);

    printf("Percentage: ");
    scanf("%f", &s.perc);
    printf("Percentage: %.2f\n", s.perc);

    return 0;
}