/*
* Author: Luis 
* Purpose: Calculates the dimensional weight of a lengthXwidthXheight object
* Name: dwight.c
*/

#include <stdio.h>

int main(void)
{
    int height, length, width, volume, weight;

    height = 8;
    length = 12;
    width = 10;
    volume = height * length * width;
    weight = (volume + 165) / 166; // (dividend / divisor - 1) / divisor == ceil(dividend / divisor)

    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume: (cubic inches) %d\n", volume);
    // or optionally
    printf("Volume: (cubic inches) %d\n", length * width * height); // printf can eval expressions
    printf("Weight: (pounds) %d\n", weight);

    // Version with user input
    printf("---------------------------------");

    int userBoxHeight, userBoxLength, userBoxWidth;
    printf("Enter box height: ");
    scanf("%d", &userBoxHeight);
    printf("Enter box length: ");
    scanf("%d", &userBoxLength);
    printf("Enter box width: ");
    scanf("%d", &userBoxWidth);
    
    int userBoxVolume = userBoxHeight * userBoxLength * userBoxWidth;
    int userBoxWeight = (userBoxVolume + 165) / 166; 
    printf("Volume (cubic inches): %d\n", userBoxVolume);
    printf("Dimensional Weight (pounds\n): %d", userBoxWeight);

    return 0;
}
