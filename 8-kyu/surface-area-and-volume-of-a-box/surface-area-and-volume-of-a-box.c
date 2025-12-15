typedef struct AV_PAIR {
  unsigned area;
  unsigned volume;
} area_volume_pair;
​
area_volume_pair get_size(unsigned width, unsigned height, unsigned depth) {
  
    //  <----  hajime!
  
    return (area_volume_pair) { .area = 2 * (width * height) + 2 * (width * depth) + 2 * (height * depth), .volume = width * height * depth};
​
}