
#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup(){
	counter = 0;
	scene = 0;
	ofSetCircleResolution(50);
	ofHideCursor();
	ofBackground(0,0,0);
	bSmooth = false;
	ofSetWindowTitle("graphics example");

	ofSetVerticalSync(true);
	ofSetFrameRate(60); // if vertical sync is off, we can go a bit fast... this caps the framerate at 60fps.
}

//--------------------------------------------------------------
void ofApp::update(){
	counter = counter + 0.033f;
}

//--------------------------------------------------------------
void ofApp::draw(){
	ofFill();

	ofSetColor(255,0,100);
	float radius = 50 + 10 * sin(counter);
	//ofDrawCircle(100,400,radius);

	//for (int i = 0; i < 5; i++){
	//	ofSetColor((int)ofRandom(100,255), 0, (int)ofRandom(100,255));
	//	ofDrawRectangle(ofRandom(0, ofGetWindowWidth()),ofRandom(0,ofGetWindowHeight()),ofRandom(10,300),ofRandom(10,300));
	//}
	for (int i = 0; i < 500; i++){
ofSetColor((int)ofRandom(100,255), 0, (int)ofRandom(100,255));
		ofDrawRectangle(i*2.56, 0.5 *(sin(counter + i *0.0033)+1) * ofGetWindowHeight(),2 ,30);
	}

	//ofDrawRectangle(mouseX,mouseY,130,130);

}


//--------------------------------------------------------------
void ofApp::keyPressed  (int key){
	if (key == 's'){
		bSmooth = !bSmooth;
        if (bSmooth){
            ofEnableAntiAliasing(); 
        }else{
            ofDisableAntiAliasing(); 
        }
	}
    
    

}

//--------------------------------------------------------------
void ofApp::keyReleased  (int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    mouseX = x;
    mouseY = y;
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
	scene = (scene + 1)%4;
_exit(0);
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
