#include <iostream>
#include <fstream>

using namespace std;

unsigned short int n;
unsigned short int x[10];

ifstream fin("permutari.in");
ofstream fout("permutari.out");

bool Candidate(unsigned short int k) {

    for (unsigned short int i = 1; i < k; i++) {

        if (x[k] == x[i]) return false;

    }

    return true;

}

void BackTrack(unsigned short int k) {

    for (unsigned short int i = 1; i <= n; i++) {

        x[k] = i;

        if (Candidate(k)) {
            if (k == n) {

                for (unsigned short int j = 1; j <= n; j++) {
                    fout << x[j] << " ";
                }
                fout << "\n";

            } else {

                BackTrack(k + 1);

            }
        }


    }



}

int main()
{

    unsigned short int i;

    fin >> n;

    BackTrack(1);

    return 0;
}
