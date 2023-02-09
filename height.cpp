#include <iostream>

using namespace std;

int isort(int arr[]) 
{
    int i, key, j, cnt = 0;
    for (i = 1; i < 20; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            cnt++;
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    return cnt;
}

int main()
{
    int P;
    cin >> P;
    while(P--) {
        int k, arr[21];
        cin >> k;
        for (int i = 0; i < 20; i++) 
            cin >> arr[i];

        cout << k << " " << isort(arr) << endl;;
    }
    return 0;
}

