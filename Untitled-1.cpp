#include <iostream>
#include <fstream>

using namespace std;

int main(){
    
    // apertura file input
    ifstream fin("input.txt");

    // creazione/apertura file output
    ofstream fout("output.txt");

    int n,n1,temp,full=0;
    int id[4];
    int id1[3];

    // prendiamo i primi due numeri dal file di input
    fin>>n>>n1;

    for(int i=0;i<n;i++){
        fin>>temp;  // file input >> variabile che deve tenere il dato
        id[i]=temp;
    }

    for(int i=0;i<n1;i++){
        fin>>temp;
        id1[i]=temp;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n1;j++){
            if(id[i]==id1[j]){
                full++;
            }
        }
    }

    fout<<full;

    fin.close();
    fout.close();

    return 0;
}