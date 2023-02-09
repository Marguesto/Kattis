#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int n;
    cin >> n;
    stack<int> stack;

    int current;
    for (int i = 0; i < n; i++) {
        cin >> current;
        if (stack.empty())
            stack.push(current);
        else {
            if ((stack.top() + current) % 2 == 0)
                stack.pop();
            else 
                stack.push(current);
        }
    }

    cout << stack.size() << endl;

    return 0;
}

