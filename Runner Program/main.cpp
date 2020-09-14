#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ifstream fin ;
    fin.open ("testin.txt", ios::in );//| ios::app
    ofstream fout ;
    fout.open ("testout.txt", ios::out );//| ios::app
    if (fin.is_open()) {
        while(!fin.eof()) {
            int t;
            fin >> t;
            while(t--) {
                string s;
                fin >> s;
                bool working[26] = {false};
                int c = 0;
                for(int i = 0; i < s.size(); i++) {
                    if(i == 0) {
                        c = 1;
                    } else {
                        if(s[i] == s[i-1])
                            c++;
                        else
                            c = 1;
                    }
                    if(i+1 == s.size() || s[i] != s[i+1]) {
                        if(c & 1)
                            working[s[i] - 'a'] = true;
                    }
                }
                for(int i = 0; i < 26; i++) {
                    if(working[i])
                        fout << (char)(i + 'a');
                }
                fout <<endl;
            }

            cout<<"Numbers taken from the file"<<endl;
        }
        fin.close();
        fout.close();
    } else
        cout << "Unable to open file";

}
