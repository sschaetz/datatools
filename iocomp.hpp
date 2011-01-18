
#ifndef NATAS_IOCOMP_HPP
#define NATAS_IOCOMP_HPP

#include <iostream>
#include <fstream>

namespace natas
{

  void asdf()
  {
    ifstream file ("file.txt", ios::in|ios::binary|ios::ate);
    if (file.is_open())
    {
        size = file.tellg();
        char *contents = new char [size];
        file.seekg (0, ios::beg);
        file.read (contents, size);
        file.close();
        //... do something with it
        delete [] contents;
    }
  }

}

#endif // NATAS_IOCOMP_HPP



