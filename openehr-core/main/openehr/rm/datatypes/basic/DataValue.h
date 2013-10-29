#ifndef __DATAVALUE_H__
#define __DATAVALUE_H__

#include <string>

#include <openehr/rm/RmObject.h>

namespace ehr {

    /**
     * Abstract parent type of all concrete data value types
     *
     * @author Young.Gi
     * @version 1.0
     */
    class DataValue : public RmObject
    {
        protected: DataValue();

        /**
         * String form displayable for humans
         *
         * @return string presentation of this DataValue
         */
        public: std::string toString();

        public: virtual std::string getReferenceModelName();

        /**
         * Serialise the value in string format.
         *
         * @return
         */
        public: virtual std::string serialise();

        /**
         * Parse a serialised dataValue and returns a concrete DataValue class
         *
         * The format is the following:
         * [REFERENCE_MODEL_CLASS_NAME],[SERIALIZED FORMAT]
         *
         * @param value
         * @return instance of DataValue
         */
        public: static DataValue* parseValue(const std::string &value);

    };

}

#endif
