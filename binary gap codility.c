/******************************************************************************

A binary gap within a positive integer N is any maximal sequence of consecutive zeros that is surrounded by ones at both ends in the binary representation of N.

For example, number 9 has binary representation 1001 and contains a binary gap of length 2. The number 529 has binary representation 1000010001 and contains two binary gaps: one of length 4 and one of length 3. The number 20 has binary representation 10100 and contains one binary gap of length 1. The number 15 has binary representation 1111 and has no binary gaps. The number 32 has binary representation 100000 and has no binary gaps.

Write a function:

    class Solution { public int solution(int N); }

that, given a positive integer N, returns the length of its longest binary gap. The function should return 0 if N doesn't contain a binary gap.

For example, given N = 1041 the function should return 5, because N has binary representation 10000010001 and so its longest binary gap is of length 5. Given N = 32 the function should return 0, because N has binary representation '100000' and thus no binary gaps.

Write an efficient algorithm for the following assumptions:

        N is an integer within the range [1..2,147,483,647].


*******************************************************************************/
#include <stdio.h>

long count = 0;
long max = 0;

void binary(long N) {
    if (N > 1) { 
        binary(N / 2);
    }
    if (N % 2 == 0) {
        count += 1;
        return;
    } 
    if (max < count) {
        max = count;
    }
    bits = 0;
}

long solution(long N) {
    binary(N);
    return max;
}



int main()
{
long N;
long gap;
setbuf(stdin, NULL);
printf("Enter the number to convert: ");    
scanf("%ld",&N);
fflush(stdin);
gap = solution(N);
printf("gap: %ld ", gap);


    return 0;
}


