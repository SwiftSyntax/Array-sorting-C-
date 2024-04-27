#include <stdio.h>

int input[5] = {3, 6, 7, 12, 1};
int size = sizeof(input) / sizeof(input[0]);

void sort(int array[], int size);
void printArray(int array[], int size);

int main()
{
    sort(input, size);
    printArray(input, size);

    return 0;
}

void sort(int array[], int size)
{
    for(int i = 0; i < size - 1; i++)
    {
        for(int j = 0; j < size - 1; j++)
        {
            if(array[j] > array[j+1])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

void printArray(int array[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}
