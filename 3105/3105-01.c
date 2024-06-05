int longestMonotonicSubarray(int* nums, int numsSize) {
    int mx = 1;
    int up = 1;
    int dn = 1;

    for (int i = 1; i < numsSize; i++) {
        if (nums[i] > nums[i - 1]) {
            up++;
            dn = 1;
        } else if (nums[i] < nums[i - 1]) {
            dn++;
            up = 1;
        } else {
            up = 1;
            dn = 1;
        }

        mx = fmax(mx, fmax(up, dn));
    }

    return mx;
}
