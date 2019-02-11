#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 30;
    int *pAge = &age;

    printf("%d", *&*pAge);

    return 0;
}


/* Here I am taking advice from my mentor and will be using comments below to 
    play out the step by step process of the for loop so I can actually prove to 
    myself that I can better understand what it is I am seeing in action */
int is13Orphans(int* hand) {
    // Here we have set up an integer array/list.
    int orphanTiles[13] = {1,9,10,18,19,27,28,29,30,31,32,33,34};
    // Setting some variables for a counter / iterators.
    int duplicate = 0;
    int i, j;
    // Checking to see if we've gotten mixed up and didn't receive a proper hand.
    if (hand == NULL){
        return -1;
    }
    // It's impossible to have a nine gates hand without the first index being a 1
    // (Under the structure we use to get the numbers.) so if this is NOT 1, then we have
    // no nine gates and no point to continue.
    if (hand[0] != 1){
        return 0;
    }
    
    
    // Here we begin trying to understand this code.
    // Step 1: for loop, using i and j (at index 1 because index 0 MUST be accounted for
    // Before continuing to this point in the code so it's pointless to check (I believe)
    // We have i and j because we're doing a nested ifs within our for loop
    
    // Begin: For each loop, we will initially add 1 to i and j when completed (i++; j++)
    // We will loop 12 times (1-12).
    for (i = 1, j = 1; i < 13; i++, j++) {
        // If the value of hand[i] IS the value of orphanTiles[j], then we loop again adding 1 to i and j.
        // If the value of hand[i] is NOT the value of orphanTiles[j], move into the next if.
        if (hand[i] != orphanTiles[j]) {
            // If that value of hand[i] is also not equal to the value of orphanTiles[j - 1(1 index before)] then quit the function. We're done.
            if (hand[i] != orphanTiles[j - 1]) {
                return 0;
            }
            // If however... initially the value of hand[i] ISNT orphanTiles[j], but it IS the value of orphanTiles[j-1]
            // Then we're going to add 1 to the duplicate integer, and we're going to subtract j (in regards to the for loop, by 1)
            // And restart the loop.
            else {
                duplicate++;
                j--;
            // All is done, restart loop.
            }
        }
    }
    
    if (hand[13] == 34){
        return 0;
    }
    
    if (duplicate > 1){
        return 0;
    }
    
    return 1;
}
        
    // Now, from start to finish. We will use an example of a hand and orphanTiles to demonstrate.
    // hand[] = {1, 9, 10, 10, 18, 19, 27, 28, 29, 30, 31, 32, 33, 34} (We drew the 10 to win)
    // orphanTiles[] = {1, 9, 10, 18, 19, 27, 28, 29, 30, 31, 32, 33, 34} (Holding the tiles.)
    
    // Begin: i = 1, j = 1
    // hand[1] = 9 | orphanTiles[1] = 9 >> The loop ignores the if statement and comes back to start.
    // Begin: i = 2, j = 2
    // hand[2] = 10 | orphanTiles[2] = 10 >> The loop ignores the if statement and comes back to start.
    // Begin: i = 3, j = 3
    // hand[3] = 10 | orphanTiles[3] = 18 >> The if statement is now TRUE (hand[i] != orphanTiles[j]), we move inward.
    // hand[3] = 10 | orphanTiles[3 - 1] = 10 >> The 2nd if statement is now FALSE (hand[i] != orphanTiles[j - 1]). Therefore, we hit else.
    // else: duplicate++ (duplicate is now 1);
    // j-- (j is now 2 before the loop ++'s and restarts)
    // Begin: i = 4 | j = 3 ?
    // hand[4] = 18 | orphanTiles[j] = 18 - Loop restarts
    // Begin: i = 5 | j = 4
    // hand[5] = 19 | orphanTiles[4] = 19 - Loop restarts
    // Begin: i = 6 | j = 5
    // hand[6] = 27 | orphanTiles[5] = 27 - Loop restarts
    // Begin: i = 7 | j = 6
    // hand[7] = 28 | orphanTiles[6] = 28 - Loop restarts
    // ...
    // ... Loop continues in this method for some time.
    // ...
    // Begin: i = 12 | j = 11
    // hand[12] = 33 | orphanTiles[11] = 33 - Loop ends? Because i would be 13 now, ending the loop.
    // (One note about why the loop only goes to 12 and not 13.)
    // After this loop (outside the loop) it does and if to check if hand[13] is 34 or not. If it isn't, return 0. 
    // One final if to check if duplicate is > 1. The 13 orphans CANNOT ever have more than 1 pair since it is 13 unique tiles and 1 duplicate tile.
    // Therefore if we found a 2nd duplicate during our code. It would stop because it would return 0 once it finds out that duplicate = 2 or more.
    
    
    // Now let's try again, but with an couple incorrect hands styles. 
    // One will have 2 pairs, one will have a triplet, and one will just be a regular winning hand or something similar.
    
    // Sample 1: two pairs. ((*NOTE*: I don't know if this loop would have run because hand[13] != 34 but regardless I"m going to walk through the loop specifically.))
    
    // hand[] = {1, 9, 10, 10, 18, 19, 27, 27, 28, 29, 30, 31, 32, 33}
    // orphanTiles[] = {1, 9, 10, 18, 19, 27, 28, 29, 30, 31, 32, 33, 34} (Holding the tiles.)
    
    // Begin: i = 1, j = 1
    // hand[1] = 9 | orphanTiles[1] = 9 - Move to next iteration
    // Begin: i = 2, j = 2
    // hand[2] = 10 | orphanTiles[2] = 10 - Move to next iteration
    // Begin: i = 3, j = 4
    // hand[3] = 10 | orphanTiles[3] = 18 - We now have matched our conditional, move in one step.
    // hand[3] = 10 | orphanTiles[3 - 1] = 10 - Duplicate++ > j-- | move to next iteration.
    // Begin: i = 4 | j = 3
    // hand[4] = 18 | orphanTiles[3] = 18 - Move to next iteration
    // Begin: i = 5 | j = 4
    // hand[5] = 19 | orphanTiles[4] = 19 - Move to next iteration
    // Begin: i = 6 | j = 5
    // hand[6] = 27 | orphanTiles[5] = 27 - Move to next iteration
    // Begin: i = 7 | j = 6
    // hand[7] = 27 | orphanTiles[6] = 28 - We have matched our conditional > Move in one step.
    // hand[7] = 27 | orphanTiles[6 - 1] = 27 - Duplicate++ > j-- | Duplicate = 2 (I believe with what Mentor was saying about short circuiting this would be the end? I'm not sure but this now matched the conditional of if (duplicate > 1) { return 0; }
    // hand[8] = 28 | orphanTiles[6] = 28 - Move to next iteration
    
    
    /*
    /////////////////////////////////////////////////////////////////////////
    */
    
    
    // sample 2: triplet
    // hand[] = {1, 9, 9, 9, 10, 18, 19, 27, 28, 29, 30, 31, 32, 33} (This hand does not technically meet the criteria for the hand[13] != 34 and would probably return 0 there, but I"m not 100% sure on the flow of everything and the short circuit. consult mentor)
    // orphanTiles[] = {1, 9, 10, 18, 19, 27, 28, 29, 30, 31, 32, 33, 34}
    
    // Begin: i = 1 | j = 1
    // hand[1] = 9 | orphanTiles[1] = 9 - Move to next iteration
    // hand[2] = 9 | orphanTiles[2] = 10 - Match Condition > move in one step
    // hand[2] = 9 | orphanTiles[2 - 1] = 9 - Duplicate++, j-- > move to next iteration
    // Begin i = 3 | j = 2
    // hand[3] = 9 | orphanTiles[2] = 10 - Match Condition > move in one step
    // hand[3] = 9 | orphanTiles[2-1] = 9 - Does not Match condition > move to else > duplicate++, j-- (This makes duplicate > 1 again, could be the short circuit end at this point but still don't know for sure. Need to ask mentor)
    // hand[4] = 10 | orphanTiles[2] = 10
    // hand[5] = 18 | orphanTiles[3] = 18
    
    
    // sample 3: basic win hand
    // hand[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 31, 31, 31, 34, 34} (This was to satisfy the hand[13] != 34 conditional)
    // orphanTiles[] = {1, 9, 10, 18, 19, 27, 28, 29, 30, 31, 32, 33, 34}
    
    // Begin: i = 1, j = 1
    // hand[1] = 2 | orphanTiles[1] = 9 - Condition matched > Move in one step
    // hand[1] = 2 | orphanTiles[1 - 1] = 1 - Condition matched > return 0; 
