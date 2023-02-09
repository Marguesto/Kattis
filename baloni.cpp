#include <iostream>
#include <vector>

using namespace std;


int main()
{
    int n, temp, ret = 0;
    vector<int> balons;
    balons.resize(1000001, 0);
    cin >> n;

    for (int i = 0; i < n; i++)  {
        cin >> temp;
        if (balons[temp] == 0) {
            balons[temp - 1]++;
        } else {
            balons[temp]--;
            balons[temp - 1]++;
        }
    }

    for (auto& c: balons) 
        ret += c;

    cout << ret << endl;

    return 0;
}

