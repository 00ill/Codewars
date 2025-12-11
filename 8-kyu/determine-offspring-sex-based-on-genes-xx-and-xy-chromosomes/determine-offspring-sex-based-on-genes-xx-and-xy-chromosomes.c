const char *chromosomeCheck(const char chromosomes[2 + 1])
{
  return strchr(chromosomes, 'Y') ? "Congratulations! You're going to have a son." : "Congratulations! You're going to have a daughter.";
}