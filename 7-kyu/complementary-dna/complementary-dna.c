/* Note:
    Allocate memory yourself!
*/
​
#include <stdlib.h>
#include <string.h>
char *dna_strand(const char *dna)
{
    size_t len = strlen(dna);
    char *answer = calloc(len + 1, sizeof(char));
    for(int i = 0; i < len; i++)
    {
      if(dna[i] == 'A') answer[i] = 'T';
      if(dna[i] == 'T') answer[i] = 'A';
      if(dna[i] == 'G') answer[i] = 'C';
      if(dna[i] == 'C') answer[i] = 'G';
    }
    return answer;
}