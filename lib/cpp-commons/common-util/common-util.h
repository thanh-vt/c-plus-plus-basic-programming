#ifndef CPP_COMMONS_COMMON_UTIL_H
#define CPP_COMMONS_COMMON_UTIL_H

#include <string>
#include <cpp-commons/UnsupportedDataTypeException.h>

namespace cpp_commons {

    namespace common_util {

        template<typename T>
        T convertData(const std::string &data);

    }
}

#endif //CPP_COMMONS_COMMON_UTIL_H
