#include <iostream>
using namespace std;
int sum(int n){
    int sum = 0;
    for (int i = 1; i <=n; i++)
    {
        sum = sum + i;
    }
    cout << "sum of n number is =" << sum <<endl ;
}
// function to make a factorial
int fact(int n){
    int fact = 1;
    for (int i = 1; i <=n; i++)
    {
        fact= fact * i;
    }
    return fact;
}
//  SUM OF DIGIT OF ANY NUMBER:
int sumofdigit(int n){
    int sum =0;
    while (n>0)
    {
        int d = n%10;
        sum = sum + d;
         n = n/10;
    }
    return sum;
}
// BINOMIAL COFFICIENT OF N C R:
int binomial(int n, int r){
    int factorial_of_N = fact(n);
    int factorial_of_R = fact(r);
    int factorial_of_NminusR = fact(n-r);
    int binomial_ncr = (factorial_of_N)/(factorial_of_R * factorial_of_NminusR);
    return binomial_ncr;
}
// PRIME or not prime NUMBER OF ANY NUMBER:
bool isPrime(int num) {
    if (num <= 1) return false;  // Numbers less than or equal to 1 are not prime
    for (int i = 2; i<= num; i++) {
        if (num % i == 0) return false;  // If num is divisible by any number, it's not prime
    }
    return true;  // If no divisors found, it's prime
}
int main(){
      int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isPrime(n)) {
        cout << n << " is a prime number.\n";
    } else {
        cout << n << " is not a prime number.\n";
    }

    return 0;
// cout<< " Binomial of n,r = "<< binomial(8,2)<<endl;
// cout<< "sum of digit = "<< sumofdigit(25)<<endl;
//  sum(5);
// cout<< "factorial of n number is = "<< fact(5);
    return 0;
}