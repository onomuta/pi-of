#include "Scene2.hpp"

void Scene2::init ()  {
  width = ofGetWindowWidth();
  height = ofGetWindowHeight();
}

//円の位置を更新するメソッド
void Scene2::update() {
  
}

void Scene2::display(float frame){
  ofSetColor(255);
  frame = frame / 1;
  ofDrawCircle(width/2, height/2, (cos(frame/20)+1)*100);    //円を描く
  
  
  ofDrawCircle(width/2 + sin(frame/20)*200,height/2 + cos(frame/20)*200, 20);    //円を描く
}
