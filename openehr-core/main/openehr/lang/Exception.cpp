#include <openehr/lang/Exception.h>

namespace ehr {

    Exception::Exception(std::string msg)
    {
        this->msg = msg;
    }

    std::string Exception::toString()
    {
        return this->msg;
    }

}
