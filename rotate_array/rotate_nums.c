#include <stdio.h>
#include <stdlib.h>


void rotate(int* nums, int numsSize, int k){
        int* not_rotated = (int*)malloc(numsSize * sizeof(int)); 

        int i;
        for (i = 0; i < numsSize; i++) {
            *(not_rotated + i) = *(nums + i); // Copy each element to the new array
        }
        int num_rotates = k % numsSize;

        int last_index = numsSize - num_rotates;

        int nums_i = 0;
        for (int not_rotated_i = last_index; not_rotated_i < numsSize; not_rotated_i++){
            nums[nums_i] = not_rotated[not_rotated_i];
            nums_i += 1;
        }
        int not_rotated_j = 0;
        for (nums_i; nums_i < numsSize; nums_i++){
            nums[nums_i] = not_rotated[not_rotated_j];
            not_rotated_j += 1;
        }
}




int main(){

    int arr[] = {1,2,3,4,5,6,7,8, 9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27};
    int* ptr = arr;



    rotate(ptr, 27, 38);

    for (int i = 0; i < 27; i++){
        printf("the number is %d\n", ptr[i]);
    }
    printf("\n\n\n\n");
    int arr2[] = {-1, -100, 3, 99};
    int* ptr2 = arr2;



    rotate(ptr2, 4, 2);

    for (int i = 0; i < 4; i++){
        printf("the number is %d\n", ptr2[i]);
    }

    


}
// gcc -o rotate_nums rotate_nums.c