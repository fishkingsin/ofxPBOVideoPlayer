#pragma once

#include "ofMain.h"
#include "ofxGui.h"
#include "ofxPBOVideoPlayer.h"

class testApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed  (int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

	//ofVideoPlayer video;
	ofxPanel gui;
	ofxParameter<int> x,y,z;
	//ofFbo fbo;
	ofxPBOVideoPlayer video;
    ofPixels pixels[180];
};
