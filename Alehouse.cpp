#include <iostream>
#include <typeinfo>
#include <vector>

using namespace std;
typedef pair<int, int> pii;
typedef vector<pii> vii;
typedef vector<int> vi;

int main()
{
    int n, k;
    vii vec;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        vec.push_back({a,b});
    }
    return 0;
}

