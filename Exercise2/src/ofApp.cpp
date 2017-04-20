#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

//title at top of screen
    ofSetWindowTitle("SoLost");
    
//resolution for your shapes
    ofSetCircleResolution(50);
    
    ofBackground(ofColor::white);
    
    
    pos.x = ofRandom(ofGetWidth()/2);
    pos.y = ofRandom(ofGetHeight()/2);
    
    vel.x = ofRandom(-4,4);
    vel.y = ofRandom(-4,4);
    
    acc = vel.getLimited(1); //get same direction as vel, but limited to max length of 1
    
    ofLog() << "pos: " << pos << "vel: " << vel;
    ofLog() << "speed: " << vel.length() << "heading: " << pos.angle(vel);
    
    
    
}

//--------------------------------------------------------------
void ofApp::update(){
    if(boost) {
        vel = vel +acc;
    }
    
    pos = pos + vel; //update position using velocity
    
    if(pos.x < 0) {
        pos.x = 0;
        vel= -vel.x;
    }
    if(pos.x > ofGetWidth()) {
        pos.x = ofGetWidth();
        vel = -vel.x;
    }
    if(pos.y < 0) {
        pos.y = 0;
        vel= -vel.x;
    }
    if(pos.y > ofGetWidth()) {
        pos.y = ofGetWidth();
        vel = -vel.x;
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
   
    //draw circle
    ofSetColor(ofColor::darkRed);
    ofSetLineWidth(1);
    ofDrawCircle(pos, 20);
    ofDrawLine(0, 0, pos.x, pos.y);
    
    //draw the direction and speed
    ofSetColor(ofColor::green);
    ofSetLineWidth(2);
    ofDrawLine(pos.x, pos.y, pos.x+vel.x, pos.y+vel.y);
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

    if(key == ' ') {
        boost = true;
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

    if(key == ' ') {
        boost = false;
    }
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
