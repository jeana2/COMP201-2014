#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
using namespace std;

int main()
{
    string inpname;
    ifstream inp;
    ofstream outp;
    int x, sum = 0;
    
    cout << "Please enter the name of the input file?: ";
    cin >> inpname;
    
    inp.open(inpname.c_str());
    if (inp.fail()){
        cout << "Couldn't open file. Ending program" << endl;
        return -1;
    }
    
    outp.open("output.txt");
    if (outp.fail()){
        cout << "Couldn't open file. Ending program" << endl;
        return 1;
    }
    
    outp << "x\tx^2\tCurrent Sum" << endl;
    outp << "=\t===\t===========" << endl;
    
    while (inp >> x){
        sum += x;
        outp << x << "\t" << pow(x, 2) << "\t" << sum << endl;
    }
    
    inp.close();
    outp.close();
    
    return 0;
}
