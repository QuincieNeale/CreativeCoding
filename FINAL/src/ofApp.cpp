//
// 2017 Dan Wilcox danomatika.com
// EDP Creative Coding @ the University of Denver
//
#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetVerticalSync(true);
    ofSetFrameRate(60);
    ofSetWindowTitle("Animate");
    
    // a black background
    ofBackground(255);
    
    // loads all ".png" frames from the bin/data/Animation2 directory
    birds.load("Animation2", "png");
}

//--------------------------------------------------------------
void ofApp::update(){
    
    // update the frame based on the animation frame time,
    // you can also advance frames manually using nextFrame() & prevFrame()
    birds.update();
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    // draw the current frame,
    // this works like ofImage ala draw(x, y), draw(x, y, w, h), etc
    birds.draw(0, 0);
  
}
//--------------------------------------------------------------
void ofApp::keyPressed(int key) {
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    birds.setFrameRate(ofMap(y, 0, ofGetHeight(), 5, 60));
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

    birds.setFrameRate(0);
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

    //birds.setFrameRate(30);
    
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
