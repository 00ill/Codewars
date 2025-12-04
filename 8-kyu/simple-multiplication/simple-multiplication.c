int simple_multiplication(int number) {
    if(number & 1) return number * 9;
    return number * 8;
}