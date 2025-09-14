#include <iostream>
using namespace std;

int main () {
    int arr[100][100];
    int n;
    char ch;  

    cin >> ch >> n; 

    int count = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = count++;
        }
    }

    int result[100][100] = {0};
    int Sum = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            bool keep = false;

            if (ch == 'Z') {
                if (i == 0 || i == n - 1 || j == n - 1 - i)
                    keep = true;
            }
            else if (ch == 'D') {
                if (i == 0 || i == n - 1 || j == 0 || j == n - 1 || i == j)
                    keep = true;
            }
            else if (ch == 'A') {
                if (j == i || j == n - 1 - i || i == n / 2)
                    keep = true;
            }
            else if (ch == 'X') {
                if (j == i || j == n - 1 - i)
                    keep = true;
            }

            if (keep) {
                result[i][j] = arr[i][j];
                Sum = Sum + arr[i][j];

            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    cout << Sum << endl;

    return 0;
}
