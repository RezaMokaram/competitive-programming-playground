/* cSpell: disable */
#include <bits/stdc++.h>
using namespace std;
const int maxn = 5e5;
//
int getRandomNumber(int maxValue) {
    int randomNumber = rand() % maxValue;
    if (!randomNumber)randomNumber++;
    return randomNumber;
}

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    srand(time(0));
    //
    int n = getRandomNumber(100);
    vector<int>ml;
    cout << n << "\n1 ";
    int mx = 1;
    for (size_t i = 0; i < n-1; i++)
    {
        int t = getRandomNumber(mx+2);
        cout << t << " ";
        mx=max(mx, t);
    }
}
