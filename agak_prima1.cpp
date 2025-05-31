#include <bits/stdc++.h>
using namespace std;

void optimize(){ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}

int main(){
    optimize();

    int t, sum;
    cin >> t;
    int n[t];

    for(int i = 0; i < t; i++){
        cin >> n[i];
    }

    for(int i = 0; i < t; i++){
        for(int j = 1; j <= sqrt(n[i]); j++){
            if(n[i] % j == 0){
                // cout << j << " ";
                sum++;
                if(j != n[i] / j){
                    // cout << n[i] / j << " ";
                    sum++;
                }
            }
        }

        if(sum > 4){
            cout << "BUKAN\n";
        }else{
            cout << "YA\n";
        }

        sum = 0;
    }

    // for(int i = 0; i < t; i++){
    //     if(n[i] % 2 == 0 || n[i] % 3 == 0){
    //         cout << "BUKAN\n";
    //         //break;
    //     }else{
    //         for(int j = 5; j <= sqrt(n[i]); j+=6){
    //             if(n[i] % j == 0 || n[i] % (j+2) == 0){
    //                 cout << "BUKAN\n";
    //             }
    //         }
    //         cout << n[i] << "YA\n";
    //     }
    // }

    return 0;
}