//
//  Scene4.cpp
//  emptyExample
//
//  Created by Takao Onomura on 2018/02/06.
//

#include "Scene4.hpp"

void Scene4::init ()  {
  width = ofGetWindowWidth();
  height = ofGetWindowHeight();
  
  for (int i = 0; i <= RECT_NUM; i++) {
    rect_size[i].x = ofRandom(width/10);
    rect_size[i].y = ofRandom(height/10);
    
    rect_position[i].x = ofRandom(width);
    rect_position[i].y = ofRandom(height);
    rect_speed[i].x = ofRandom(30) + 2;
  }
}

//円の位置を更新するメソッド
void Scene4::update() {
}

void Scene4::display(float frame){
  for (int i = 0; i <= RECT_NUM; i++) {
    ofSetColor(i % 2 * 255);
    
    
    rect_position[i].x = rect_position[i].x + rect_speed[i].x;
    
    
    if(rect_position[i].x > width){
      rect_size[i].x = ofRandom(width/10);
      rect_size[i].y = ofRandom(height/10);
      rect_position[i].y = ofRandom(height);
      rect_speed[i].x = ofRandom(30) + 2;
      
      rect_position[i].x = 0 - rect_size[i].x;
    }
    
    
    ofDrawRectangle(rect_position[i].x, rect_position[i].y, rect_size[i].x, rect_size[i].y);
  }
}

