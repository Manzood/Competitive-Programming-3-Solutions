#include<bits/stdc++.h>
using namespace std;
#define debug(x) cout<<#x<<" = "<<x<<endl;

struct node {
    int val;
    node* left;
    node* right;
} *tree;

struct node* newnode (int val) {
    node* temp = (struct node*) malloc(sizeof(struct node));
    temp->left=temp->right=NULL;
    temp->val=val;
    return temp;
}

void display (struct node* bst) {
    if (!bst) return;
    printf("%d ",bst->val);
    display (bst->left);
    display (bst->right);
}

// As far as I can tell, insertion cannot be iterative, it should be recursive 
// Added steps that it prints while inserting
struct node* insert (struct node* root, int val) {
    if (root == NULL) {
        // printf("Inserting Node %d\n", val);
        return newnode (val);
    }
    else if (val < root->val) {
        // printf("Currently at node %d, going left\n", root->val);
        root->left = insert (root->left, val);
    }
    else if (val > root->val) {
        // printf("Currently at node %d, going right\n", root->val);
        root->right = insert (root->right, val);
    }
    return root;
}

// the search currently displays the steps to the search
bool search (int val) {
    node* temp = tree;
    while (temp) {
        printf("Currently at node with value: %d\n",temp->val);
        if (temp->val==val) {
            printf("Found\n");
            return true;
        }
        else {
            if (val < temp->val) temp = temp->left;
            else temp = temp->right;
        }
    }
    printf("Not found\n");
    return false;
}

int findmin () {
    node* temp = tree;
    while (temp->left) {
        printf("Currently at node %d, going left\n", temp->val);
        temp=temp->left;
    }
    printf("Found min\n");
    return temp->val;
}

int findmax () {
    node* temp = tree;
    while (temp->right) {
        printf("Currently at node %d, going right\n", temp->val);
        temp = temp->right;
    }
    printf("Found max\n");
    return temp->val;
}

void inorder (struct node* root) {
    if (root->left) 
        inorder (root->left);
    printf("%d ", root->val);
    if (root->right) 
        inorder (root->right);
}

int successor (struct node* root, int val) {
    // need to rewrite this damn thing, because I'm so incredibly bad at it 
    // a successor is the next biggest element after the current element
    // Once I find the element, I'll look to the right; If I find something to the right I'll return that, otherwise I'll return INT_MIN
    // if I encounter INT_MIN, I'll have the parent return it's own value instead
    // But how do I check direction?
    printf("Currently at Node %d\n", root->val);
    if (root->val == val) {
        if (root->right) {
            printf("Returning value %d\n", root->right->val);
            return root->right->val;
        }
        printf("Returning value %d\n", INT_MIN);
        return INT_MIN;
    }
    int retval;
    if (val < root->val) retval = successor (root->left, val);
    else retval = successor (root->right, val);
    if (retval == INT_MIN && root->val > val) retval = root->val;
    printf("Retval is now %d\n", retval);
    return retval;
}

struct node* del (struct node* root, int val) {
    // TODO: fix this damn function and move on to heaps
    while (temp) {
        if (val < temp->val) {
            temp = temp->left;
        }
        else if (val > temp->val) {
            temp = temp->right;
        }
        else {
            temp=NULL;
            return true;
        }
    }
    return false;
}

int main() {
    int n;
    cin>>n;
    int val;
    for (int i=0;i<n;i++) {
        scanf("%d",&val);
        tree = insert (tree, val);
    }
    // int searchval;
    // printf("Enter search val: ");
    // scanf("%d",&searchval);
    // search(searchval);
    // int mn = findmin();
    // int mx = findmax();
    // printf("Min = %d\nMax = %d\n", mn, mx);
    // inorder (tree);
    // int succ = successor (tree, 71);
    // if (succ == INT_MIN) printf("Not found\n");
    // else printf("%d", succ);
    bool deleted = del (5);
    if (deleted) printf("Deletion complete\n");
    else printf("Value not found\n");
    display (tree);
}
