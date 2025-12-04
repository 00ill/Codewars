#include <stdbool.h>
​
bool zero_fuel(double distance_to_pump, double mpg, double fuel_left)
{
  if(distance_to_pump <= mpg * fuel_left) return true;
    return false;
}