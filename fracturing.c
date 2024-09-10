// *****************************
// fracturing.c
// Author: Mick Hansen
// UCFID: 5327022
// Date: 9/8/2024
// Class: COP 3223, Professor Parra
// Purpose: Take user input points and calculate distance between them and the perimeter,
//          area, width, and height of the space described by those points.
// Input: Points from user
// Output: Points from user, distance, perimeter, area, width, and height
// *****************************

#include <stdio.h>
#include <math.h>

#define PI 3.14159


double calculatePerimeter(double distanceX, double distanceY, int x1, int y1, int x2, int y2)
{
    printf("Point #1 was entered: x1 = %d; y1 = %d\n", x1, y1);
    printf("Point #2 was entered: x2 = %d; y2 = %d\n", x2, y2);


    double total_perimeter = 2*(distanceX + distanceY);

    printf("The perimeter of the city encompassed by your request is %lf\n", total_perimeter);

    return 2;
}


double calculateArea(double distanceX, double distanceY, int x1, int y1, int x2, int y2)
{
    printf("Point #1 was entered: x1 = %d; y1 = %d\n", x1, y1);
    printf("Point #2 was entered: x2 = %d; y2 = %d\n", x2, y2);

    double total_area = distanceX * distanceY;

    printf("The area of the city encompassed by your request is %lf\n", total_area);

    return 2;
}


double calculateWidth(double distanceX, double distanceY, int x1, int y1, int x2, int y2)
{
    printf("Point #1 was entered: x1 = %d; y1 = %d\n", x1, y1);
    printf("Point #2 was entered: x2 = %d; y2 = %d\n", x2, y2);

    double total_width = distanceX;

    printf("The width of the city encompassed by your request is %lf\n", total_width);

    return 2;
}


double calculateHeight(double distanceX, double distanceY, int x1, int y1, int x2, int y2)
{
    printf("Point #1 was entered: x1 = %d; y1 = %d\n", x1, y1);
    printf("Point #2 was entered: x2 = %d; y2 = %d\n", x2, y2);

    double total_height = distanceY;

    printf("The height of the city encompassed by your request is %lf\n", total_height);

    return 2;
}


//calculate distance between given points and call the next functions that use the distances between the points
double calculateDistance(int x1, int y1, int x2, int y2)
{

    printf("Point #1 was entered: x1 = %d; y1 = %d\n", x1, y1);
    printf("Point #2 was entered: x2 = %d; y2 = %d\n", x2, y2);

    double distanceX = fabs(x1 - x2);
    double distanceY = fabs(y1 - y2);
    double total_distance = sqrt((distanceX * distanceX + distanceY * distanceY));

    printf("The distance between the two points is %lf\n", total_distance);

    calculatePerimeter(distanceX, distanceY, x1, y1, x2, y2);
    calculateArea(distanceX, distanceY, x1, y1, x2, y2);
    calculateWidth(distanceX, distanceY, x1, y1, x2, y2);
    calculateHeight(distanceX, distanceY, x1, y1, x2, y2);

    return total_distance;
}


//collect points from user
double askForUserInput(int x1, int y1, int x2, int y2)     //OPTIONAL
{

    scanf("%d", &x1);
    scanf("%d", &y1);
    scanf("%d", &x2);
    scanf("%d", &y2);


    calculateDistance(x1, y1, x2, y2);

    return x1, y1, x2, y2;
}


int main(void)
{
    int x1 = 0;
    int y1 = 0;
    int x2 = 0;
    int y2 = 0;


    askForUserInput(x1, y1, x2, y2);

    return 0;
}