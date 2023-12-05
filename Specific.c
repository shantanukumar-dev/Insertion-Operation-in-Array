#include <stdio.h>
#include <conio.h>
int main()
{
    int Array[100];
    int size, num, pos;
    printf("Enter the size of the array:\n");
    scanf("%d", &size);
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &Array[i]);
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d Index number element of the array is:%d\n ", i, Array[i]);
    }
    printf("Enter the ne number:\n");
    scanf("%d", &num);
    printf("Enter the ne position:\n");
    scanf("%d", &pos);
    if (pos < 0 || pos > size)
    {
        printf("INVALID POSITION!!!\n");
    }
    else
    {
        for (int i = size - 1; i > pos; i--)
        {
            Array[i + 1] = Array[i];
        }
        Array[pos-1] = num;
        size++;
    } for (int i = 0; i < size; i++)
    {
        printf("%d Index number element of the array is:%d\n ", i, Array[i]);
    }

    getch();
    return 0;
}