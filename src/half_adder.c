/**
 * @file half_adder
 * @author Dikshith C S
 * @brief source file containing function for half adder
 * @date 2021-07-05
 */

#include<stdio.h>
#include "combinational.h"


int half_adder(int first_bit, int second_bit)
    {
        LOOP1: {
        printf("Enter the 2 bits for half adder from msb\n");
        scanf(" %d %d", &first_bit, &second_bit);// input for half adder
        if(first_bit>1 || first_bit<0 || second_bit>1 || second_bit<0)//checking if inputs are valid
        {
            printf("Entered bits are not in range\nPlease enter bits once againb\n");
            goto LOOP1;
        
        }
        sum = XOR(first_bit, second_bit);//calculating sum for half adder
        carry = AND(first_bit, second_bit);//calculating carry for halfadder
        
        printf("sum = %d \ncarry = %d\n", sum, carry);
        return 0;
        }
    }