#include <stdio.h>

int main() 
{
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int numbers[size];

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) 
	{
        printf("Element %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < size - 1; i++) 
	{
        for (int j = 0; j < size - i - 1; j++) 
		{
            if (numbers[j] > numbers[j + 1]) 
			{
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    printf("Sorted array:\n");
    for (int i = 0; i < size; i++) 
	{
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}

