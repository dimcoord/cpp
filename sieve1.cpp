#include <bits/stdc++.h>
using namespace std;

void optimize(){ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}

int MAX_NUM = 1000001;

int main(){
    optimize();
    int T;
    cin >> T;
    int K;

    vector<bool> isPrima(MAX_NUM, true);
    vector<int> listPrima;
    isPrima[0] = isPrima[1] = false;

    for (size_t i = 2; i < MAX_NUM; i++)
    {
        if(isPrima[i])
        {
            listPrima.push_back(i);
            for (size_t j = i*i; j < MAX_NUM; j += i)
            {
                isPrima[j] = false;
            }
        }
    }

    while(T--){
        cin >> K;
        cout << listPrima[K - 1] << endl;
    }
    
    return 0;
}