#include<bits/stdc++.h>
using namespace std;

long double fact(int a)
{
    if(a>1)
    {
        return a*fact(a-1);
    }
    else
    {
        return 1;
    }
}

double combination(int n,int r)
{
    long  double num1 = fact(n);
    long double num2 = fact(n-r)*fact(r);
    long double num3 = num1/num2;
    return num3;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int k,m,n;
    ifstream input;
    input.open("C:\\Users\\shifa\\Downloads\\rosalind_iprb.txt");
    input>> k >> m >> n;
    cout<<k<<" "<<m<<" "<<n;
    int totalpopulation = k+m+n;
    long long int combo = combination(totalpopulation,2);
    long  double validcombo = combination(k,2)+k*m+k*n+.5*m*n+.75*combination(m,2);
    long double prob = validcombo/(double )combo;
    cout<<prob;
    ofstream outfile;
    outfile.open("output7.txt");
    outfile<<fixed << setprecision(5) <<prob<<endl;
    outfile.close();
    input.close();

    return 0;
}




