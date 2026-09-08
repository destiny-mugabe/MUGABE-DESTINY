// (Geometry: points in triangle?) Suppose a right triangle is placed in a plane. The right-angle point is at (0, 0), and the other two points are at
// (200, 0), and (0, 100).
// Write a program that prompts the user to enter a point with
// x- and y-coordinates and determines whether the point is inside the triangle. Here
// are some sample runs:

// y-intercept

// point values should not be negative
// they value should not be greater or less than the value given by y = mx + c
// 0 <= x <= 10
// 0 <= y <= mx + c
#include <iostream>

//import std;

int main() // read name and age
{
    std::cout << "Please enter a coordinate pair value: \n";

    // Initialize coordinate values
    double x1 = 0;
    double y1 = 0;

// Read values first before using them in calculations
    std::cin >> x1 >> y1;

    double gradient = 0;
    double x_max = 100;
    double y_max = 200;
    double x_min = 0;
    double y_min = 0;

    // Compute gradient
    gradient = (y_max - y_min) / (x_max - x_min);

    // y = mx + c
    double y_intercept = y_max - (gradient * x_min);
    double y_extrapolate = (gradient * x1) + y_intercept;


    if ((x_min <= x1 && x1 <= x_max) &&
        // (y_min <= y1 && y1 <= y_max) &&
        (y_min <= y1 && y1 <= y_extrapolate))
        std::cout<<"Point (" << x1 << ", " << y1 << ") lies in triangle\n";
    else
        std::cout<<"It does not lie in the triangle\n";

    return 0;
}

// Try
// Consider an irregularly shaped region defined by a number of
// coordinates that form its boundary. Write a program to determine
// whether a given point lies within the region.

// Expand the program to identify and output all points in a given
// set of coordinates that lie within the specified region.