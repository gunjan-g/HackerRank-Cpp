/*

Program Link:
https://www.hackerrank.com/challenges/c-tutorial-functions/problem

Functions are a bunch of statements glued together. A function is provided with zero or 
more arguments, and it executes the statements on it. Based on the return type, it either 
returns nothing (void) or something.
The syntax for a function is

return_type function_name(arg_type_1 arg_1, arg_type_2 arg_2, ...) {
    ...
    ...
    ...
    [if return_type is non void]
        return something of type `return_type`;
}

For example, a function to return the sum of four parameters can be written as
int sum_of_four(int a, int b, int c, int d) {
    int sum = 0;
    sum += a;
    sum += b;
    sum += c;
    sum += d;
    return sum;
}

Write a function int max_of_four(int a, int b, int c, int d) which returns the maximum 
of the four arguments it receives.

+= : Add and assignment operator. It adds the right operand to the left operand and 
assigns the result to the left operand.
a += b is equivalent to a = a + b;

Sample Input:
3
4
6
5

Sample Output:
6

*/

#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max_of_four(int a, int b, int c, int d){

    if(a>=b && a>=c && a>=d)        //checking if a is greater than b, c and d
      return a;
    else if(b>=a && b>=c && b>=d)   //checking if b is greater than a, c and d
      return b;
    else if(c>=a && c>=b && c>=d)   //checking if c is greater than a, b and d  
      return c;
    else                           //checking if d is greater than a, b and c
      return d;

}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
