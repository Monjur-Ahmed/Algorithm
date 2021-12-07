#include<bits/stdc++.h>
void heapSort();
void heapify(int n, int i);

using namespace std;
int n,num[10];

int main()
{
  cout<<"How many Elements: ";
  cin>>n;
  num[n];

  cout<<"Enter Elements: ";
  for(int i=0;i<n;i++)
  cin>>num[i];

  heapSort();

  cout << "Sorted array is \n";
  for (int i = 0; i < n; ++i)
        cout << num[i] << " ";
    cout << "\n";
}

void heapSort()
{
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(n, i);

    for (int i = n - 1; i > 0; i--) {
        swap(num[0], num[i]);
        heapify(i, 0);
    }
}

void heapify(int n, int i)
{
    int max = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < n && num[l] > num[max]) max = l;
    if (r < n && num[r] > num[max]) max = r;

    if (max != i) {
        swap(num[i], num[max]);
        heapify(n, max);
    }
}
