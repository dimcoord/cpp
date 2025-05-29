#include <bits/stdc++.h>
using namespace std;

void optimize(){ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}

int main(){
    optimize();
    unordered_map<char, char> mp; // enc, asli
    unordered_map<char, char> mp2; // asli, enc
    
    int n;
    string a, b, c, ans = "";
    
    cin >> n;
    cin >> a >> b >> c;
    for(int i = 0; i < n; i++)
    {
        if(!mp.count(b[i]) && !mp2.count(a[i]))
        {
            mp.insert({b[i], a[i]});
            mp2.insert({a[i], b[i]});
        } else {
            if(mp[b[i]] != a[i] && mp2[a[i]] != b[i])
            {
                cout << "Pak Dengklek bingung" << endl;
                return 0;    
            }
        }
    }
    
    for(char i : c)
    {
        if(mp.count(i))
        {
            ans += mp[i];
        } else {
            ans += '?';
        }
    }
    
    cout << ans;
}