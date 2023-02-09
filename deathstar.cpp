#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, num;
    cin >> n;

    vector<int> res(n, 0);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            cin >> num;
            res[i] |= num;
        }

    for (auto c: res) 
        cout << c << " ";
    cout << endl;
    return 0;
}

