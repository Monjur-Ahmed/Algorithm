#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter how many Numbers:";
    cin>>n;
    int numbers[n];
    for(int i=0;i<n;i++)
    {
        cin>>numbers[i];
    }
    //Print Array
    cout<<"Entered Elements are:";
     for(int i=0;i<n;i++)
    {
        cout<<" "<<numbers[i];
    }
    cout<<"\n";
    int min,temp;

    for(int i=0;i<n;i++)
    {
        min=i;
        printf("\nStep = %d\n",i);
        cout<<"min= "<<min<<endl;
        for(int j=i+1;j<n;j++)
        {
            if(numbers[min]>numbers[j])
            {
              printf("j= %d, %d > %d -->True \n",j,numbers[min],numbers[j]);
              min=j;
              cout<<"min= "<<min<<endl;
            }
            else{
                printf("j= %d, %d > %d -->False \n",j,numbers[min],numbers[j]);
            }
        }
        printf("%d <swap> %d\n",numbers[i],numbers[min]);
        temp=numbers[i];
        numbers[i]=numbers[min];
        numbers[min]=temp;

      cout<<"\n"<<endl;
      cout<<"After Step: "<<i<<endl;
      for(int k=0;k<n;k++)
     {
        cout<<" "<<numbers[k];
     }
      cout<<"\n"<<endl;

    }

    cout<<"\nSorted Elements are:";
     for(int i=0;i<n;i++)
    {
        cout<<" "<<numbers[i];
    }



    getch();
}
