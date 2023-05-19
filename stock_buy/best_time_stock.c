#include <stdio.h>

//return the max of 0, max profit

    // decision to buy the current item (buy ptr):
        // if this item has strictly larger price today as compared to tomorrow, move pointer to next element (it's better if I buy tomorrow's stock)
        // otherwise, buy this item because I will gain some profit

    // decision to sell the current item:
        // have 2 pointers: next, and next_next
        //if next is larger than next_next, then sell at the next pointer day, if next_next is larger, increment next and next_next, check again, 
        // sell it at the next that is the smallest value, or sell it at the last list element (most profit because list must be increasing)


int maxProfit(int* prices, int pricesSize){
    int total_profit = 0;

    

    if (pricesSize > 2){
        // index of prices location
        int today = 0;
        int next = 1;
        int next_next = 2;
        // go until the third pointer reaches the end (one after the last element) of the list
        while (next < pricesSize){ // TODO: remember to check if next_next is not out of range

            if (prices[next] < prices[today]){
                today = next;
                next = next_next;
                next_next += 1;


            } else { // we bought today's stock and want to know when to sell it
                if (next_next >= pricesSize){ // we are at the end
                    // sell the stock tomorrow, and return
                    int net_profit_today = prices[next] - prices[today]; // either 0 or positive
                    total_profit += net_profit_today;
                    today = next;
                    next = next_next; // then in the next iteration, we will return


                }
                else{
                    if (prices[next_next] < prices[next]){ // sell at next

                        int net_profit_today = prices[next] - prices[today]; // either 0 or positive
                        total_profit += net_profit_today;
                        
                        today = next;
                        next = next_next; 
                        next_next += 1;
                        




                    }else{ // move next and next_next forward
                        next = next_next; 
                        next_next += 1;

                    }

                }

            }
            

        }
        return total_profit;

    }
    //  consider lists of stock days that are less than or equal to 2:
    else{
        if (pricesSize == 2 && prices[0] < prices[1]){
            total_profit = prices[1] - prices[0];

            return total_profit;
        }
        else{

            return 0; // should not buy stock if there is only 1 day or 0 days.
        }

    }


}

int main(){

    int arr[] = {2, 1, 4, 5, 2, 9, 7};
    int* ptr = arr;


    int m = maxProfit(ptr, 7);
    printf("the number is %d\n", m);





}
// gcc -o best_time best_time_stock.c