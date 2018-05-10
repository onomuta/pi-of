#ifndef Scene2_hpp
#define Scene2_hpp

#include <stdio.h>
#include "ofMain.h"

class Scene2 {
  
public:
  
  void init();  //初期化メソッド
  void update();  //更新
  void display(float frame); //描画
  
  float frame ;
  float width, height;
  
private:
  
};

#endif
