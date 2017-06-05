#pragma once

#include "ofMain.h"
#include "ofxGui.h"
#include "ofxXmlSettings.h"


//#include "opencv2/opencv.hpp"
//#include <opencv2/imgcodecs.hpp>
//#include <opencv2/videoio/videoio.hpp>
//#include <opencv2/highgui/highgui.hpp>

//#include <iostream>
//#include <stdio.h>

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
        //VideoGrabber code and ofTexture
        ofVideoGrabber myVideoGrabber;
        ofTexture myTexture;
    
        unsigned char* invertedVideoData;
        int camWidth;
        int camHeight;
    
    
    //using namespace cv;
    //using namespace std;
    
    //int main(int, char**)
    //{
        
        //VideoCapture cap(0); // Try with 0,1,2, etc. this is the number of your camera
        //if(!cap.isOpened())  // check if we succeeded
            //return -1;
        
        //int wow;
        //Mat frame;
        //for(;;) // Actually this is kind like while(1)
        //{
            //wow = waitKey(0); // (wait for a keyboard input)
            
            //if(wow==0x1B) break; // This is when you press Esc
            //else if(wow == 0x20) {  //When you press the Spacebar
                
                //cap >> frame; // get a new frame from camera
                //imshow("Your Image", frame);
            //}
        //}
        //// the camera will be deinitialized automatically in VideoCapture destructor
        //return 0;
    //}
};
