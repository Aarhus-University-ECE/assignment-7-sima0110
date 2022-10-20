extern "C"{
#include <math.h>
#include "taylor_sine.h"
#include <stdio.h>
}

// Add your test cases for Exercise 1b,c) here
int main(int argc, char **argv){

double t1 = taylor_sine(0.5, 7); //x and n for the testcase// 
printf("results for first test:");
printf("%f\n", sin(0.5)); //prints the math sin result// 
printf("%f\n", t1); //prints the taylor result//

double t2 = taylor_sine(25,5); 
printf("results for second test:");
printf("%f\n", sin(25)); //prints the math sin result// 
printf("%f\n", t2); //prints the taylor result//

double t3 = taylor_sine(5,30);
printf("results for third test:");
printf("%f\n", sin(5)); //prints the math sin result// 
printf("%f\n", t3); //prints the taylor result//


return 0;
}
//couldn't run the code, however it's expected that the results are similar when x is closer to zero//
