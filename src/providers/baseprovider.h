#include <string>

class BaseProvider {
  private:
    std::string url;
    int max_entries;
    int timeout;
};
