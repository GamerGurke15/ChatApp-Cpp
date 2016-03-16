#include <iostream>
#include <gtkmm.h>
#include "HelloWorld.h"

using namespace std;

int main(int argc, char *argv[]){
  auto app = Gtk::Application::create(argc, argv, "org.gtkmm.examples.base");
  HelloWorld helloWorld;
  return app->run(helloWorld);
}