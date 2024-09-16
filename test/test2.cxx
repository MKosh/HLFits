#include "HLFits.hpp"

int main(int argc, char* argv[]) {
  HLFits::FitsFile file{argv[1], HLFits::FileMode::read_only, true};

  // file.MoveTo("TEMPEXT");
  // file["TEMPEXT"].ReadColumns({"ST1_CTL1", "ST1_CTL2", "TIME"}); // Read multiple columns into memory
  // file["COOLEXT"].ReadColumns({"ST1_CTL1", "ST1_CTL2", "TIME"});
  //
  // auto temp_times = file["TEMPEXT"].ReadColumn("TIME"); // Get a single column in vector form from the file
  //
  // if (file["TEMPEXT"]["TIME"] != file["COOLEXT"]["TIME"]) {
  //   std::cout << "Error!" << std::endl;
  // }

}
