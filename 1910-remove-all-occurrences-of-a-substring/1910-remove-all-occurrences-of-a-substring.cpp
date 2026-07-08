class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(s.length() > 0 && s.find(part) < s.length()){ //starting pt. > n
        
            s.erase( s.find(part) , part.length()); //starting posn , length
        }
    return s;
    }
};