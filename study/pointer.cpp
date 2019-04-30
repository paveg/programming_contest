#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

struct Node {
    int key;
    string name;
    Node *prev, *next;
};

Node *n;

void init() {
    n = (Node *) malloc(sizeof(Node));
    n->prev = n;
    n->next = n;
}

void add(int key, string name) {
    Node *x = (Node *) malloc(sizeof(Node));
    x->name = name;
    x->key = key;
    x->prev = n->prev;
    n->prev->next = x;
    n->prev = x;
    x->next = n;
}

int main() {
    string s1, s2, s3;
    s1 = "test1";
    s2 = "test2";
    s3 = "test3";
    int key1, key2, key3;
    key1 = 1;
    key2 = 2;
    key3 = 3;

    init();
    add(key1, s1);
    add(key2, s2);
    add(key3, s3);

    Node *cur = n->next;
    cout << cur << endl;
    while (1) {
        if (cur == n) break;
        printf("[debug] addr: %p, prev: %p, next: %p, name: %s, key: %d\n",
               cur, cur->prev, cur->next, cur->name.c_str(), cur->key);
        printf("[debug] prev.name: %s, next.name: %s\n", cur->prev->name.c_str(), cur->next->name.c_str());
        cur = cur->next;
    }

    return 0;
}
