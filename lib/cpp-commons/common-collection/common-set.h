#ifndef CPP_COMMONS_COMMON_SET_H
#define CPP_COMMONS_COMMON_SET_H

#include <set>
#include <string>
#include <exception>
#include <iostream>
#include <fstream>
#include <common-util.h>
#include <cpp-commons/UnsupportedDataTypeException.h>
#include <cpp-commons/common-var.h>

namespace cpp_commons {

    namespace common_collection {

        namespace common_set {

            template<typename T>
            std::set<T> convertFromString(const std::string &str) {
                using namespace std;
                set<T> s{};
                auto start = 0U;
                auto end = str.find(DELIM);
                string token;
                T data;
                while (end != string::npos) {
                    token = str.substr(start, end - start);
                    data = common_util::convertData<T>(token);
                    s.insert(data);
//                    cout << token << endl;
                    start = end + DELIM.length();
                    end = str.find(DELIM, start);
                }
                token = str.substr(start, end);
                data = common_util::convertData<T>(token);
                s.insert(data);
//                cout << token << endl;
                return s;
            }

            template<typename T>
            std::set<T> importFromFile(const std::string &fileName) {
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
                return set<T>{};
            }

            template<typename T>
            void print(std::set<T> s) {
                using namespace std;
                cout << "[";
                typename set<T>::iterator beforeEnd = prev(s.end(), 1);
                for (auto it = s.begin(); it != s.end(); ++it){
                    cout << it.operator*();
                    if (it != beforeEnd) {
                        cout << ", ";
                    }
                }
                cout << "]";
            }

        }
    }
}

#endif //CPP_COMMONS_COMMON_SET_H
