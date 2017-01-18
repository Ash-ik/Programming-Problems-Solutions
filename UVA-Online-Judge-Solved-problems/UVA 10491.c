#include<stdio.h>
#include<string.h>
int main()
{
    double firstCowThenSwapToCar,firstCarThenSwapToCar,totalDoor,remainingDoorToSwap,cows,cars,openedDoors;
    char input[20],*token;
    while(gets(input))
    {
        token=strtok(input," ");
        cows=atoi(token);
        token = strtok(NULL, " ");
        cars=atoi(token);
        token = strtok(NULL, " ");
        openedDoors=atoi(token);
        totalDoor=cows+cars;
        remainingDoorToSwap=totalDoor-openedDoors-1;
        firstCowThenSwapToCar=(cows/totalDoor)*(cars/remainingDoorToSwap);
        firstCarThenSwapToCar=(cars/totalDoor)*((cars-1)/remainingDoorToSwap);
        printf("%.5lf\n",firstCowThenSwapToCar+firstCarThenSwapToCar);
    }
    return 0;

}
