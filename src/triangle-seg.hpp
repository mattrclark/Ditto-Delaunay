//
//  segment.hpp
//  delaunay_test
//
//  Created by Matthew Clark on 21/03/2016.
//
//

#ifndef segment_hpp
#define segment_hpp

#include <stdio.h>
#include "../ofMain.h"

class Tri_Segment{
    vector<ofPoint> vertices;
    vector<float> angles;
    ofImage img;
    
    bool compareAngles(Tri_Segment _other);
    
public:
    Tri_Segment(vector<ofPoint> _corners);
    
    void compare(Tri_Segment _other);
    float getAngle(int i);
    void printAngles();
    
    vector<float> getAllAngles(){
        return angles;
    };
    
    ofPoint getMidPos();
    ofPoint midPoint;
    
    bool checkAnglePos(vector<float> angles, vector<float> otherAngles, int firstPos, int multiplier);
    
    ofColor col = ofColor(255);
    bool compared;
};

#endif /* segment_hpp */
