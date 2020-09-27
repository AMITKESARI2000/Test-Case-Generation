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
        ll test=10000;
        //fout<<test<<endl;
        test=1;
        while(test--) {
            ll n1=1+rand()%500;
            n1=350;
            fout<<n1<<endl;
            for(int i=0;i<n1;i++){
                ll tmp=1+rand()%10000;
                fout<<tmp<<"  ";
            }
            ll t=1+rand()%1000;
            t=1000;
            fout<<endl<<t<<endl;

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
