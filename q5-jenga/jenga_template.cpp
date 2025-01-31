#include <iostream>
#include <math.h>

using namespace std;

typedef long long ll;

/**
* Return the number of unique Jenga towers that can be built using N or fewer
* bricks. Give your answer modulo 3359232.
* 
* N: the maximum number of bricks to use
*/int solve(ll N) {
    ll num = N/3;
    if (num == 0) {
      return 0; 
    }
    double ans = pow(2.0, num+1.0) - 2.0;
	if (ans>92233720368547758){
		return fmod(ans, 3359232)-2;
	}
	return fmod(ans, 3359232);
}

int main() {
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        ll N;
        cin >> N;
        cout << solve(N) << '\n';
    }
}
