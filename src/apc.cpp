#include <iostream>
#include "providers/proxylistorg.h"
#include "exceptions/baseexception.h"

int main(int argc, char *argv[]) {
  std::cout << argv << std::endl;
  ProxyListOrg proxyListOrg;
  throw(BaseException("APC"));

  return 0;
}
