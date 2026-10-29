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

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones) {
    twenties = &Twenty;
    tens = &Ten;
    fives = &Five;
    ones = &One;
    printf("Enter amount to pay: ");
    scanf("%d", &dollars);
    if (dollars >= 20) {
        while (dollars >= 20) {
            twenties++;
            dollars -= 20;
        }
    }
    else if (dollars >= 10) {
        while (dollars >= 10) {
            tens++;
            dollars -= 10;
        }
    }
    else if (dollars >= 5) {
        while (dollars >= 5) {
            fives++;
            dollars -= 5;
        }
    }
    else if (dollars >= 1) {
        while (dollars >= 1) {
            ones++;
            dollars -= 1;
        }
    }
}

int main(void) {
    return 0;
}