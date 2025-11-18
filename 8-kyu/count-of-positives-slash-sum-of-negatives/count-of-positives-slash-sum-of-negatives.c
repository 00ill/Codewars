#include <stddef.h>
​
// In C, instead of returning an array, you are expected to
// assign the results to the two output parameters
// `positives_count` and `negatives_sum`.
// If the input is an empty array, you must assign 0 to both.
​
void count_positives_sum_negatives(
    const int values[/* count */], size_t count,
    int *positives_count, int *negatives_sum
)
{
    (*positives_count) = 0;
    (*negatives_sum) = 0;
    for(int i = 0; i < count; i++)
    {
      if(values[i] > 0)
      {
        (*positives_count)++;
      }
      else if(values[i] < 0)
      {
        (*negatives_sum) += values[i];
      }
    }
}