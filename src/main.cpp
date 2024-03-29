#include <iostream>
#include <cli-creator/Cli.h>

using namespace CliCreator;

auto list = [](Arguments) {
  std::system("lsblk -l");
  return 0;
};

auto mount = [](Arguments args) {
  Cli::ValidateCommandArgsSize(args, 1);

  auto disk = args[0];
  std::cout << "Mounting..." << std::endl;
  std::system(("mkdir -p /media/" + disk).c_str());
  std::system(("mount -t auto /dev/" + disk + " /media/" + disk).c_str());
  std::cout << "Mounted " + disk + " at /media/" + disk << std::endl;
  return 0;
};

auto umount = [](Arguments args) {
  Cli::ValidateCommandArgsSize(args, 1);

  auto disk = args[0];
  std::cout << "Umounting..." << std::endl;
  std::system(("umount /dev/" + disk).c_str());
  std::system(("rm -rf /media/" + disk).c_str());
  std::cout << "Umounted " + disk << std::endl;
  return 0;
};

int main(int argc, char* argv[]) {
  Cli cli;

  cli.commands["list"] = list;
  cli.commands["-l"] = list;
  cli.commands["mount"] = mount;
  cli.commands["-m"] = mount;
  cli.commands["umount"] = umount;
  cli.commands["-u"] = umount;

  return cli.handle(argc, argv);
}
