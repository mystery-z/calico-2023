#include <iostream>

using namespace std;

/**
 * Return the number of days between Year 0 and Big Ben's Birthday
 *
 * N: The number of years before Big Ben's Birthday
 */
int solve(int N) {
    // YOUR CODE HERE
    float total = 0;
    for (float j=0; j<N; j++) {
		total = total+j*j;
	}
	total = total+N*(N-1);		
    return total;
}

int main() {
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        int N;
        cin >> N;
        cout << solve(N) << '\n';
    }
    return 0;
}
