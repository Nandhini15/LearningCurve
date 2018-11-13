#include <iostream>
#include <fstream>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    streampos begin, end;
    ofstream file1;//open and write contents to the file
    file1.open("new.txt");
    file1<<"Nandhini"<<endl;
    string line;
    ifstream file("new.txt");
    //creating a seperate instance to read the contents of the file
    if( file.is_open()){
        while(getline(file, line))
        {
            cout<<line<<'\n';
        }
        begin = file.tellg();
    file.seekg(0, ios::end);
    end = file.tellg();
    cout<<(end - begin)<<endl;
        file.close();
    }else
    cout<<"Unable to open file";
    //streampos - is type
    //tellp and tellg -  current get and put position
    //seekg and seekp -  change the location of the get and put position
    
    
    return 0;
}
