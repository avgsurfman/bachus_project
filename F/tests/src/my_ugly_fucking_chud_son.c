// I fucking hate this
#define PY_SSIZE_T_CLEAN
#pragma STDC FENV_ACCESS ON

#include <fenv.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>


//float mult_rand_floats()

int main(void) {
	float a, b;
        char* round_str;
        int originalRounding = fegetround();
        switch(originalRounding){
        case(0): round_str = "ZERO";
        case(1): round_str = "NEAR";
        case(2): round_str = "INF";
        case(3): round_str = "NINF";
        default: round_str = "UNKN";
        }
        int newRounding = 1;
        fesetround(newRounding);
        printf("Old rounding mode:%s \nCurrent rounding mode: %i \n", round_str, newRounding);
         
               
        //int c = 0x7f800000; 
        //int d = 0x00000000; // evil bit hack
        int c = 0x000FFFFF;
        int d = 0x40000000; 
        a = *((float*)&c);
        b = *((float*)&d);
        printf("a:%a b:%a a*b%a a*a %a \n", a, b, a*b, a*a);
        printf("in hex: a*b = %a \n", a*b);
        fesetround(originalRounding);       
}
