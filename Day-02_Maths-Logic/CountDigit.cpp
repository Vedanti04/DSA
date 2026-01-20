//Count Digits
//Given a number N, the task is to return the count of digits in this number.


#include<bits/stdc++.h>

using namespace std;

int CountDigit(long long n){
    if (n==0)
       return 1;
    int count =0;
    while(n>0){
        count++;
        n=n/10;
    }
    return count;

}

int main(void)
{
    long long n = 1234567;
    cout << "Number of digits :" << CountDigit(n);
    return 0;
}