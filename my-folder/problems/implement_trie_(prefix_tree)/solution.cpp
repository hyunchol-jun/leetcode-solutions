struct TrieNode {
    TrieNode* children[26]{};
    bool end{false};
};

class Trie {
public:
    Trie() {
        root = new TrieNode;
    }
    
    void insert(string word) {
        TrieNode* currentNode = root;
        for (int i{0}; i < word.size(); ++i)
        {          
            if (!currentNode->children[word[i]-'a']) 
                currentNode->children[word[i]-'a'] = new TrieNode;
            currentNode = currentNode->children[word[i]-'a'];
        }
        currentNode->end = true;
    }
    
    bool search(string word) {
        TrieNode * currentNode = traverseTrie(word);
        return currentNode && currentNode->end;
    }
    
    bool startsWith(string prefix) {
        return traverseTrie(prefix);
    }
    
private:
    TrieNode* traverseTrie(string s) {
        TrieNode* currentNode = root;
        for (int i{0}; i < s.size() && currentNode; ++i)
        {
            currentNode = currentNode->children[s[i]-'a'];
        }
        return currentNode;
    }
    
    TrieNode* root;
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */