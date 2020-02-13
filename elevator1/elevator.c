#include<stdio.h>
#include<stdlib.h>
#define NUMBER_OF_FLOORS 10

int floorsArray[NUMBER_OF_FLOORS];
int currentFloor;
int input;
int targetFloor;

void checkInput();
void moveElevator();
void fillArray();
void printArray();

void main()
{
    fillArray();
    currentFloor = floorsArray[0];
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
    scanf("%d", &input);
    
    if (input == 0 || input > sizeof(floorsArray)/sizeof(floorsArray[0]))
    {
        printf("Invalid input. Please try again.\n");
        return;
    }
    else
    {
        printf("Going to floor %d.\n", input);
        targetFloor = input;
    }
}

void moveElevator()
{
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
    printf("DING! We have arrived.\n");
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