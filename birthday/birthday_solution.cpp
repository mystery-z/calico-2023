#include <iostream>

using namespace std;

/**
 * Return the number of days between Year 0 and Big Ben's Birthday
 *
 * N: The number of years before Big Ben's Birthday
 */
int solve(double N) {
    // YOUR CODE HERE
    double total = 0;
	total = 1/6*N*(N+1)*(2*N+1)-N;
	//~ total = total*(N+1);
	//~ total = total*(2*N+1)-N;
	//~ total = total-(N*N)+N*(N-1);	
    return total;
}

int main() {
    double T;
    cin >>T;
    for (double i = 0; i < T; i++) {
        double N;
        cin >> N;
        cout << solve(N) << '\n';
    }
    return 0;
}

//~ x = n-1
//~ 1/6 x * x+1 * 2x+1 + N*(N-1)
