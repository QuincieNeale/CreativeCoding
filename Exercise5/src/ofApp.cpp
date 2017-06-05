// Example 2. An application to capture, invert,
// and display live video from a webcam.
// This is ofApp.cpp

#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
        
        // Set capture dimensions of 320x240, a common video size.
        camWidth = 320;
        camHeight = 240;
        
        // Open an ofVideoGrabber for the default camera
        myVideoGrabber.initGrabber (camWidth,camHeight);
        
        // Create resources to store and display another copy of the data
        invertedVideoData = new unsigned char [camWidth * camHeight * 3];
        myTexture.allocate (camWidth,camHeight, GL_RGB);
}

//--------------------------------------------------------------
void ofApp::update(){
    // Ask the grabber to refresh its data.
    myVideoGrabber.update();
    
    // If the grabber indeed has fresh data,
    if(myVideoGrabber.isFrameNew()){
        
        // Obtain a pointer to the grabber's image data.
        unsigned char* pixelData = myVideoGrabber.getPixels().getData();
        
        // Reckon the total number of bytes to examine.
        // This is the image's width times its height,
        // times 3 -- because each pixel requires 3 bytes
        // to store its R, G, and B color components.
        int nTotalBytes = camWidth * camHeight * 3;
        
        // For every byte of the RGB image data,
        for(int i=0; i<nTotalBytes; i++){
            
            // pixelData[i] is the i'th byte of the image;
            // subtract it from 255, to make a "photo negative"
            invertedVideoData[i] = 255 - pixelData[i];
        }
        
        // Now stash the inverted data in an ofTexture
        myTexture.loadData (invertedVideoData, camWidth,camHeight, GL_RGB);
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(0,0,0);
    ofSetColor(255,255,255);
    
    // Draw the grabber, and next to it, the "negative" ofTexture.
    myVideoGrabber.draw(10,10);
    myTexture.draw(345, 10);
    myVideoGrabber.draw(680,10);
    
    myTexture.draw(10, 265);
    myVideoGrabber.draw(345,265);
    myTexture.draw(680, 265);
    
    myVideoGrabber.draw(10,520);
    myTexture.draw(345, 520);
    myVideoGrabber.draw(680,520);
    
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
