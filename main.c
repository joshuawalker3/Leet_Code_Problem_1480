#include <stdio.h>
#include <stdlib.h>

int* runningSum(int* nums, int numsSize, int* returnSize){
    int runningSum = 0;

    int* result = (int*)malloc(sizeof(int) * numsSize);

    for(int i = 0; i < numsSize; i++) {
        runningSum += nums[i];
        result[i] = runningSum;
    }

    *returnSize = numsSize;

    return result;
}

int main() {
    int x[5] = { 1, 2, 3, 4, 5};
    int* ptr = x;
    int* newPtr = (int*)malloc(sizeof(int*));
    int* resultArray;
    int numsSize = 5;

    resultArray = runningSum(ptr, numsSize, newPtr);

    for (int i = 0; i < numsSize; i++) {
        printf("%d, ", resultArray[i]);
    }

    free(resultArray);
    free(newPtr);
}
