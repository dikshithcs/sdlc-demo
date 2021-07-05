/**
 * @file xor_gate
 * @author Dikshith C S
 * @brief source file containing function for xor gate
 * @date 2021-07-05
 */

#include<stdio.h>
#include "combinational.h"

#include "combinational.h"
    int XOR(int A, int B)//XOR gate
    {
        int AxorB;
        if(A==B)
        {
            AxorB=0;
        }
        else
            AxorB=1;
        return AxorB;
    }

