#include <stdio.h>

//Modify Programming Project 7 from Chapter 2 so it includes the following:
//void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);
//The function should determine the smallest number of bills needed to pay.
//The pointers point to the value of the amount of bills needed to pay the amount
//Ex: Cost: $40, *twenties should = 2.

int x = 9;
int y = 3;

int *p1 = &x;
int *p2 = &y;

int main(void) {
    printf("Before: x = %d, y = %d\n", *p1, *p2);
    int z = *p1;
    *p1 = *p2;
    *p2 = z;
    printf("After: x = %d, y = %d\n", *p1, *p2);
    return 0;
}