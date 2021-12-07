#include<bits/stdc++.h>
using namespace std;

struct table {
       int p;
       int w;
     float pw;
};

  bool comp(table a,table b)
  {
      return a.pw>b.pw;
  }

int main(){

   int max,n;
   cout<<"How many Objects: ";
   cin>>n;
   cout<<"Max Capacity: ";
   cin>>max;
   struct table obj[n];

   for(int i=0; i<n; i++)
   {
      cout<<"\nObject "<<i+1<<" Profit: ";
      cin>>obj[i].p;
      cout<<"Object "<<i+1<<" Weight: ";
      cin>>obj[i].w;
      obj[i].pw=obj[i].p*1.0/obj[i].w;
      cout<<"--------------------------------\n";
   }

   sort(obj,obj+n,comp);

   int fract_obj;
   float profit=0;

   for(int i=0;i<n;i++)
   {
      if(max>0 && obj[i].w<max)
      {
          max-=obj[i].w;
          profit+=obj[i].p;
      }
      else{
        fract_obj=i;
        break;
      }
   }
   if (max>0)
   {
       profit+=max*obj[fract_obj].p*1.0/obj[fract_obj].w;
   }

   cout<<"Maximum Profit: "<<profit<<endl;
}
