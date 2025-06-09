#include "utils.h"
#include "stack.h"

void reverse(int *nums, unsigned int size)
{
	// Your code here
	for (unsigned int i = 0; i < size / 2; ++i)
    {
        int temp = nums[i];
        nums[i] = nums[size - 1 - i];
        nums[size - 1 - i] = temp;
    }
}