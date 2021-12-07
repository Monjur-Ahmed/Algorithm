#include<bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cout<<"How many Elements: ";
  cin>>n;

  int num[n];
  priority_queue <int> q;

  cout<<"Enter Elements: ";
  for(int i=0;i<n;i++)
  {
      cin>>num[i];
      q.push(num[i]);
  }

  while(!q.empty())
  {
      cout<<" "<<q.top();
      q.pop();
  }

  reverse(num);

}
