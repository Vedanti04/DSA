// Palindrome Numbers
//Given an integer, write a function that returns true if the given number is palindrome, else false. For example, 12321 is palindrome, but 1451 is not palindrome.

#include<bits/stdc++.h>

using namespace std;

bool PalindromeCheck(int n){
    int reverse = 0;
    int temp = 0;
    while(temp != 0){
        reverse = (reverse * 10 ) + (temp % 10 );
        temp = temp/10;
    }

    return(reverse == n);
}

int main(){

    int n = 7007;
    if(PalindromeCheck(n)==1){
        cout << "Yes\n";
    }
    else {
        cout << "No\n";

    }

    return 0;

}