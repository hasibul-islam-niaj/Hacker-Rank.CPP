int hurdleRace(int k, vector<int> height) {
    int maxElem = *max_element(height.begin(), height.end());
    return maxElem > k ? maxElem - k : 0;
}
