unsigned sequence_sum(unsigned start, unsigned end, unsigned step)
{
    unsigned answer = 0;
    for(start; start <= end; start += step)
      answer += start;
    return answer;
}