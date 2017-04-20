#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

//title at top of screen
    ofSetWindowTitle("PandaFace");
    
//resolution for your shapes
    ofSetCircleResolution(50);
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
//ears
    ofSetColor(0, 0, 0);
    ofCircle(80, 200, 55);
    ofCircle(240, 200, 55);
    
//face
    ofSetColor(255, 255, 255);
    ofCircle(160, 270, 115);
    
//outer left eye
    ofSetColor(0, 0, 0);
    ofCircle(100, 280, 40);
    
//outer right eye
    ofCircle(220, 280, 40);
    
//nose
    ofDrawEllipse(160, 320, 20, 10);
    
//inner left eye
    ofSetColor(255, 255, 255);
    ofCircle(105, 295, 20);
    
//inner right eye
    ofCircle(215, 295, 20);
    
//pupil left
    ofSetColor(0, 0, 0);
    ofCircle(110, 290, 10);
    
//pupil right
    ofCircle(210, 290, 10);
    
//reflection left eye
    ofSetColor(255, 255, 255);
    ofCircle(107, 285, 2);
    
//reflection right eye
    ofCircle(207, 285, 2);

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

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
