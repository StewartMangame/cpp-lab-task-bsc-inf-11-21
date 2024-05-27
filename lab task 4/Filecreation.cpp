#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    string line;
    ofstream Myfile("exampleFile.txt");
    if  (Myfile.is_open()){
        while(getline(Myfile, line)){
            cout << line << '\n';
        }
        Myfile.close();
        cout << "data has been writen to the file";
    }
    else {
        cout << "unable to open file";
        
    }
       // Myfile<<"this is a line. \n";
        //Myfile<< "this is another line. \n";

    
    return 0;
}