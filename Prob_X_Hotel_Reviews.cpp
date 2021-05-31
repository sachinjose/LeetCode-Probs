#include"/Users/sachinjose/Desktop/DSnA/stdc++.h"

using namespace std;

class Node{

	public:
		bool isTerminal;
		Node* child[26];

	Node(){
		isTerminal = false;
		for (int i = 0; i < 26; i++){
			child[i] = NULL;
		}
	}
}	

void add(string word, Node* trie){
    int n = word.size();
    for(int i=0;i<n;i++){
        if(trie->child[word[i] - 'A'] == NULL){
            trie->child[word[i] - 'A'] = new Node();
        }
        trie = trie->child[word[i] - 'A'];
    }
    trie->isTerminal = true;
}

bool search(string word, Node* trie){
    int n = word.size();
    for(int i=0;i<n;i++){
        if(trie->child[word[i] - 'A'] == NULL) return false;
        trie = trie->child[word[i] - 'A'];
    }
    return trie->isTerminal;
}

void removeDupWord(string str,vector<string> &v){
    string word = "";
    for (auto x : str) 
    {
        if (x == '_')
        {
        	v.append(word);
            word = "";
        }
        else {
            word = word + x;
        }
    }
    v.append(word);
}
int main(){

	string A = "cool_ice_wifi"
 	vector<string> B = ["water_is_cool", "cold_ice_drink", "cool_wifi_speed"]

 	vector<string> dict;
 	removeDupWord(A,dict);

    Node* root = new Node();
    for(int i=0;i<dict.size();i++){
        add(dict[i] , root);
    }

    vector<int> index;
	for (int i = 0; i < B.size(); ++i){
		string temp;
		removeDupWord(B[i],temp);
		int score = 0;
		for (int j = 0; j < temp.size() ; ++j){
			if(search(temp[j],root)){
				score++;
			}
		}		
		index.append(score);
	}

	sort(score.begin(),score.end());

    return 0;
}