#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    //title at top of screen
    ofSetWindowTitle("Exercise_2");

    //background color
    ofBackground(0, 0, 0);
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    //translate(width/2, height/2);
    ofTranslate(mouseX, mouseY);
    
    //rotate around the origin
    //ofRotate(ellipse);
    
    ofColor c = moodmachine;
    ofEllipse(100, 0, 50, 50);
    
    
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

    ofDrawCircle( PosX, PosY, 115);
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
    ofCircle(160, 270, 115);
    
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
