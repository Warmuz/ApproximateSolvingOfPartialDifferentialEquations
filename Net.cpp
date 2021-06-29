
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double net[1000][1000] = {{0},{0}};
    double z_step = 0.5;
    double t_step = 0.5;
    
    for(int i = 0; i <= 2; i++)
    {
        net[i][0] = 0;
        net[i][1] = 0;
        net[0][i] = sin(M_PI*z_step*i);
    }
    
    for(int t = 0; t <= 2; t++)
    {
        for(int k = 0; k <= 2; k++)
        {
            net[t+1][k] = net[t][k]+0.1*t_step*pow(z_step,-2)*(net[t][k+1]-2*net[t][k]+net[t][k-1]);
        }
    }
    for(int t=0;t<=2;t++){
        for(int k=0;k<=2;k++){
            cout<<net[t][k]<<", ";
        }
        cout<<";"<<endl;
    }
   
    
}
