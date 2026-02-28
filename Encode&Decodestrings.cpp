#include <vector>
#include <string>

class Solution {
public:
  
    std::string encode(std::vector<std::string> &strs) {
        std::string result = "";
        for (const std::string& s : strs) {
            result += std::to_string(s.size()) + "#" + s;
        }
        return result;
    }

    
    std::vector<std::string> decode(std::string &str) {
        std::vector<std::string> res;
        int i = 0;
        
        while (i < str.size()) {
            size_t j = str.find('#', i);
            
            int length = std::stoi(str.substr(i, j - i));
            
            i = j + 1;
            
            res.push_back(str.substr(i, length));
            
            i += length;
        }
        return res;
    }
};
