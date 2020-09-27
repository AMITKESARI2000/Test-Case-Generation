#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ifstream fin;
	fin.open("testin.txt", ios::in);//| ios::app
	ofstream fout;
	fout.open("testout.txt", ios::out);//| ios::app
	if (fin.is_open()) {
		while (!fin.eof()) {


			int* prime = new int[M];
			int* prime_factors = new int[M];
			for (int i = 1;i <= M;i++) {
				prime[i] = 1;
				prime_factors[i] = 0;
			}
			prime[0] = 0;
			prime[1] = 0;
			for (int i = 2;i <= M;i++) {
				if (prime[i] == 1) {
					// cout << i <<"prime number"<<"\n";
					prime_factors[i] = 1;
					for (int j = 2 * i;j <= M;j += i) {
						prime_factors[j]++;
						prime[j] = 0;
					}
				}
			}

			int t;
			fin >> t;
			while (t--) {
				int a, b, k;
				fin >> a >> b >> k;
				int count = 0;
				for (int i = a;i <= b;i++) {
					if (prime_factors[i] == k) {
						count++;
					}
				}
				fout << count << "\n";
			}
			cout << "Numbers taken from the file" << endl;
			return 0;
		}

	cout << "Numbers taken from the file" << endl;
	fin.close();
	fout.close();
	}

	else
		cout << "Unable to open file";

}
