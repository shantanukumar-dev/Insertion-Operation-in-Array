#include <stdio.h>
#include <conio.h>
int main()
{
    int Array[100];//DECLARATION OF THE ARRAY WHICH IS TO BE RESERVED
    int size;//WHIXH IS TO BE USED
    printf("Enter the size of the Array:\n");
    scanf("%d", &size);
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++)//INSERT HT EELEMENTS OF ARRAY FROM THE USER
    {
        scanf("%d", &Array[i]);
    }
    for (int i = 0; i < size; i++)//PRINT THE ELEMENTS OF ARRAY
    {
        printf("The %d index number elementd of thr array is %d\n", i, Array[i]);
    }
    int num;//DECLARATION OF THE NEW NUMBER
    printf("Enter the new number:\n");
    scanf("%d", &num);
    for (int i = size - 1; i < 0; i++)//LOGIC FOR SWAPPING
    {
        Array[i + 1] = Array[i];
    }
    Array[0] = num;
    size++;
    for (int i = 0; i < size; i++)//PRINT THE ELEMENTS OF THE ARRAY
    {
        printf("The %d index number elementd of thr array is %d\n", i, Array[i]);
    }
    getch();
    return 0;
}