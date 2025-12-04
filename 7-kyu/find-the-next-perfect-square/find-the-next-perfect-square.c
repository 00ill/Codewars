#include <math.h>
long int findNextSquare(long int sq)
{
  double num = sqrt(sq);
  if(num != roundf(num)) return -1;
  else return (num + 1) * (num + 1);
  
}