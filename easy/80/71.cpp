#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>

using namespace std;

int main() {
    int N, L;
    cin >> N >> L;
    vector<string> S(N);
    for(int i=0; i<N; i++) cin >> S[i];
    sort(S.begin(), S.end());
    string ans;
    for(int i=0; i<N; i++){
        ans += S[i];
    }
    cout << ans << endl;
    return 0;
}