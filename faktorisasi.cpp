#include <bits/stdc++.h>    
using namespace std;

void optimize(){ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}

// int cariPrimaSelanjutnya(int start)
// {
//     int num = start;

//     while(true)
//     {
//         num++;
//         bool isFound = true;
//         for (int i = 2; i <= sqrt(num); i++)
//         {
//             if (num % i == 0)
//             {
//                 isFound = false;
//                 break;
//             }
//         }

//         if(isFound)
//         {
//             return num;
//         }
//     }
// }

int main(){
    optimize();

    int N;
    map<int, int> faktor; // prima, jumlah
    cin >> N;

    for (int i = 2; i <= N; i++){
        while(N % i == 0){
            // cout << "a " << i << endl;
            N /= i; // key
            if (!faktor.count(i)){
                faktor.insert({i,1});
            } else {
                faktor[i]++;
            }
        }

        // i = cariPrimaSelanjutnya(i);
    }

    bool first = true;
    for (auto pair : faktor)
    {
        if(!first)
            cout << " x ";

        cout << pair.first;

        if (pair.second > 1)
            cout << "^" << pair.second;
        first = false;
    }
    

    return 0;
}