#include <iostream>
#include <string>
#include <cassert>
#include "strextra.h"
using namespace std;




int main() {

    std::string s = "The quick brown fox";

    assert(strextra::find(s, 'e') == 2);              
    assert(strextra::find(s, std::string("e")) == 2);  
    assert(strextra::find(s, ' ') == 3);              
    assert(strextra::find(s, std::string("quick")) == 4);  
    assert(strextra::find(s, std::string("quiet")) == -1); 
    assert(strextra::find(s, std::string("cow")) == -1);  
    assert(strextra::find(s, std::string("hix")) == -1);  

    std::string s2 = "11112";

    assert(strextra::find(s2, std::string("112")) == 2); 

    strextra::find(s, "deer");

    strextra::find(s,'e');

    strextra::find(s2,'3');



    return 0;
}