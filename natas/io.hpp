#ifndef NATAS_IO_HPP
#define NATAS_IO_HPP

#include <iostream>
#include <fstream>

namespace natas
{

  template <typename T>
  void save_raw_array(std::string filename, T * data, size_t size)
  {
    std::ofstream f(filename.c_str(), std::ios::binary);
    if (f.is_open())
    {
      f.write((char *)data, sizeof(T)*size);
      f.close();
    }
    else
    {
      throw;
    }
  }

  template <typename T>
  void load_raw_array(std::string filename, T * data, size_t size)
  {
    std::ifstream f(filename.c_str(), std::ios::binary);
    if (f.is_open())
    {
      f.read((char *)data, sizeof(T)*size);
      f.close();
    }
    else
    {
      throw;
    }
  }


}

#endif // NATAS_IO_HPP
