/*main is a user defined funtion whose prototype/implementation is pre defined by the compiler

THE IMPORTANCE OF C~~~~

when the operating system runs a program in C, it passes the control of the comuter over to that program
the key point is that the perating system neds to know "where" inside our program the control needes to be passed
in case of C program main funtion is used for this purpose

*/

#include<stdio.h>

#define start main

void start()
{
    if(printf("hello world"))
    {}
}
