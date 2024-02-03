int maxFrequencyElements(int* nums, int numsSize) {
    int arr[101] = {0};
    for (int i = 0; i < numsSize; i++) {
        arr[nums[i]]++;
    }

    int mx = 0;
    for (int i = 0; i < 101; i++) {
        if (arr[i] > mx) mx = arr[i];
    }

    int count = 0;
    for (int i = 0; i < 101; i++) {
        if (arr[i] == mx) count += arr[i];
    }

    return count;
}
