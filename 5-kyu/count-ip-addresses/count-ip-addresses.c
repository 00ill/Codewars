#include <inttypes.h>
#include <stdio.h>
uint32_t ips_between (const char *start, const char *end)
{
  unsigned int S[4];
  unsigned int E[4];
  sscanf(start, "%u.%u.%u.%u", &S[0], &S[1], &S[2], &S[3]);
  sscanf(end, "%u.%u.%u.%u", &E[0], &E[1], &E[2], &E[3]);
  return ((E[0] - S[0]) * 256 * 256 * 256) + ((E[1] - S[1]) * 256 * 256) +((E[2] - S[2]) * 256) +((E[3] - S[3]));
}