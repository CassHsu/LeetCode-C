int largestAltitude(int* gain, int gainSize){
    int max = 0;
    int last = 0;

    for (int i = 0; i < gainSize; i++) {
        last = last + gain[i];
        if (last > max) max = last;
    }

    return max;
}
