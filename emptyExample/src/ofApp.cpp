#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    counter = 0;
    frame = 0;
    scene = 0;
    ofSetCircleResolution(50);
    ofHideCursor();
    ofBackground(0,0,0);
    bSmooth = false;
    ofSetWindowTitle("graphics example");
    
    ofSetVerticalSync(true);
    ofSetFrameRate(60);
  
    S1.init();
    S2.init();
    S3.init();
    S4.init();
  
}

//--------------------------------------------------------------
void ofApp::update(){
    counter = counter + 0.033f;
    frame++;
  
}

//--------------------------------------------------------------
void ofApp::draw(){

  
  
  if(scene == 1){
    S1.display(frame);
  }else if(scene == 2){
    S2.display(frame);
  }else if(scene == 3){
    S3.display(frame);
  }else if(scene == 4){
    S4.display(frame);
  }

  
  
  
  
  ofSetColor(255);
  ofDrawBitmapString(scene, 10, 10);
}



//--------------------------------------------------------------
void ofApp::scene1(){
    ofSetColor(255,0,0);
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
  scene = (scene + 1) % 5;
  
  
  
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
