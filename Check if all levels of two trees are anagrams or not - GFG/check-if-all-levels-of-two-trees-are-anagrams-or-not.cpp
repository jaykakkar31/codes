//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};
Node* newNode(int val) {
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
Node* buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N') return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;) ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size()) break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    void solve1(Node *root,map<int,vector<int>> &m1,int level){
        if (root==NULL) return;
        solve1(root->right,m1,level+1);
        m1[level].push_back(root->data);
        solve1(root->left,m1,level+1);
        
    }
    
    bool areAnagrams(Node *root1, Node *root2)
    {   int level=1;
        map<int,vector<int>> m1;
        map<int,vector<int>> m2;
        solve1(root1,m1,level);
        solve1(root2,m2,level);
        vector<int> v1,v2;
        for(auto i:m1){
            sort(i.second.begin(),i.second.end());
            for(auto j :i.second){
                v1.push_back(j);
            }  
        }
        
        for(auto i:m2){
            sort(i.second.begin(),i.second.end());
            for(auto j :i.second){
                v2.push_back(j);
            }  
        }
        for(int i=0;i<v1.size();i++){
            // cout<<v1[i]<<" "<<v2[i]<<endl;
            if(v1[i]!=v2[i]){
                return false;
            }
        }
        return true;
        
        
        
    }
};

//{ Driver Code Starts.

/* Driver program to test size function*/
int main() {
    int t;
    scanf("%d\n", &t);
    while (t--) {
        string treeString1, treeString2;
        getline(cin, treeString1);
        Node *root1 = buildTree(treeString1);
        getline(cin, treeString2);
        Node *root2 = buildTree(treeString2);
        Solution ob;
        cout << ob.areAnagrams(root1, root2) << endl;
    }
    return 0;
}

// } Driver Code Ends