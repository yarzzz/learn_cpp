#include <iostream>
#include "cli11.hpp"

using namespace std;

int main(int argc, char *argv[]) {
  CLI::App app;

  app.add_flag("-v,--version"
    ,[](int count){std::cout << "<this is --version>" << endl;}
    ,"show version"
  );

  CLI::App* subVersion = app.add_subcommand("version", "show version");
  subVersion->callback(
    []() {
      cout << "<this is version>" << endl;
    }
  );

  CLI::App* subRun = app.add_subcommand("run", "run program");
  string config = "./default.conf";
  subRun->add_option("-c,--config", config, "config file path");
  subRun->callback(
    [&config]() {
      cout << config << endl
      << "running" << endl;
    }
  );

  CLI11_PARSE(app, argc, argv);

  // cout << app.help();

  return 0;
}