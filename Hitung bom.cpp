#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

struct Musuh{
    float x, y, jarak;
};

struct Bom
{
    float r;
};



int main(){
    float xc, yc;
    cin >> xc >> yc;
    float N;
    cin >> N;
    vector<Musuh> musuh(N);
    for(int i = 0; i < N; i++){
        cin >> musuh[i].x >> musuh[i].y;
        musuh[i].jarak = sqrt(pow((xc - musuh[i].x), 2) + pow((yc - musuh[i].y), 2));
    }

    float Q;
    cin >> Q;
     int mati;
    vector <Bom> bum(Q);
    for (int i = 0; i < Q ; i++){
        cin >> bum[i].r;
        
    }
    
    for(int j = 0; j < Q; j++){
    	mati = 0;
    	for(int i = 0; i < N; i++){
            if(bum[j].r >= musuh[i].jarak){
                mati++;
            }
        }
        	cout << mati << endl;
	}

    
    return 0;
}
