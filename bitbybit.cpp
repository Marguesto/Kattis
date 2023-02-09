#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    string op;

    for(;;) {
        cin >> n;
        if (n == 0) break;
        vector<int> arr;
        arr.resize(32, -1);
        int operand01, operand02;
        while (n--) {
            cin >> op;
            switch (op[0]) {
                case 'S':
                    cin >> operand01;
                    arr[operand01] = 1;
                    break;
                case 'C':
                    cin >> operand01;
                    arr[operand01] = 0;
                    break;
                case 'O':
                    cin >> operand01 >> operand02;
                    if (arr[operand01] == -1 || arr[operand02] == -1) arr[operand01] = -1;
                    else if (arr[operand01] == 1 || arr[operand02] == 1) arr[operand01] = 1;
                    else if (arr[operand01] == 0 && arr[operand02] == 0) arr[operand01] = 0;
                    break;
                case 'A':
                    cin >> operand01 >> operand02;
                    if (arr[operand01] == -1 || arr[operand02] == -1) arr[operand01] = -1;
                    else if (arr[operand01] == 1 && arr[operand02] == 1) arr[operand01] = 1;
                    else if (arr[operand01] == 0 || arr[operand02] == 0) arr[operand01] = 0;
                    break;
            }
        }
        for (int i = 31; i >= 0; i--) {
            if (arr[i] == -1) cout << "?";
            else cout << arr[i];
        }
        cout << endl;
    }
    return 0;
}

