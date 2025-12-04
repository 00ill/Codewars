enum tool {ROCK, PAPER, SCISSORS};
enum outcome {P1_WON, P2_WON, DRAW};
​
enum outcome rps (enum tool p1, enum tool p2)
{
  if((p1 - p2 + 3) % 3 == 1) return P1_WON;
  if((p1 - p2 + 3) % 3 == 2) return P2_WON;
  return DRAW;
}