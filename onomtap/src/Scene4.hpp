//
//  Scene4.hpp
//  emptyExample
//
//  Created by Takao Onomura on 2018/02/06.
//

#ifndef Scene4_hpp
#define Scene4_hpp

#include <stdio.h>
#include "ofMain.h"

class Scene4 {
  
public:
  
  void init();  //初期化メソッド
  void update();  //更新
  void display(float frame); //描画
  
  float frame ;
  float width, height;
  
  
  
  static const int RECT_NUM = 1000;
  ofVec2f rect_position[RECT_NUM];
  ofVec2f rect_size[RECT_NUM];
  ofVec2f rect_speed[RECT_NUM];
  

  
private:
  
};

#endif /* Scene4_hpp */
