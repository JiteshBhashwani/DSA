bool uniqueOccurrences(vector<int>& arr) {
    unordered_map<int,int> hash;
    for(auto&i:arr) hash[i]++;

    set<int> checker;
    for(auto&i:hash) checker.insert(i.second);

    return checker.size() == hash.size();
}
