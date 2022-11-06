#include "baseexception.h"

class BaseException {
public:
    BaseException(const std::string& msg) : msg_(msg) {}
    ~BaseException() {}

    std::string getMessage() const {
        return (msq_);
    }
private:
    std::string msq_;
}
