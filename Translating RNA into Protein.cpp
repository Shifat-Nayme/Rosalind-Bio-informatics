#include<bits/stdc++.h>
using namespace std;

map<string, string> mp;

void protincode()
{
    mp.insert({"UUU","F"}); mp.insert({"UUC","F"}); mp.insert({"UUA","L"});    mp.insert({"UUG","L"});
    mp.insert({"UCU","S"}); mp.insert({"UCC","S"}); mp.insert({"UCA","S"});    mp.insert({"UCG","S"});
    mp.insert({"UAU","Y"}); mp.insert({"UAC","Y"}); mp.insert({"UAA",""}); mp.insert({"UAG",""});
    mp.insert({"UGU","C"}); mp.insert({"UGC","C"}); mp.insert({"UGA",""}); mp.insert({"UGG","W"});
    mp.insert({"CUU","L"}); mp.insert({"CUC","L"}); mp.insert({"CUA","L"});    mp.insert({"CUG","L"});
    mp.insert({"CCU","P"}); mp.insert({"CCC","P"}); mp.insert({"CCA","P"});    mp.insert({"CCG","P"});
    mp.insert({"CAU","H"}); mp.insert({"CAC","H"}); mp.insert({"CAA","Q"});    mp.insert({"CAG","Q"});
    mp.insert({"CGU","R"}); mp.insert({"CGC","R"}); mp.insert( {"CGA","R"});   mp.insert( {"CGG","R"});
    mp.insert({"AUU","I"}); mp.insert({"AUC","I"}); mp.insert({"AUA","I"});    mp.insert({"AUG","M"});
    mp.insert({"ACU","T"}); mp.insert({"ACC","T"}); mp.insert( {"ACA","T"});   mp.insert( {"ACG","T"});
    mp.insert({"AAU","N"}); mp.insert({"AAC","N"}); mp.insert({"AAA","K"});    mp.insert({"AAG","K"});
    mp.insert({"AGU","S"}); mp.insert({"AGC","S"}); mp.insert({"AGA","R"});    mp.insert({"AGG","R"});
    mp.insert({"GUU","V"}); mp.insert({"GUC","V"}); mp.insert( {"GUA","V"});   mp.insert({"GUG","V"});
    mp.insert({"GCU","A"}); mp.insert({"GCC","A"}); mp.insert( {"GCA","A"});   mp.insert({"GCG","A"});
    mp.insert({"GAU","D"}); mp.insert({"GAC","D"}); mp.insert( {"GAA","E"});   mp.insert({"GAG","E"});
    mp.insert({"GGU","G"}); mp.insert({"GGC","G"}); mp.insert( {"GGA","G"});   mp.insert({"GGG","G"});

}

string translator(string rna)
{
    for (auto itr = mp.begin(); itr != mp.end(); itr++)
    {
        if(itr->first == rna)
        {
          return itr->second;

        }

    }

}

int main()
{
    protincode();
    string rna;
    ifstream input;
    input.open("C:\\Users\\shifa\\Downloads\\rosalind_prot.txt");
    input>> rna;
    vector <string> rnaseq;

    //string rna = "AUGGCCAUGGCGCCCAGAACUGAGAUCAAUAGUACCCGUAUUAACGGGUGA";
    for(int i=0; rna[i]; i+=3)
    {
        rnaseq.emplace_back(rna.substr(i,3));
    }

    for (int i = 0; i < rnaseq.size(); i++)
    {
        cout<<rnaseq[i]<<endl;
    }
    string protin;

    for (int i = 0; i < rnaseq.size(); i++)
    {
        string p = translator(rnaseq[i]);
        protin= protin+p;
    }

    cout<<protin;




    ofstream outfile;
    outfile.open("output8.txt");
    outfile<<protin<<endl;
    outfile.close();
    input.close();
}



