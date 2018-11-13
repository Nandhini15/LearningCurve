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
    //seekg is used to move the stream pointer to reading data from stream
    //seekp is used to move the stream pointer to write data into stream
    // std - default namespace in C++
    //#undef - used to undefine an existing macro defnition
    //Virtual destructor - A virtual destructor ensures that the objects resources
    //are released in the reverse order of the object being constructed w.r.t inherited object.
    return 0;
}
