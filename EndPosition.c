#include <stdio.h>
#include <conio.h>
int main()
{
    int Array[50];
    int size;
    printf("Enter the size of the array:\n");
    scanf("%d", &size);
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &Array[i]);
    }
    for (int i = 0; i < size; i++)
    {
        printf("The %d index number element of the array is %d\n", i, Array[i]);
    }
    int num;
    printf("Enter the ne numner\n");
    scanf("%d", &num);
    for (int i=size-1; i >size-2 ; i++)
    {
        Array[i+1]=Array[i];
    }
    
    Array[size+1] = num;
    size++;
    for (int i = 0; i < size; i++)
    {
        printf("The %d index number element of the array is %d\n", i, Array[i]);
    }
    getch();
    return 0;
}