int gimme (const int triplet[3])
{
  if(triplet[0] < triplet[1] && triplet[0] > triplet[2]) return 0;
  if(triplet[0] > triplet[1] && triplet[0] < triplet[2]) return 0;
  if(triplet[1] < triplet[0] && triplet[1] > triplet[2]) return 1;
  if(triplet[1] > triplet[0] && triplet[1] < triplet[2]) return 1;
  if(triplet[2] < triplet[1] && triplet[2] > triplet[0]) return 2;
  if(triplet[2] > triplet[1] && triplet[2] < triplet[0]) return 2;
}