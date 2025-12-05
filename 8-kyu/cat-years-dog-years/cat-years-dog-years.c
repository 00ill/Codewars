typedef struct Human_Cat_Dog_Years {
    unsigned human_years, cat_years, dog_years;
} years;
​
years human_years_cat_years_dog_years(unsigned human) {
  years y;
  y.human_years = human;
  y.cat_years = 15 + 9 * ((human - 1) > 0) + 4 * (human >= 2 ? (human - 2) : 0);
  y.dog_years = 15 + 9 * ((human - 1) > 0) + 5 * (human >= 2 ? (human - 2) : 0);
  return y;
}