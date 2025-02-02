class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        string repeatedA = a;
        int repeatCount = 1;

        while (repeatedA.size() < b.size()) {
            repeatedA += a;
            repeatCount++;
        }

        if (repeatedA.find(b) != string::npos) return repeatCount;
        if ((repeatedA + a).find(b) != string::npos) return repeatCount + 1;

        return -1;
    }
};