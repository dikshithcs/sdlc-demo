/**
 * @file excess3_to_bcd
 * @author Dikshith C S
 * @brief source file containing function for excess3 to bcd gate
 * @date 2021-07-05
 */

#include<stdio.h>
#include "combinational.h"

int excess3tobcd(int first_bit, int second_bit, int third_bit, int fourth_bit)
{
    LOOP8: {
        printf("Enter the 4 bits for EXCESS 3 to BCD conversion\n");
        printf("NOTE : Enter bit from MSB\n");
        scanf("%d %d %d %d",&first_bit,&second_bit, &third_bit, &fourth_bit);// input for Excess3 to BCD
        if(first_bit>1 || first_bit<0 || second_bit>1 || second_bit<0 || third_bit<0 || third_bit>1 || fourth_bit<0 || fourth_bit>1)//checking if inputs are valid
        {
            printf("Entered bits are not in range\nPlease enter bits once again\n");
            goto LOOP8;
            return 0;
        }
        if(first_bit == 0 && second_bit == 0 && third_bit == 0)//displaying output for invalid input
        {
            printf("bit1 = X\nbit2 = X\nbit3 = X\nbit4 = X");
            return 0;
        }
        if(first_bit == 0 && second_bit == 0 && third_bit == 1 && fourth_bit == 0)//displaying output for invalid input
        {
            printf("bit1 = X\nbit2 = X\nbit3 = X\nbit4 = X");
            return 0;
        }
        if(first_bit == 1 && second_bit == 1 && third_bit == 1)//displaying output for invalid input
        {
            printf("bit1 = X\nbit2 = X\nbit3 = X\nbit4 = X");
            return 0;
        }
        if(first_bit == 1 && second_bit == 1 && third_bit == 0 && fourth_bit == 1)//displaying output for invalid input
        {
            printf("bit1 = X\nbit2 = X\nbit3 = X\nbit4 = X");
            return 0;
        }

        output1 = AND(first_bit, second_bit);
        output2 = AND(first_bit, third_bit);
        output2 = AND(output2, fourth_bit);
        output1 = OR(output1, output2); //bit0 calculation

        output2 = AND(!second_bit, !third_bit);
        output3 = AND(!second_bit, !fourth_bit);
        output4 = AND(second_bit, third_bit);
        output4 = AND(output4, fourth_bit);
        output2 = OR(output2, output3);
        output2 = OR(output2, output4); //bit1 calculation

        output3 = AND(!third_bit, fourth_bit);
        output4 = AND(third_bit, !fourth_bit);
        output3 = OR(output3, output4);//bit2 calculation

        output4 = !fourth_bit;//bit3 calculation
        printf("%d %d %d %d",output1, output2, output3, output4);
        return 0;
        }
}