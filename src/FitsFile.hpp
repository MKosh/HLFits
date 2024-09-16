#pragma once
#include "HDU.hpp"
#include "fitsio.h"
#include <vector>
#include <string>

////////////////////////////////////////////////////////////////////////////////
/// \brief This namespace
namespace HLFits {

////////////////////////////////////////////////////////////////////////////////
/// \brief Enum for read-write status of file
enum class FileMode {
  read_only,
  read_write
};

////////////////////////////////////////////////////////////////////////////////
/// \brief Interface for Fits Files
class FitsFile {
public:

  //////////////////////////////////////////////////////////////////////////////
  /// \brief Constructor
  FitsFile();

  //////////////////////////////////////////////////////////////////////////////
  /// \brief Constructor that opens file_name in mode
  FitsFile(const std::string file_name, FileMode mode, bool lazy_load);

  //////////////////////////////////////////////////////////////////////////////
  /// \brief Destructor
  ~FitsFile();

private:
  std::vector<HDU> m_extensions; /// List of extension header data units
  fitsfile* m_file_ptr = nullptr;/// Pointer to the cfitsio fitsfile
  int m_io_mode;                 /// io mode converted from HLFits to cfitsio
  int m_status = 0;              /// File status for cfitsio calls

  //////////////////////////////////////////////////////////////////////////////
  /// \brief Convert from HLFits file io mode to cfitsio mode
  auto ConvertIOMode(FileMode mode) -> void;
};

}
