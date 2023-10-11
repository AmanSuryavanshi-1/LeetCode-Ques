class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        istringstream iss(s);
        string word;
      
        while (iss >> word) {
            words.push_back(word);
        }
      
        if (words.size() != pattern.size())
            return false;
      
        map<char, string> charToWord;
        map<string, char> wordToChar;
      
        for (int i = 0; i < pattern.length(); i++) {
            char c = pattern[i];
            string w = words[i];
          
            if (charToWord.find(c) == charToWord.end() && wordToChar.find(w) == wordToChar.end()) {
                charToWord[c] = w;
                wordToChar[w] = c;
            } else if (charToWord[c] != w || wordToChar[w] != c) {
                return false;
            }
        }
      
        return true;
    }
};
