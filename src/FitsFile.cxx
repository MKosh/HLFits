#include "FitsFile.hpp"
#include <iostream>

////////////////////////////////////////////////////////////////////////////////
/// This is the detailed description
/// \param file_name Name of the file to open
/// \param mode Mode to open the file in
HLFits::FitsFile::FitsFile(const std::string file_name, FileMode mode, bool lazy_load) {
  m_io_mode = (int)mode;

  fits_open_file(&m_file_ptr, file_name.c_str(), m_io_mode, &m_status);
  if (m_file_ptr == nullptr) {
    std::cout << "ERROR!" << std::endl;
  }
}

////////////////////////////////////////////////////////////////////////////////
/// This is the destructor's detailed description
HLFits::FitsFile::~FitsFile() {
  if (m_file_ptr != nullptr) {
    fits_close_file(m_file_ptr, &m_status);
  }
}

////////////////////////////////////////////////////////////////////////////////
/// Convert description
auto HLFits::FitsFile::ConvertIOMode(FileMode mode) -> void {
}
