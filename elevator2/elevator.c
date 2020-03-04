#include<stdio.h>
#include<stdlib.h>
#define NUMBER_OF_FLOORS 10

int floorsArray[NUMBER_OF_FLOORS];
int targetArray[NUMBER_OF_FLOORS];
int *input;
int currentFloor;
int targetFloor;
int a;

void checkInput();
void moveElevator();
void fillArray();
void printArray();
void Sort();

void main()
{
    fillArray();
    currentFloor = floorsArray[0];
    //for (int i = 0; i < 2; i++)
    while (1)
    {
        checkInput();     
        moveElevator();       
    }
}

void checkInput()
{
    printf("The current floor is %d. ", currentFloor);
    printf("The top floor is %i. ", sizeof(floorsArray)/sizeof(floorsArray[0]));
    printf("Which floor would you like to go to?\n");
    
    for (size_t i = 0; i < NUMBER_OF_FLOORS; i++)
    {
        scanf("%d", &input);
        targetArray[i] = *input;
        printf("%d", *input);

        if (targetArray[i] <= 0 || targetArray[i] > NUMBER_OF_FLOORS)
        {
            printf("Invalid input. Please try again.\n\n");
            i--;
        }

        if (i != NUMBER_OF_FLOORS)
        {
            printf("Any more input? If none enter '666'\n");
        }    
    }
    Sort();
}

void moveElevator()
{
    for (int i = 0; i < NUMBER_OF_FLOORS; i++)
    {
        if (targetArray[i] != NULL)
        {
            targetFloor = targetArray[i];
            printf("\nGoing to floor %d.\n", targetFloor);
            while (currentFloor != targetFloor)
            {
                if (currentFloor > targetFloor)
                {
                    currentFloor--;
                }
                else if (currentFloor < targetFloor)
                {
                    currentFloor++;
                }
                printf("%d\n", currentFloor);  
            }
            printf("DING! We have arrived.\n\n");
        }
    }
}

void fillArray()
{
    for (int i = 0; i < NUMBER_OF_FLOORS; i++)
    {
        floorsArray[i] = i + 1;
    }
}

void printArray()
{
    for (int i = 0; i < NUMBER_OF_FLOORS; i++)
    {
       printf("%d\n", floorsArray[i]);
    }
}

void Sort()
{
    for (int i = 0; i < NUMBER_OF_FLOORS; ++i) 
    {
        for (int j = i + 1; j < NUMBER_OF_FLOORS; ++j)
        {
 
            if (targetArray[i] > targetArray[j]) 
            {
                a =  targetArray[i];
                targetArray[i] = targetArray[j];
                targetArray[j] = a;
            }
 
        }

    }
}