#include <stdbool.h>
​
bool better_than_average(const int class_points[/* class_size */], int class_size, int your_points) {
    int num = 0;
    for(int i = 0; i < class_size; i++)
    {
      num += your_points - class_points[i];
    }
    if(num <= 0) return false;
    return true;
}