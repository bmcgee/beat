#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	stream.setup(2, 0, 44100, 256, 1);
	
	ofDirectory dir;
	dir.allowExt("mp3");
	dir.listDir("sounds");
	player.load("/Users/brian.mcgee/dev/openFrameworks/apps/myApps/beats/bin/data/sounds/breathe.mp3");
	player.play();
	
	stream.setOutput(player);
	
	ofSoundStreamSetup(0, 1, 44100, 256, 1);
	
	
	fft.setup();
	//fft.setSignal(player);

}

//--------------------------------------------------------------
void ofApp::update(){
	fft.update();
	
}

//--------------------------------------------------------------
void ofApp::draw(){
	fft.drawBars();
	fft.drawDebug();
	
	ofNoFill();
	ofDrawRectangle(824, 0, 200, 200);
	ofDrawRectangle(824, 200, 200, 200);
	ofDrawRectangle(824, 400, 200, 200);
	ofDrawRectangle(824, 600, 200, 200);
	
	fft.drawHistoryGraph(ofPoint(824,0), LOW);
	fft.drawHistoryGraph(ofPoint(824,200),MID );
	fft.drawHistoryGraph(ofPoint(824,400),HIGH );
	fft.drawHistoryGraph(ofPoint(824,600),MAXSOUND );
	ofDrawBitmapString("LOW",850,20);
	ofDrawBitmapString("HIGH",850,420);
	ofDrawBitmapString("MID",850,220);
	ofDrawBitmapString("MAX VOLUME",850,620);
	
	ofSetColor(0);
	ofDrawBitmapString("Press 'r' or 'q' to toggle normalization of values", 20,320);
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
