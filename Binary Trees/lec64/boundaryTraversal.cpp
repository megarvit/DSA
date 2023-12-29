// class Solution {
// public:

//     void traverseLeft(Node* root, vector<int>& ans){
//         //base case
//         if(root == NULL){
//             return ;
//         }
//         //leaf node condn
//         if(root->left == NULL && root->right == NULL){ 
//             return ;
//         }
        
//         ans.push_back(root->data);
        
//         if(root->left){
//             traverseLeft(root->left,ans);
//         }
//         else{
//             traverseLeft(root->right,ans);
//         }
//     }
    
//     void traverseLeaf(Node* root, vector<int>& ans){
//         //base case
//         if(root == NULL){
//             return ;
//         }
//         if(root->left == NULL && root->right == NULL){
//             ans.push_back(root->data);
//             return ;
//         }
//         traverseLeaf(root->left,ans);
//         traverseLeaf(root->right,ans);
//     }
    
//     void traverseRight(Node* root, vector<int>& ans){
//         //base case
//         if(root==NULL){
//             return;
//         }
        
//         if(root->left == NULL && root->right == NULL){
//             return ;
//         }
        
        
//         if(root->right){
//             traverseRight(root->right,ans);
//         }
//         else{
//             traverseRight(root->left,ans);
//         }
//         //wapas agaye
//         ans.push_back(root->data);
//     }
    
//     vector<int> boundary(Node *root)
//     {
//         vector<int> ans;
//         if(root == NULL){
//             return ans;
//         }
        
//         ans.push_back(root->data);
        
//         //left part store karana h
//         traverseLeft(root->left,ans);
        
//         //traverse Leaf nodes
        
//         //Left subtree
//         traverseLeaf(root->left,ans);
        
//         //Right subtree
//         traverseLeaf(root->right,ans);
        
//         //traverse right wala part
//         traverseRight(root->right,ans);
        
//         return ans;
//     }