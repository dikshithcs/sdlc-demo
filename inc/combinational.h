#ifndef __SDLC_COMBINATIONAL_H__
#define __SDLC_COMBINATIONAL_H__

#include<stdio.h>
 
     int half_adder(int first_bit, int second_bit); //half adder

    int full_adder(int first_bit, int second_bit, int third_bit); //full adder

    int half_subtractor(int first_bit, int second_bit); // half subtractor

    int full_subtractor(int first_bit, int second_bit, int third_bit); //full subtractor

    int binarytogray(int first_bit, int second_bit, int third_bit, int fourth_bit); //binary to gray conversion

    int graytobinary(int first_bit, int second_bit, int third_bit, int fourth_bit); //gray to binary conversion

    int bcdtoexcess3(int first_bit, int second_bit, int third_bit, int fourth_bit); //bcd to excess3 conversion

    int excess3tobcd(int first_bit, int second_bit, int third_bit, int fourth_bit); //excess3 to bcd conversion

    int magnitude_comparator(int first_bit, int second_bit); //magnitude comparator

    int AND(int A, int B); //and gate

    int XOR(int A, int B); //xor gate

    int OR(int A, int B); //or gate

#endif // __SDLC_COMBINATIONAL_H__