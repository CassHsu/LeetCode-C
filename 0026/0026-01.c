int removeDuplicates(int* nums, int numsSize){
    if (numsSize == 0) return 0;
    
    int prev = 0;
    for (int curr = 1; curr < numsSize; curr++) {
        if (nums[prev] != nums[curr]) {
            prev++;
            nums[prev] = nums[curr];
        }
    }
    
    return prev + 1;
}
