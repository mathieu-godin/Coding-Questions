int camelcase(string s) {
    int numWords = 1;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] >= 65 && s[i] <= 90) {
            ++numWords;
        }
    }
    return numWords;
}