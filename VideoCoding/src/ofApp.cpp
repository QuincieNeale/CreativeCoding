#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofSetVerticalSync(true);
    ofSetFrameRate(60);
    ofBackground(255);
    
    grabber.setup(640, 480);
    
    //center the image
    grabber.setAnchorPercent(0.5, 0.5);
}

//--------------------------------------------------------------
void ofApp::update(){

    //check if there are new camera frames and update pixels if there are
    grabber.update();
    
}

//--------------------------------------------------------------
void ofApp::draw(){

    grabber.draw(ofGetWidth()/2, ofGetHeight()/2);
    
    float maxBrightness = 0;
    ofPoint brightest;
    ofPixels &pixels = grabber.getPixels();
    for(int y = 0; y < pixels.getHeight(); y = y + 10) {
        for(int x = 0; x < pixels.getWidth(); x = x +10) {
            //ofSetColor(pixels.getColor(x,y));
            //ofDrawRectangle(x, y, 10, 10);
            
            ofColor c = pixels.getColor(x, y);
            
            if(c.getBrightness() > maxBrightness) {
                maxBrightness = c.getBrightness();
                brightest.set(x, y);
            }
            ofSetColor(c);
            ofDrawRectangle(x, y, 20, 20);
        }
    }
    //line.push_back(brihgtest);
   // while(line.size() > 100) {
        //pop front intil we are under 100 items
   //     line.erase(line.begin());
   // }
    
    //draw the current brihgtest point
    ofSetColor(ofColor::fuchsia);
    ofDrawCircle(brightest, 10);
    
    //for(int i = 0; i < lines.size() ++i) {
   //     ofVertex(line[i]);
  //  }
  //  ofEndShape();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
