#include <stdio.h>

// enum weekDays {sunday,monday,tuesday, wednesday,thursday,friday,saturday};

// int main(){
//     enum weekDays today;
//     today = monday; 
//     printf("Day %d", today+1);
//     return 0;
// }
enum decks 
{
    club        = 0,
    diamonds    = 5,
    hearts      = 10,
    spades      = 15,
} card;

int main()
{
    card = spades;
    printf("card power = %d  ", card);
    return 0;
}