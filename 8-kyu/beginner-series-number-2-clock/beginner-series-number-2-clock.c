int past(int hours, int minutes, int seconds) {
  return (hours * 60 * 60 + minutes * 60 + seconds) * 1000;
}