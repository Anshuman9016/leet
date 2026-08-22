#include <string>
#include <unordered_map>
#include <unordered_set>

using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        unordered_map<char, char> charMappingMap;
        unordered_set<char> mappedValues;

        for (int i = 0; i < s.length(); i++) {
            char original = s[i];
            char replacement = t[i];
            if (charMappingMap.find(original) == charMappingMap.end()) {
                if (mappedValues.find(replacement) != mappedValues.end()) {
                    return false;
                }
                charMappingMap[original] = replacement;
                mappedValues.insert(replacement);
            } else {
                char mappedCharacter = charMappingMap[original];
                if (mappedCharacter != replacement) {
                    return false;
                }
            }
        }

        return true;
    }
};