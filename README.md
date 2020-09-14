# Test-Case-Generation

<h1><a href="https://docs.google.com/document/d/1AWGXQz_KbrqVKnBn61HwERt3_f3SOa9gem8Lrs6Fk-M/edit?usp=sharing">GENERATION OF TEST CASES Drive File</a></h1>


<h2>Digital Wizards</h2>
<b>GENERATION OF TEST CASES </b>

Steps:
<ul>
  <li>
I will be taking example of a question which has a input of type :

No. of Test Cases
String 
String
String
…
</li>
<li>
Create a Number Generator program in C++ by using the code given below as reference.

        (Code given in last too, for copy pasting)
  </li>
  <li>
A file named TestCaseGen.txt will be generated in your folder. Open it to check the random test case generated.
</li>
<li>
Now, Create the solution of the question you are solving and check if it is working correctly.
  </li>
  <li>
Create a file named testin.txt in the folder containing the solution program. The solution program will take input from this file so take care of working in same directory.
  </li>
  <li>
Copy the text from the TestCaseGen.txt and paste it into testin.txt .
  </li>
  <li>
Change your solution program to take input from testin.txt file and output to testout.txt file. Refer to sample below.

(Code given in last too, for copy pasting)
</li>
<li>
Open HackerRank. Open Test Case tab. Add Test Case. Select upload. Upload the testin.txt file and the testout.txt file respectively. Done!
  </li>
  <li>
After adding 2 3 test cases, check whether the test cases are passing correctly by submitting your original solution to Hackerrank.
  </li>
</ul>

Note:
v1 = rand() % 100;         // v1 in the range 0 to 99 <br>
v2 = rand() % 100 + 1;     // v2 in the range 1 to 100 <br>
v3 = rand() % 30 + 1985;   // v3 in the range 1985-2014 <br>

Codes:
<code>
  
        //Test Case Generator
        #include <iostream>
        #include <stdio.h>
        #include <stdlib.h>
        #include <time.h>    //For seeding rand function with time
        #include <fstream>   //For file handling
        #define ll long long
        using namespace std;

              int main() {
                  srand(time(NULL));
                  ll value=0;
                  ofstream fout ;
                  fout.open ("TestCaseGen.txt", ios::out );//| ios::app  //Open the notepad file for writing in it
                  if (fout.is_open()) {
                      ll test=100;    //No of test Cases you want to generate
                      fout<<test<<endl;  //Printing in file
                      while(test--) {
                          ll n=1+rand()%500;  //Random length of string
                          string s[n];
                          for (ll i = 0; i < n; ++i) {
                              s[i]=97+rand()%26;   //Random character of string
                              fout << s[i];  //Output in file
                          }
                          fout<<endl;
                      }
                      fout.close();
                      cout<<"Random numbers generated into the file"<<endl;  //Logging on screen

                  } else
                      cout << "Unable to open file";
              }
</code>
<code>
  
    //Runner Program
    #include<bits/stdc++.h>
    using namespace std;

    int main() {
        ifstream fin ;
        fin.open ("testin.txt", ios::in );//| ios::app  //Open the testin file for reading test case generated
        ofstream fout ;
        fout.open ("testout.txt", ios::out );//| ios::app  //Open the testout file for printing output
        if (fin.is_open()) {
            while(!fin.eof()) {
                int t;
                fin >> t;  //Taking input from file
                while(t--) {
                    string s;
                    fin >> s;  //Taking input from file
                    bool working[26] = {false};
               
               //YOUR SOLUTION//
               
                for(int i = 0; i < 26; i++) {
                    if(working[i])
                        fout << (char)(i + 'a');  //Print output to testout
                }
                fout <<endl;
            }           
        }
        fin.close();  //Closing file streams
        fout.close();
        cout<<"Numbers taken from the file"<<endl;
    } else
        cout << "Unable to open file";
}
</code>
