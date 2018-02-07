//
//  Scene3.cpp
//  emptyExample
//
//  Created by Takao Onomura on 2018/02/06.
//

#include "Scene3.hpp"

void Scene3::init ()  {
  width = ofGetWindowWidth();
  height = ofGetWindowHeight();
}

//円の位置を更新するメソッド
void Scene3::update() {
  
}

void Scene3::display(float frame){
  
  
  
  
  for (int i = 0; i < 10; i++) {
    ofSetColor(i % 2 * 255);
    rect_w = ofRandom(width/3);
    rect_h = ofRandom(height/3);

    rect_x = ofRandom(width) - rect_w/2;
    rect_y = ofRandom(height) - rect_h/2;
    
    ofDrawRectangle(rect_x, rect_y, rect_w, rect_h);
  }
}

