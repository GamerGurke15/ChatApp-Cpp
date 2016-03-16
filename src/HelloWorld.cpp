#include <iostream>
#include "HelloWorld.h"

HelloWorld::HelloWorld()
        : mButton("Hello World"){
  set_border_width(10);
  mButton.signal_clicked().connect(sigc::mem_fun(*this,
                                                 &HelloWorld::on_button_clicked));
  add(mButton);
  mButton.show();
}

HelloWorld::~HelloWorld(){
}

void HelloWorld::on_button_clicked(){
  std::cout << "Hello World" << std::endl;
}
