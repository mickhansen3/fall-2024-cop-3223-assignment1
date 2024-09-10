// *****************************
// fracturing.c
// Author: Mick Hansen
// UCFID: 5327022
// Date: 9/8/2024
// Class: COP 3223, Professor Parra
// Purpose:
// Input:
// Output:
// *****************************

#include <stdio.h>
#include <math.h>

#define PI 3.14159


double askForUserInput(int x1, int y1, int x2, int y2)     //OPTIONAL
{
    

    scanf("%d", &x1);
    scanf("%d", &y1);
    scanf("%d", &x2);
    scanf("%d", &y2);

    printf("(%d, %d), (%d, %d)\n", x1, y1, x2, y2);

    return x1, y1, x2, y2;
}


double calculatePerimeter(double distanceX, double distanceY, int x1, int y1, int x2, int y2)
{
    printf("(%d, %d)", x1, y1);
    printf("(%d, %d)", x2, y2);


    double total_perimeter = 2*(distanceX + distanceY);

    printf("the perimeter is %lf\n", total_perimeter);

    return 0;
}

double calculateArea(double distanceX, double distanceY, int x1, int y1, int x2, int y2)
{
    printf("(%d, %d)", x1, y1);
    printf("(%d, %d)", x2, y2);

    double total_area = distanceX * distanceY;

    printf("the total area is %lf\n", total_area);

    return 0;
}

double calculateWidth(double distanceX, double distanceY, int x1, int y1, int x2, int y2)
{
    printf("(%d, %d)", x1, y1);
    printf("(%d, %d)", x2, y2);

    return 0;
}

double calculateHeight(double distanceX, double distanceY, int x1, int y1, int x2, int y2)
{
    printf("(%d, %d)", x1, y1);
    printf("(%d, %d)", x2, y2);

    return 0;
}


double calculateDistance(int x1, int y1, int x2, int y2)
{

    printf("(%d, %d)", x1, y1);
    printf("(%d, %d)", x2, y2);

    double distanceX = x1 - x2;
    double distanceY = y1 - y2;
    double total_distance = sqrt((distanceX * distanceX + distanceY * distanceY));

    printf("total distance is %lf\n", total_distance);

    //double perimeter = calculatePerimeter(distanceX, distanceY, x1, y1, x2, y2);
    //double area = calculateArea(distanceX, distanceY, x1, y1, x2, y2);
    //double width = calculateWidth(distanceX, distanceY, x1, y1, x2, y2);
    //double height = calculateHeight(distanceX, distanceY, x1, y1, x2, y2);

    return total_distance;
}


int main(void)
{
    int x1 = 0;
    int y1 = 0;
    int x2 = 0;
    int y2 = 0;



    askForUserInput(x1, y1, x2, y2);

    printf("The given points are (%d, %d) and (%d, %d)\n", x1, y1, x2, y2);

    
    //calculateDistance(x1, y1, x2, y2);

    //calculatePerimeter();
    //calculateArea();
    //calculateWidth();
    //calculateHeight();

    return 0;
}