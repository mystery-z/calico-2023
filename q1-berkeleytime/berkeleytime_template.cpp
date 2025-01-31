#include <iostream>
#include <string>

using namespace std;

/**
 * Return the appropriate text given the contest will start N minutes late.
 * 
 * N: the number of minutes late the contest will start
 */
string solve(int N) {
    if (N == 0) {
      return "haha good one";
    }

    if (N >= 180) {
      return "canceled"; 
    }

    int multiple = N/10;
    string output = "";

    for (int i = 0; i < multiple; i++) {
      output += "berkeley"; 
    }

    output += "time";

    return output;
}

int main() {
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        int N;
        cin >> N;
        cout << solve(N) << '\n';
    }
}
