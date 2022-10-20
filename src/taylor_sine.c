#include "taylor_sine.h"
#include <assert.h>
#include <math.h>
#include <stdio.h>


double factorial(int x){ //function that calculates the factorial// 
    if (x==0) 
        return 1;
    else
    return(x * factorial(x - 1)); 
}
double taylor_sine(double x, int n)
{
    /* implement your function here */
    assert(n > 0); //checks the precondition//
    double sine = x; 
    double squared = x*x; //x squared//
    double nume = x; //The numerator//
    double dem = 1; //The denominator// 
    int count = 1; 

    for(int i = 1; i <= n; i++){
    count+=2; 
    nume = squared*nume; 
    dem = factorial(count); 

    if (i%2 == 0){
    sine+= nume/dem;
    } 
    else 
    {
        sine-= nume/dem;  
    }
    }
    return sine; 

}
