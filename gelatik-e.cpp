#include <cstdio>
#include <iostream>

using namespace std;

#define MAX 1005
#define MOD 1000000007

int n, k, A[MAX], arr[MAX][MAX], total, counts;

int main() {
    scanf("%d %d", &n, &k);

    for (int i = 1; i <= n; i++) {
        scanf("%d", &A[i]);
        counts += n - i;
        for (int j = i + 1; j <= n; j++) {arr[i][j] = 1;}
    }

    // for(int i = 0; i < MAX; i++){
    //     for(int j = 0; j < MAX; j++){
    //         if(arr[i][j] == 1){cout << "arr: " << arr[i][j] << " i: " << i << " j: " << j << endl;}
    //     }
    // }

    for (counts = counts; counts > 0; k = k) {
        if (--k < 2) (total += counts);
        
        counts = 0;

        for (int x = n; x >= 1; x--) {
            for (int y = x + 1, z = 1; y <= n; (counts += arr[x][y]), y++) {
                // cout << "counts: " << counts << endl;
                arr[x][y] = arr[x][y-1];
                for (; z < x && A[z] <= A[y] - A[x]; arr[x][y], z++)
                    arr[x][y] += arr[z][x];
            }
        }
    }

    cout << total;

    return 0;
}