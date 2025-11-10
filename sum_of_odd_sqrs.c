#include <stdio.h>

int main(){

    long long n;
    printf("The sum of the squares of all the odd numbers that come before : ______\b\b\b\b\b\b");
    scanf("%lld",&n);

    long long sum = 0;
    long long arr[n/2];

    long long sum_of_odd_sqrs = 0;

    for (int i = 0; i < n/2; i++)
    {
        sum = sum + i;
        arr[i] = sum;
        long long j = (8 * arr[i]) + 1;

        sum_of_odd_sqrs = sum_of_odd_sqrs + j;
    }

    printf("\n\nThe sum is : %lld \n",sum_of_odd_sqrs);

    return 0;
}
