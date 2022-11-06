#include <iostream>
#include <string>

class BaseException {
public:
    BaseException(const std::string& msg) {}
    ~BaseException() {}

    std::string getMessage();
private:
    std::string msq_;
};
