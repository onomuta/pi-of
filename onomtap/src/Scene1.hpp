#ifndef Scene1_hpp
#define Scene1_hpp

#include <stdio.h>
#include "ofMain.h"

class Scene1 {
  
public:
  
  void init();  //初期化メソッド
  void update();  //更新
  void display(float frame); //描画

  float width, height;
private:
  
};

#endif
