

#ifndef STREXTRA_H
#define STREXTRA_H

#include <string>
using namespace std;

namespace strextra {


    int find(string str, char a) {

        for (int i = 0; i < str.size(); i++) {
            if (str[i] == a) {
                return i;
            }
        }
        return -1;

    }

    int find(string str, string substring) {

        if(substring.empty() || substring.size() > str.size()) {
            return -1;
        }
        
        if(substring.size() == str.size()) {
            if(str == substring) {
                return 0;
            } else {
                return -1;
            }
        }

        for (int i = 0; i <= str.size() - substring.size(); i++) {
            if (str.substr(i, substring.size()) == substring) {
                return i;
            }
        }

        return -1;
    }



    
}
































#endif 