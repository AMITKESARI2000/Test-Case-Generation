#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <fstream>
#include <math.h>
#include <random>
#include <chrono>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    srand(time(NULL));
    unsigned seed = chrono::system_clock::now().time_since_epoch().count();
    mt19937_64 rng(seed);//rand() limit is only 32767, use mt19937 for larger and better random numbers [0,n)
    ll value = 0;
    ofstream fout;
    fout.open("TestCaseGen.txt", ios::out);//| ios::app

    if (fout.is_open()) {
        ll test = 1000;
        fout << test << endl;
        while (test--) {
            ll n = 10;
            //ll n1=1+(((rand()*rand())%n)*rand())%n;
            cout << 1+rng() << endl;

            /*
             for(int i=0;i<n1;i++){
                 ll tmp=1+rand()%10000;
                 fout<<tmp<<"  ";
             }
             */


        }
        fout.close();
        cout << "Random numbers generated into the file" << endl;

    }
    else
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
