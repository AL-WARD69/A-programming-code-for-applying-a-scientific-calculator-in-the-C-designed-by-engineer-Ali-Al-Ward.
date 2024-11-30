#include<iostream>
#include<cmath>
#include<string>
#include<fstream>
using namespace std;
           ////////////////////////////////files//////////////////
		   ofstream calaulator;
		   
////////////////////////function////////////////////////////////
int pow(int x,int y)
{
	int i,z=1;
	for(i=1;i<=y;i++)
	{
		z=z*x;
	}
	return z;
}

//////////////////////////////////////////////////////////////////
struct address
{
int tel;
string email;	
};
///////////////////////////////////////////////////////////////////
struct exclusiveness
{
string neme;
address add;
};
main()

	
{
      calaulator.open("w.txt",ios::out);
      
	    cout<<" *           *    * * * *    *         * * * *    * * * *     * *     * *    * * * *  \n";
		cout<<" *           *    *          *        *          *       *   *   *   *   *   *        \n";
		cout<<" *     *     *    * * * *    *        *          *       *   *    * *    *   * * * *  \n";
		cout<<" *    * *    *    *          *        *          * * * * *   *     *     *   *        \n";
		cout<<" *   *   *   *    *          *        *          *       *   *           *   *        \n";
		cout<<"  * *     * *     * * * *    * * * *   * * * *   *       *   *           *   * * * *  \n";
		
                calaulator<<" =======================================================================================\n";
		calaulator<<"== *           *    * * * *    *         * * * *    * * * *     * *     * *    * * * *  ==\n";
		calaulator<<"== *           *    *          *        *          *       *   *   *   *   *   *        ==\n";
		calaulator<<"== *     *     *    * * * *    *        *          *       *   *    * *    *   * * * *  ==\n";
		calaulator<<"== *    * *    *    *          *        *          * * * * *   *     *     *   *        ==\n";
		calaulator<<"== *   *   *   *    *          *        *          *       *   *           *   *        ==\n";
		calaulator<<"==  * *     * *     * * * *    * * * *   * * * *   *       *   *           *   * * * *  ==\n";
		calaulator<<" =======================================================================================\n";
		

        cout<<"================================================================================\n";
        cout<<"================================================================================";


	int l;
	cout<<"enter number [ 1 ] for exclusiveness \n\n";
	calaulator<<  "enter number [ 1 ] for exclusiveness \n\n";
	 calaulator<<" \t \t or \n\n ";
	 calaulator<<"enter [2] for calaulator\n\n'+'\t'-'\t'*'\t'/'\t'%'\n\n";
	 calaulator<<" \t \t or\n \n";
	 calaulator<<"enter [3] for calaulator\n\n";
	 calaulator<<" \t \t or\n \n";
	 calaulator<<"enter [0] for go out\n\n";
	 calaulator<<"====================================";
	 calaulator<<"\n===================================\n";

	cin>>l;
	if(l==1)
	{
	
exclusiveness a;
a.neme="ALI ABDULLH ALWARD\n";
a.add.tel=774087409;
a.add.email="\n alwardy69gmail.com\n";
cout<<a.neme;
cout<<a.add.tel;
cout<<a.add.email;
}

long n1,n2; 
long n3;
int n;
char m;


if(l==2)
{
while(1)
{



calaulator<<"=====================================\n ";
 calaulator<< "enter the n1 : ";
cin>>n1; 
 calaulator<< "enter the n2 : ";
cin>>n2;
 calaulator<< "enter the sing : ";
cin>>m;
if(m=='+')
{
 calaulator<<"the result is : ";
 calaulator<<n1+n2<<" \n__________________"<<endl;
	
	
}
if(m=='-')
{
 calaulator<<"the result is : ";
 calaulator<<n1-n2<<" \n__________________"<<endl;
	
	
}
if(m=='*')
{
 calaulator<<"the result is : ";
 calaulator<<n1*n2<<" \n__________________"<<endl;
	
	
}
if(m=='/')
{
 calaulator<<"the result is : ";

 calaulator<<n1/n2<<" \n__________________"<<endl;
	
}


if(m=='%')
{
 calaulator<<"the result is : ";

 calaulator<<n1%n2<<" \n__________________"<<endl;


}
}
}
if(l==3)
{
	while(1)
	{
	
float n,g;
 calaulator<<"enter num";
cin>>n;
g=sqrt(n);
 calaulator<<"the root 2 = "<<g<<endl;
}
}
if(l==4)
{
while(1)
{

int x,y,r;
cin>>x;
cin>>y;
r=pow(x,y);
 calaulator<<x<<"^"<<y<<"="<<r;
}
}

if(l==5)
{		while(1)
	{
	
float n,g;
 calaulator<<"enter num";
cin>>n;
g=cbrt(n);
 calaulator<<"the root 3 = "<<g<<endl;
}
}

if(l==6)
{
		while(1)
	{
	
	int m=1,x;
	 calaulator<<"x=";
	cin>>x;
	for(int i=x;i>=1;i--)
	{
		m=m*i;
	}
	 calaulator<<"factorial of x="<<m<<endl;
}
}
{

  calaulator<<"\n*** THANKS *** \n_________________\n\n";
	if(l=='0')
		cout<<endl;
	}
}

