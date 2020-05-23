#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <vector>

using std::cout;
using std::ifstream;
using std::vector;
using std::string;
using std::istringstream;


vector<int> parsingLine(string line){

    istringstream myStream (line);
    int n;
    char c;
    vector<int> row;

    while (myStream >> n >> c && c == ',')
    {
        row.push_back(n);

    }
    return row;
    
}



#include "test.cpp"
int main(){

    testFile();




    return 0;



}