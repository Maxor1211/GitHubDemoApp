// C++ program to print all primes
// less than N
#include <iostream>
using namespace std;

// function check whether a number
// is prime or not
bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;

    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}
int nprime(int x, int y) {
    int count = 0;
    for (int i = x; i <= y; i++) {
        int z = i;
        if (isPrime(z)) {
            count++;
        }
    }
    return count;
}
// Function to print primes
void printPrime(int n)
{
    for (int i = 2; i <= n; i++) {
        if (isPrime(i))
            cout << i << " ";
    }
}

int main()

{
    int x, y;
    cin >> x >> y;
    cout << nprime(x,y);
}