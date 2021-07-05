/**
 * @file binary_to_gray
 * @author Dikshith C S
 * @brief source file containing function for binary to gray conversion
 * @date 2021-07-05
 */

#include<stdio.h>
#include "combinational.h"

int binarytogray(int first_bit, int second_bit, int third_bit, int fourth_bit)
{    LOOP5: {
        printf("Enter the 4 bits for binary to gray conversion\n");
        printf("NOTE : Enter bit from MSB\n");
        scanf("%d %d %d %d",&first_bit,&second_bit, &third_bit, &fourth_bit); //input from the user
        if(first_bit>1 || first_bit<0 || second_bit>1 || second_bit<0 || third_bit<0 || third_bit>1 || fourth_bit<0 || fourth_bit>1)//checking if inputs are valid
        {
            printf("Entered bits are not in range\nPlease enter bits once again\n");
            goto LOOP5;
        }
        gray4 = XOR(third_bit, fourth_bit); //bit0 calculation
        gray3 = XOR(third_bit, second_bit); //bit1 calculation
        gray2 = XOR(second_bit, first_bit); //bit2 calculation
        gray1 = first_bit; //bit3 calculation
        printf("%d %d %d %d",gray1,gray2,gray3,gray4);
        return 0;
        }
}
