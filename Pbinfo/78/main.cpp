#include <iostream>

using namespace std;

void citmat(int a[100][100], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
