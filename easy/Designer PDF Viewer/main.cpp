int designerPdfViewer(vector<int> h, string word) {
    int maxHeight = 0;
    for (int i = 0; i < word.size(); i++) {
        maxHeight = maxHeight > h[(int)word[i] - 97] ? maxHeight : h[(int)word[i] - 97];
    }
    
    return maxHeight*word.size();
}