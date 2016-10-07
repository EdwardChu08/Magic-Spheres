//
//  main.cpp
//  MagicSpheres
//
//  Created by Edward Chu on 5/10/2016.
//  Copyright (c) 2016 Puffins. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    // insert code here...
    int ballsHave [3];
    int ballsReq [3];
    int ballsDifference [3];
    int i=0;
    int positive=0, negative=0;
    
    for(i=0;i<3;i++)
        cin>>ballsHave[i];
    
    
    for(i=0;i<3;i++)
        cin>>ballsReq[i];
    
    for(i=0;i<3;i++){
        ballsDifference[i]=ballsHave[i]-ballsReq[i];
    }
    
    for(i=0;i<3;i++){
        if(ballsDifference[i]>0){
            positive+=ballsDifference[i]/2;
        } else{
            negative+=ballsDifference[i];
        }
        
    }
    
    if(positive>=-negative){
        cout<<"Yes";
    } else {
        cout<<"No";
    }
    
    
    
    
    
    
}