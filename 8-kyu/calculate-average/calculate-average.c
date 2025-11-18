double find_average(const double array[/* length */], unsigned length)
{
  double answer = 0.0f;
  for(int i = 0; i < length; i++)
  {
    answer += array[i] / length;
  }
  return answer;
}