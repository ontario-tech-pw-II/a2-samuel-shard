#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[]){
 	ifstream fin;
 	ofstream fout;
	
	// check if there are enough arguments
	if (argc == 3){
        cout << "There are the correct number of arguments.\n";
    }
    else{
        cout << "Error, incorrect number of arguments.\n"
        << "Two arguments are required: input file and output file.\n";
    }
	
	// open the first file
    fin.open(argv[1]);
 	
	char c;

 	if (fin.fail()) // check if it is successful 
 	{
 		cerr << " Cannot open the input file!" << endl;
 		return 1;
 	}else{
         cout << argv[1] << " input file has been opened.\n";
    }
 	

	// open the second file
	fout.open(argv[2]);

 	if (fout.fail()) // check if it is successful 
 	{
 		cerr << "Cannot open the output file!" << endl;
 		return 1;
 	}else{
         cout << argv[2] << " output file has been opened.\n";
    }
 	
 	while(fin.get(c)) 
	{
		fout << c;
	}
 	
 	fin.close(); 

 	fout.close();

 	return 0;
} 