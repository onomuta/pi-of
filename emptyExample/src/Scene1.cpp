#include "Scene1.hpp"

void Scene1::init ()  {
  width = ofGetWindowWidth();
  height = ofGetWindowHeight();
}


void Scene1::update() {
}

void Scene1::display(float frame){
  ofSetColor(255,0,0);
  ofFill();
  
  ofSetColor(255,0,100);

  for (int i = 0; i < 500; i++){
    ofSetColor((int)ofRandom(100,255), 0, (int)ofRandom(100,255));
    ofDrawRectangle( float(i) / 500 * width , 0.5 *(sin(frame/20 + i *0.0033)+1) * height,2 ,30);
  }
  
  

}
