#include "taylor_sine.h"
#include <assert.h>
#include <math.h>
#include <stdio.h>


double factorial(int x){ //function that calculates the factorial 
    if (x==0) 
        return 1;
    else
    return(x * factorial(x - 1)); 

double taylor_sine(double x, int n)
{
    /* implement your function here */
    assert(n > 0); //checks the precondition//
    return -1.0;
}
