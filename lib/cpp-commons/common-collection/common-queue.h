#ifndef CPP_COMMONS_COMMON_QUEUE_H
#define CPP_COMMONS_COMMON_QUEUE_H

#include <queue>
#include <string>
#include <exception>
#include <iostream>
#include <fstream>
#include <common-util.h>
#include <cpp-commons/UnsupportedDataTypeException.h>
#include <cpp-commons/common-var.h>

namespace cpp_commons {

    namespace common_collection {

        namespace common_queue {

            template<typename T>
            std::queue<T> convertFromString(const std::string &str) {
                using namespace std;
                queue<T> q{};
                auto start = 0U;
                auto end = str.find(DELIM);
                string token;
                T data;
                while (end != string::npos) {
                    token = str.substr(start, end - start);
                    data = common_util::convertData<T>(token);
                    q.push(data);
//                    cout << token << endl;
                    start = end + DELIM.length();
                    end = str.find(DELIM, start);
                }
                token = str.substr(start, end);
                data = common_util::convertData<T>(token);
                q.push(data);
//                cout << token << endl;
                return q;
            }

            template<typename T>
            std::queue<T> importFromFile(const std::string &fileName) {
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
                return queue<T>{};
            }

            template<typename T>
            void print(std::queue<T> q) {
                using namespace std;
                cout << "<<==";
                int i = 0;
                while(!q.empty()){
                    cout << " " << q.front();
                    if (i < q.size() - 1) {
                        cout << " | ";
                    }
                    q.pop();
                }
                cout << " <<==";
            }

        }
    }
}

#endif //CPP_COMMONS_COMMON_LIST_H


#endif //CPP_COMMONS_COMMON_QUEUE_H
