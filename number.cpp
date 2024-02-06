#include<iostream>
#include<stdlib.h>
#include<cmath>
using namespace std;
int main(){
    int i = 0,in,num=0,bin=0;
                    
    string card[5] =   {"16\t17\t18\t19\n20\t21\t22\t23\n24\t25\t26\t27\n28\t29\t30\t31\n\n",
                        "08\t09\t10\t11\n12\t13\t14\t15\n24\t25\t26\t27\n28\t29\t30\t31\n\n",
                        "04\t05\t06\t07\n12\t13\t14\t15\n20\t21\t22\t23\n28\t29\t30\t31\n\n",
                        "02\t03\t06\t07\n10\t11\t14\t15\n18\t19\t22\t23\n26\t27\t30\t31\n\n",
                        "01\t03\t05\t07\n09\t11\t13\t15\n17\t19\t21\t23\n25\t27\t29\t31\n\n"}; 
    while(i<5){   
        system("cls");
        cout<<"Is the Number present in The following Box:\n\n";
        cout<<card[i];
        cout<<"Enter 1 for 'YES' and 0 for 'NO': ";
        cin>>in;
        bin = bin*10+in;
        i++;
    }
    // cout<<bin<<endl;
    i=0;
    while(i<5){
        num = num + (bin%10)*pow(2,i);
        bin/=10;
        i++;
    }
    cout<<endl<<"Your Number is "<<num<<endl<<endl;
}