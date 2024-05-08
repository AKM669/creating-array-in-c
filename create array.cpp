#include <stdio.h>

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);


    int numbers[size];

    printf("Enter elements:\n");
    for (int i = 0; i < size; i++) {
        printf("Element ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("The elements of the array are:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}

