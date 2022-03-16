#ifndef CPP_COMMONS_COMMON_VECTOR_H
#define CPP_COMMONS_COMMON_VECTOR_H

#include <vector>
#include <string>
#include <exception>
#include <iostream>
#include <fstream>
#include <common-util.h>
#include <cpp-commons/UnsupportedDataTypeException.h>
#include <cpp-commons/common-var.h>

namespace cpp_commons {

    namespace common_collection {

        namespace common_vector {

            template<typename T>
            std::vector<T> convertFromString(const std::string &str) {
                using namespace std;
                vector<T> v{};
                auto start = 0U;
                auto end = str.find(DELIM);
                string token;
                T data;
                while (end != string::npos) {
                    token = str.substr(start, end - start);
                    data = common_util::convertData<T>(token);
                    v.push_back(data);
//                    cout << token << endl;
                    start = end + DELIM.length();
                    end = str.find(DELIM, start);
                }
                token = str.substr(start, end);
                data = common_util::convertData<T>(token);
                v.push_back(data);
//                cout << token << endl;
                return v;
            }

            template<typename T>
            std::vector<T> importFromFile(const std::string &fileName) {
                using namespace std;
                ifstream is(fileName);
                if (is.is_open()) {   //checking whether the file is open
                    string tp;
                    while (getline(is, tp)) { //read data from file object and put it into string.
//                        cout << tp << endl; //print the data of the string
                        return convertFromString<T>(tp);
                    }
                    is.close(); //close the file object.
                }
                return vector<T>{};
            }

            template<typename T>
            void print(std::vector<T> v) {
                using namespace std;
                cout << "[";
                for (int i = 0; i < v.size(); ++i) {
                    cout << v.at(i);
                    if (i < v.size() - 1) {
                        cout << ", ";
                    }
                }
                cout << "]";
            }
        }
    }
}

#endif //CPP_COMMONS_COMMON_VECTOR_H
