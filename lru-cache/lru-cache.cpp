class LRUCache {
public:
    struct node{
        int key;
        int val;
        node* next;
        node* prev;
        node(int _key,int _val){
            key=_key;
            val=_val;
        }
    };
    
    node* head =new node(-1,-1);
    node* tail=new node(-1,-1);
    
    int cap;
    unordered_map<int,node*> m;
    
    LRUCache(int capacity) {
        cap=capacity;
        head->next=tail;
        tail->prev=head;
    }
    
    void addNode(node* newNode){
        node *temp=head->next;
        newNode->prev=head;
        newNode->next=temp;
        head->next=newNode;
        temp->prev=newNode;
    }
    
    void deleteNode(node* delNode){
        node *delprev=delNode->prev;
        node *delnext=delNode->next;
        delprev->next=delnext;
        delnext->prev=delprev;
    }
    
    int get(int k) {
        if(m.find(k)!=m.end()){
            node* resNode=m[k];
            int res=resNode->val;
            m.erase(k);
            deleteNode(resNode);
            addNode(resNode);
            m[k]=head->next;
            return res;
        }
        return -1;
    }
    
    void put(int k, int value) {
        if(m.find(k)!=m.end()){
            node* existingNode=m[k];
            m.erase(k);
            deleteNode(existingNode);
        }
        if(m.size()==cap){
            m.erase(tail->prev->key);
            deleteNode(tail->prev);
        }
        addNode(new node(k,value));
        m[k]=head->next;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */