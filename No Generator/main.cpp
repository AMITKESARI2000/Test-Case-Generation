#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <fstream>
#include <math.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    srand(time(NULL));
    ll value=0;
    ofstream fout ;
    fout.open ("TestCaseGen.txt", ios::out );//| ios::app

    if (fout.is_open()) {
        ll test=100;
        fout<<test<<endl;
        while(test--) {
            ll n=1+rand()%500;
            string s[n];

            for (ll i = 0; i < n; ++i) {
                s[i]=97+rand()%26;
                fout << s[i];
            }
            fout<<endl;
        }
        fout.close();
        cout<<"Random numbers generated into the file"<<endl;

    } else
        cout << "Unable to open file";

    /*
        ifstream fin ;
        fin.open ("TestCaseGen.txt", ios::in );//| ios::app
        if (fin.is_open()){
            while(!fin.eof()){
                fin>>value;
                cout<<value<<" ";
            }
            fin.close();
            cout<<"Numbers taken from the file"<<endl;
        }
        else
            cout << "Unable to open file";
    */
}
