#include <iostream>
#include <vector>
#include "blob.h"

using namespace std;

int main() {

    double springFieldSize = 100;

    vector<blob> blobs;
    blobs.push_back(blob(10));
    blobs.push_back(blob(11));
    blobs.push_back(blob(16));
    blobs.push_back(blob(15));
    blobs.push_back(blob(12));

    blob* bigBlob = new blob(0);

    for(int i = 0, max = blobs.size(); i < max; i++){
        cout << "Big blob size: " << bigBlob->getArea() << " | little blob size: " << blobs.at(i).getArea() << endl;
        bigBlob[0] += blobs.at(i);

    }

    if(springFieldSize < bigBlob[0].getArea()){
        cout << "spring field has been swallowed!" << endl;
    }else{
        cout << "Spring field has NOT been swalloed!" << endl;
    }
    return 0;
}