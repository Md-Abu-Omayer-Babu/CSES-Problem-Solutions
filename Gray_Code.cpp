// In the name of Almighty Allah
// This code is written by "Md Abu Omayer Babu"

#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define tc int t;cin >> t;while(t--)

void printGrayCode(int n) {
    for (int i = 0; i < (1 << n); i++) {
        int gray = i ^ (i >> 1);
        cout << bitset<16>(gray).to_string().substr(16 - n) << endl;
    }
}

/*void solve(int n){

	if(n == 1){
		for (int i = 0; i < pow(2, n); i++)
			cout << bitset<1>(i ^ (i >> 1)) << endl;
			return;
	}

	if(n == 2){
		for (int i = 0; i < pow(2, n); i++)
            cout << bitset<2>(i ^ (i >> 1)) << endl;
            return;
    }

	if(n == 3){
		for (int i = 0; i < pow(2, n); i++)
            cout << bitset<3>(i ^ (i >> 1)) << endl;
            return;
    }

	if(n == 4){
		for (int i = 0; i < pow(2, n); i++)
            cout << bitset<4>(i ^ (i >> 1)) << endl;
            return;
    }

	if(n == 5){
		for (int i = 0; i < pow(2, n); i++)
            cout << bitset<5>(i ^ (i >> 1)) << endl;
            return;
    }

	if(n == 6){
		for (int i = 0; i < pow(2, n); i++)
            cout << bitset<6>(i ^ (i >> 1)) << endl;
            return;
    }

	if(n == 7){
		for (int i = 0; i < pow(2, n); i++)
            cout << bitset<7>(i ^ (i >> 1)) << endl;
            return;
    }

	if(n == 8){

		for (int i = 0; i < pow(2, n); i++)
            cout << bitset<8>(i ^ (i >> 1)) << endl;
            return;
    }

	if(n == 9){
		for (int i = 0; i < pow(2, n); i++)
            cout << bitset<9>(i ^ (i >> 1)) << endl;
            return;
    }

	if(n == 10){
		for (int i = 0; i < pow(2, n); i++)
            cout << bitset<10>(i ^ (i >> 1)) << endl;
            return;
    }

	if(n == 11){
		for (int i = 0; i < pow(2, n); i++)
            cout << bitset<11>(i ^ (i >> 1)) << endl;
            return;
	}

	if(n == 12){
		for (int i = 0; i < pow(2, n); i++)
            cout << bitset<12>(i ^ (i >> 1)) << endl;
            return;
    }

	if(n == 13){
		for (int i = 0; i < pow(2, n); i++)
            cout << bitset<13>(i ^ (i >> 1)) << endl;
            return;
    }

	if(n == 14){
		for (int i = 0; i < pow(2, n); i++)
            cout << bitset<14>(i ^ (i >> 1)) << endl;
            return;
    }
	
	if(n == 15){
		for (int i = 0; i < pow(2, n); i++)
            cout << bitset<15>(i ^ (i >> 1)) << endl;
            return;
    }

	if(n == 16){
		for (int i = 0; i < pow(2, n); i++)
            cout << bitset<16>(i ^ (i >> 1)) << endl;
            return;
    }

}
*/


int32_t main() {
    int n;
    cin >> n;

    printGrayCode(n); // Efficient way

    // solve(n); // noob way

    return 0;
}
