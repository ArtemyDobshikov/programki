#include<iostream>
using namespace std;
int Count = 0;
struct bt {
    bt *p1;
    bt *p2;
    int n;
};
bt *mt(int N) {
    if (N == 0) return NULL;
    bt *p;
    p = new bt;
    p->n = ++Count;
    N--;
    if (N == 0)
        p->p1 = p->p2 = NULL;
    bt* left= p->p1 = new bt;
    bt* right= p->p2 = new bt;
    left->p2 = right;
    right->p1 = left;
    left->n = ++Count;
    right->n= ++Count;
    left->p1 = right->p2 = mt(N - 1);
    return p;
}
int main(){
    bt * root = mt(10);
    return 0;
}
