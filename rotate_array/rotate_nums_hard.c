#include <stdio.h>
#include <stdlib.h>


void rotate(int* nums, int numsSize, int k){
        // do the rotates
        int num_rotates = k % numsSize;
        int first_index = 0;
        int last_index = numsSize - num_rotates;

        if (num_rotates > 0) {
        // save the last 4 elements in another array
        int last_index_not_change = last_index;
        int count = 0;
        while (count < num_rotates){
            int curr = nums[last_index];
            nums[last_index] = nums[first_index];
            nums[first_index] = curr;
            first_index += 1;
            last_index += 1;
            count += 1;
        }   
        last_index = last_index_not_change;  

        // done rotates, now fix the rest of the list

        // from the first index, until we reach the last element of the
        //keep bringing LI back
        if (first_index < last_index_not_change){

            while (first_index < last_index_not_change){
                while (last_index < numsSize)
                {
                    int curr = nums[last_index];
                    nums[last_index] = nums[first_index];
                    nums[first_index] = curr;
                    first_index += 1;
                    last_index += 1;



                }
                last_index = last_index_not_change;
                
            }
            // first index has passed last index not change
        


            if (first_index > last_index_not_change){

            
                while (first_index < numsSize)
                {
                    int curr = nums[numsSize - 1];
                    nums[numsSize - 1] = nums[first_index];
                    nums[first_index] = curr;
                    first_index += 1;
                }

            }
        

            }
        }

    
}


int main(){

    int arr[] = {1,2,3,4,5,6,7,8, 9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27};
    int* ptr = arr;



    rotate(ptr, 27, 38);

    for (int i = 0; i < 27; i++){
        printf("the number is %d\n", ptr[i]);
    }

    int arr2[] = {-1, -100, 3, 99};
    int* ptr2 = arr2;



    rotate(ptr2, 4, 2);

    for (int i = 0; i < 4; i++){
        printf("the number is %d\n", ptr2[i]);
    }

    


}
// gcc -o rotate_nums rotate_nums.c