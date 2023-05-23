#include <stdio.h>
#include <stdlib.h>




bool containsDuplicate(int* nums, int numsSize){

    // need a head node, use it to traverse the tree each time

    for (int i  = 0; i < numsSize; i++){

    }

}



int main(){

    int arr[] = {1,2,3,4,5,6,7,8, 9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27};
    int* ptr = arr;



    bool ans = containsDuplicate(ptr, 27);

    printf("If true, then this is 1: %d\n", ans);
    
    printf("\n\n\n\n");


}
// gcc -o contains_dup contains_dup.c