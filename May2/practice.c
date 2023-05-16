#include <stdio.h>
# include <math.h>

void printn(char name[], int age);
int print_numbers(int nums[5]);
int recursive(int n);

int main() {

     printn("Yasamin", 23);

  int numbers[5] = {1, 2, 3, 4, 5};
  int result = print_numbers(numbers);

  printf("result is %d\n", result);

  int res = recursive(10);

  printf("result of recursive is %d\n", res);

  printf("float is %f\n", pow(4, 2));

  return 0;


}
 
//main functions executes code

int recursive(int n){
    if (n <= 0){
        return 0;
    }
    else {// n > 0
        return n + recursive(n-1);
    }

}


void printn(char name[], int age){
    printf("I am %s\n and I am %d years old\n", name, age);
}


int print_numbers(int nums[5]){
    for (int i = 0; i < 5; i++){
        printf("the number is %d\n", nums[i]);

    }
    return 1 + 5;
}



// struct mystruct{
//     int mynum;
//     char mychar;
// };