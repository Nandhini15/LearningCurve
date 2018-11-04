// cout - console output - an object of ostream --type of Stream
// << - member func used to access elts wrt ostream
// stream - interface to external devices - can be file, stdin/out, network etc.
// ofstream - create a new file, open the file to write - ofstream of("new.txt"); - of<<"hi"<<endl;
//ofstream of("new.txt") - open file for write, clear the contents of the file
//ofstream of("new.txt",ofstream::app); - move the output pointer to the end of the file - write some contents to the end of the file.
//ofstream of("new.txt", ofstream::in, ofstream::out); 
//of.seekp(10,ios::beg); - move the op ptr 10 chars after beg
//of<<12345; - of.seekp(-5, ios::end); - move 12345 five chars before the end
//of<<"nothin has changed"<<endl; - of.seekp(-5, ios::cur); - 5 chars before the current position
//ifstream if("new.txt"); - open the file for read - int i - if>>i (read one word).
//Handling Error status in Stream - 4 bits - goodbit -badbit -failbit -eofbit
//inf.good(); (everything is good)(goodbit ==1)
//inf.bad(); (non-recoverable error)(badbit ==1)
//inf.fail(); (failed stream operation)(failbit ==1 && badbit ==1)
//inf.eof(); (end of file) (eofbit ==1)
//inf.clear(); - clear all the status
//inf.clear(ios::badbit); - sets badbit to 1 and everything to zero - clears everything except badbit
//inf.rdstate(); - read the current status flag
//inf.clear(inf.rdstate() & ~ios::failbit); - clears only the failbit
// To handle the errors with exceptions
//if.exceptions(ios::badbit | ios:: failbit) - when badbit or failbit sets to 1, exception or failure ll be thrown
//if.exceptions(ios::goodbit) - no exceptions r thrown.

#include <iostream>     // std::cerr
#include <fstream>      // std::ifstream

int main () {
  std::ifstream file;
  file.exceptions ( std::ifstream::failbit | std::ifstream::badbit );
  try {
    file.open ("test.txt");
    while (!file.eof()) file.get();
    file.close();
  }
  catch (std::ifstream::failure e) {
    std::cerr << "Exception opening/reading/closing file\n";
  }

  return 0;
}
