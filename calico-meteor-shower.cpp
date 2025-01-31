#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    int answ[t];
    int count=0;
    while(t--){
        int born, life, next;
        int showers=0;
        cin >> born >> life >> next;

        int now = -1 * next;
        int start = now-born;
        int end = start + life;

        int x = (end)/50;
        int y = (start)/50;
		showers+=x-y;
        if(end>=0 && start<=0){
            showers++;
        }
        
        answ[count] = showers;

        // int timeRemaining = life-born;
        
        // int lastMeteor = 50 - next;
        
        // if(timeRemaining > next){
        //     showers++;
        //     timeRemaining-=next;
        //     showers+=timeRemaining/50;
        // }
        // answ[count] = showers;
        count++;
    }
    // cout << count << endl;
    for(int i=0; i<=count-1; i++)cout << answ[i] << '\n';
    return 0;
}

int solve(int B, int L, int E) {
    return -1;
}

//~ int main() {
    //~ int T;
    //~ cin >> T;
    //~ for (int i = 0; i < T; i++) {
        //~ int B, L, E;
        //~ cin >> B >> L >> E;
        //~ cout << solve(B, L, E) << '\n';
    //~ }
//~ }
