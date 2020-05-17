/* Node is defined as :
typedef struct node
{
    int val;
    struct node* left;
    struct node* right;
    int ht;
} node; */

int get_height(node *root) {
    return root ? root->ht : -1;
}

void update_height(node *root) {
    int left = get_height(root->left);
    int right = get_height(root->right);
    root->ht = left > right ? left + 1 : right + 1;
}

int get_balance_factor(node *root) {
    return get_height(root->left) - get_height(root->right);
}

node* rotate_left(node *root) {
    node *new_root = root->right;
    root->right = new_root->left;
    new_root->left = root;
    update_height(new_root->left);
    update_height(new_root);
    return new_root;
}

node* rotate_right(node *root) {
    node *new_root = root->left;
    root->left = new_root->right;
    new_root->right = root;
    update_height(new_root->right);
    update_height(new_root);
    return new_root;
}

node* balance(node *root) {
    int balance_factor = get_balance_factor(root);
    node *new_root = root;
    if (balance_factor > 1) {
        if (get_balance_factor(root->left) < 0) {
            root->left = rotate_left(root->left);
        }
        new_root = rotate_right(root);
    } else if (balance_factor < -1) {
        if (get_balance_factor(root->right) > 0) {
            root->right = rotate_right(root->right);
        }
        new_root = rotate_left(root);
    }
    return new_root;
}

node* insert(node * root,int val)
{
    if (!root) {
        node *temp = (node*) malloc(sizeof(node));
        memset(temp, 0, sizeof(node));
        temp->val = val;
        return temp;
    }

    if (root->val < val) {
        root->right = insert(root->right, val);
    } else {
        root->left = insert(root->left, val);
    }

    update_height(root);
    root = balance(root);
    return root;
}
