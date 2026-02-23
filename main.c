#include <stdio.h>
#include <stdlib.h>

//Function to calculate the square of a number using pointers
//result stores the output number is the input
void square(int *result,int *number)
{
    *result=*number**number;
}



int main()
{
    int x=4,squaredValue;
    int result;

    //Pass addresses of variables to the function
    square(&result,&x);

    //Print the result
    printf("%d",result);
    return 0;
}
