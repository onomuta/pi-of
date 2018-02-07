//
//  Scene3.hpp
//  emptyExample
//
//  Created by Takao Onomura on 2018/02/06.
//

#ifndef Scene3_hpp
#define Scene3_hpp

#include <stdio.h>
#include "ofMain.h"

class Scene3 {
  
public:
  
  void init();  //初期化メソッド
  void update();  //更新
  void display(float frame); //描画
  
  float frame ;
  float width, height;
  
  float rect_x, rect_y, rect_w, rect_h;
  
private:
  
};

#endif

