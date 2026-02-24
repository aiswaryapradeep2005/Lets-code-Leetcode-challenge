#include <stdio.h>
#include <stdlib.h>

int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    
    int i;
    *returnSize = 2 * numsSize;
    int* result = (int*)malloc((*returnSize) * sizeof(int));
    for(i = 0; i < numsSize; i++){
        result[i] = nums[i];
        result[i + numsSize] = nums[i];
    }
    
    return result;
}
