/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head) return nullptr;
        map<Node*, Node*> mpp;
        Node* temp = head;
        while(temp!= NULL){
            mpp[temp] = new Node(temp->val);
            temp = temp->next;

        }
        temp = head;
        while(temp!= NULL){
            Node* newNode = mpp[temp];
            newNode -> next = mpp[temp->next];
            newNode->random = mpp[temp->random];
            temp = temp->next;

        }
        return mpp[head];
        
    }
};


//approach use a hash map to store the mapping between the original nodes and the new nodes. First, we create a new node for each original node and 
// store the mapping in the hash map. 
// Then, we iterate through the original list again and set the next and 
// random pointers for the new nodes using the hash map. Finally, we return the new head of the copied list.