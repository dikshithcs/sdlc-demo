/**
 * @file full_adder
 * @author Dikshith C S
 * @brief source file containing function for full adder
 * @date 2021-07-05
 */

#include<stdio.h>
#include "combinational.h"


int full_adder(int first_bit, int second_bit, int third_bit)
{
    LOOP2: {
        printf("Enter 3 bits for the full adder from msb\n");
        scanf("%d %d %d",&first_bit, &second_bit, &third_bit);//input for full adder
        if(first_bit>1 || first_bit<0 || second_bit>1 || second_bit<0 || third_bit<0 || third_bit>1)//checking if inputs are valid
        {
            printf("Entered bits are not in range\nPlease enter bits once again\n");
            goto LOOP2;
        }
        sum = XOR(first_bit, second_bit);
        sum = XOR(sum, third_bit);//sum for full adder
        carry = AND(first_bit, second_bit);
        carry2 = AND(second_bit, third_bit);
        carry3 = AND(first_bit, third_bit);
        carry = OR(carry, carry2);
        carry = OR(carry, carry3);//carry for full adder
        printf("sum = %d \ncarry = %d\n",sum,carry);
        return 0;
        }
}