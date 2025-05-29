#include <bits/stdc++.h>
using namespace std;

void optimize(){ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}

int main(){
    optimize();

    int a, b, ptr = 0;
    string s;
    cin >> s;
    
    a = ceil(sqrt(s.length()));
    b = s.length();

    vector<vector<char>> arr(a, vector<char>(a, '.'));
    bool stop = false;
    // char arr[a][a];
    
    for(int i = 0; i < a; i++){
        for(int j = 0; j < a; j++){
            if(ptr < b) {
                arr[i][j] = s[ptr];
            } 
           
           ptr++;
           if(ptr >= b)
           {
                stop = true;
                break;
           }
        }

        i++;
        if(i >= a || stop){
            break;
        }

        for(int j = a-1; j >= 0; j--){
            if(ptr < b){
                arr[i][j] = s[ptr];
            }
            
            ptr++;
            if(ptr >= b)
           {
                stop = true;
                break;
           }
        }

        if(stop){
            break;
        }
    }

    // Output
    for(auto line : arr)
    {
        for(int i = 0; i < a; i++)
        {
            cout << line[i];
        }
        cout << endl;
    }

    return 0;
}