#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string> 

using namespace std;

long long ver = 0, hor = 0;

void getInputAndPrecess() {
    int a, b;
    while (cin >> a >> b) {
        switch (b)
        {
        case -4:
            ver += a;
            break;
        case -2:
            ver -= a;
            break;
        case -3:
            hor -= a;
            break;
        case -1:
            hor += a;
            break;
        }
    }
    if (ver < 0) {
        cout << -ver << " " << -2 << " ";
    }
    else if (ver > 0) {
        cout << ver << " " << -4 << " ";
    }
    if (hor < 0) {
        cout << -hor << " " << -3 << " ";
    }
    else if (hor > 0) {
        cout << hor << " " << -1 << " ";
    }
}

int main() {
	// freopen("ROUTE.INP", "r", stdin);
	// freopen("ROUTE.OUT", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
    getInputAndPrecess();
	return 0;
}

