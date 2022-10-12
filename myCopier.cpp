 /** 
 * A program that opens a text file, reads and prints line by line to the screen. Read the contents line-by-line while
  writing them to another file. Both file names will be provided as command-line arguments. 
 * myCopier.cpp takes two arguments. The first command-line argument is the file to read and the second command-line argument is
 the file to write. 
 * Example invocation: ./myCopier file1.txt file2.txt
 */

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

// Define file directory
#define FILE_PATH "/home/debian/phamhw6"

// Main
int main(int argc, char* argv[] ){
  if(argc!=3){
    cout << endl;
    cout << "Usage is reading-file and name of file: " << endl;
    cout << " e.g. ./myCopier read.txt write.txt" << endl;
    return 3;
  }

// Reading the first argument
string cmd(argv[1]);
cout << endl;
cout << "Starting the reading-file program" << endl;
cout << "The current FILE Path is: " << FILE_PATH << endl;
cout << "File name passed is: " << cmd << endl;
cout << endl;

// Variable for reading file
fstream fs;
string line;
// Define filename and file path
string filename = "/"+ cmd;
cout << "The string filename is: " << filename << endl;

string pathName = FILE_PATH + filename;
cout << "The string pathName is: " << pathName << endl;
cout << endl;

// The c_str() method returns a C++ string as a C string.
fs.open((pathName).c_str(), fstream::in);

//fs.open((FILE_PATH + filename).c_str(), std::fstream::in);
while(getline(fs,line)) cout << line << endl;
fs.close();
}
