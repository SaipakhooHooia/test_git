#include <iostream>
#include <fstream>

int main() {
  std::ofstream newFile;
  newFile.open("text.txt");

  newFile<<"Hello World\n";
  newFile<<"Hello again\n";
  newFile.close();
  return 0;
}
