#ifndef __LANG_EXCEPTION_H__
#define __LANG_EXCEPTION_H__

#include <string>
#include <openehr/lang/Object.h>

namespace ehr {

    class Exception : public Object
    {
        public: Exception(std::string msg);
        public: std::string toString();
        private: std::string msg;
    };

}


#endif
