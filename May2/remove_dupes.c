#include <stdio.h>

void remove_dupe_int(int* nums, int i, int* k_ptr);

int removeDuplicates(int* nums, int numsSize){
    
    //first index of nums
    int i = 0;
    int k = numsSize;
    int* k_ptr = &k;

    // the previous item with respect to the ith element
    // -101 is never in the list
    int prev = -101;

    while (i < *k_ptr){ // stop when i is not at an element
        if (nums[i] == prev){
            //remove the current element
            //invariant: current item == previous item
            // change list, and decrement numsSize
            remove_dupe_int(nums, i, k_ptr);
            



        }
        else{
        // invariant: current item was not repeated before
        prev = nums[i];
        i += 1;
        }



    }
    return *k_ptr;

}

void remove_dupe_int(int* nums, int i, int* k_ptr){
    int k = *k_ptr;
    while(i <= k - 2){
        nums[i] = nums[i + 1];
        i += 1;


    }
    // return the new size of nums with one less item
    *k_ptr = k - 1;


}

int main(){

    int arr[] = {1, 1, 2};
    int* ptr = arr;


    int k = removeDuplicates(ptr, 3);
    printf("the number is %d\n", k);

    for (int i = 0; i < 3; i++){
        printf("%d ", arr[i]);
    }



}