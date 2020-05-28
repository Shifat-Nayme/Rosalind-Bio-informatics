#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string text,text2;
    ifstream input;
    input.open("C:\\Users\\shifa\\Downloads\\rosalind_hamm.txt");
    input>> text >> text2;

    cout<<text.length()<<endl;

    int cnt = 0;
    for(int i=0; text[i]; i++)
    {
        if(text[i]!=text2[i]) cnt++;


    }
    ofstream outfile;
    outfile.open("output4.txt");
    outfile<<cnt<<endl;
    outfile.close();
    input.close();
}


