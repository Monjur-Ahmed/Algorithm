#include <bits/stdc++.h>
using namespace std;

struct MinHeapNode {
    char data;
    int freq;
    MinHeapNode *left, *right;
    MinHeapNode(char data, int freq)
    {
        left = right = NULL;
        this->data = data;
        this->freq = freq;
    }
};

struct compare {

    bool operator()(MinHeapNode* l, MinHeapNode* r)

    {
        return (l->freq > r->freq);
    }
};

int bits=0,tbit=0;
void printCodes(struct MinHeapNode* root, string str)
{
    if (!root)
        return;
    if (root->data != '$')
    {
        cout << root->data << ": " << str << " \t--> " << str.size()*root->freq<< endl;
        bits += str.size()*root->freq;
        tbit += str.size();
    }
    printCodes(root->left, str + "0");
    printCodes(root->right, str + "1");
}

void HuffmanCodes(char data[], int freq[], int size)
{
    struct MinHeapNode *left, *right, *top;

    priority_queue<MinHeapNode*, vector<MinHeapNode*>, compare> minHeap;

    for (int i = 0; i < size; ++i)
        minHeap.push(new MinHeapNode(data[i], freq[i]));

    while (minHeap.size() != 1) {
        left = minHeap.top();
        minHeap.pop();
        right = minHeap.top();
        minHeap.pop();
        int fSum = left->freq + right->freq;
        top = new MinHeapNode('$', fSum);
        top->left = left;
        top->right = right;
        minHeap.push(top);
    }
    printCodes(minHeap.top(), "");
}


int main()
{
    cout<<"Enter Message: ";
    string msg;
    cin>>msg;
    map<char,int> table;

     for (auto character: msg) {
        table[character]++;
    }

     int n =  table.size();
     char arr[n];
     int freq[n];
     int i=0;

    for (auto it : table) {
       arr[i]= it.first;
       freq[i]= it.second;
       i++;
    }

    HuffmanCodes(arr, freq, n);

    int tableBits=n*8+tbit;
    cout<<"\nMsg bits: "<<bits<<endl;
    cout<<"Table Bits: "<<tableBits<<endl;
    cout<<"Total Bit: "<<bits+tableBits<<endl;

    return 0;
}
