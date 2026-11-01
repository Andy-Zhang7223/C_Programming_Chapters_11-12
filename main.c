#include <stdio.h>

//Modify Programming Project 7 from Chapter 2 so it includes the following:
//void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);
//The function should determine the smallest number of bills needed to pay.
//The pointers point to the value of the amount of bills needed to pay the amount
//Ex: Cost: $40, *twenties should = 2.

int Twenty = 0;
int Ten = 0;
int Five = 0;
int One = 0;

int *twenties = &Twenty;
int *tens = &Ten;
int *fives = &Five;
int *ones = &One;

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones) {
    printf("Enter amount to pay: ");
    scanf("%d", &dollars);
        while (dollars >= 20) {
            *twenties += 1;
            dollars -= 20;
        }
        while (dollars >= 10) {
            *tens += 1;
            dollars -= 10;
        }
        while (dollars >= 5) {
            *fives += 1;
            dollars -= 5;
        }
        while (dollars >= 1) {
            *ones += 1;
            dollars -= 1;
        }
    printf("Twenty: %d\nTen: %d\nFive: %d\nOne: %d\n", *twenties, *tens, *fives, *ones);
}

int main(void) {
    pay_amount(0, twenties, tens, fives, ones);
    return 0;
}