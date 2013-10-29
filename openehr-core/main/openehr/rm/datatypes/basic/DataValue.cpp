#include <openehr/lang/Exception.h>
#include <openehr/rm/datatypes/basic/DataValue.h>

namespace ehr {

    DataValue::DataValue()
    {

    }

    std::string DataValue::toString()
    {
        return "DataValue class";
    }

    DataValue* DataValue::parseValue(const std::string &value) {

        size_t i = value.find(",");
        if(i == std::string::npos || i == value.length()) {
            throw Exception("wrong string format");
        }

        //String rmName = value.substring(0, i);
        //DataValue dv = dataValueMap.get(rmName);

        //if(dv == null) {
        //throw new IllegalArgumentException("unsupported RM class[" + rmName + "]");
        //}

        //String v = value.substring(i + 1).trim();
        //return dv.parse(v);
        return new DataValue();
    }
}
