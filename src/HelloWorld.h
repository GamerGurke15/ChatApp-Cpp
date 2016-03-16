#ifndef CHATAPP_CPP_HELLOWORLD_H
#define CHATAPP_CPP_HELLOWORLD_H

#include <gtkmm/window.h>
#include <gtkmm/button.h>

class HelloWorld : public Gtk::Window{
public:
  HelloWorld();

  virtual ~HelloWorld();

protected:
  void on_button_clicked();

  Gtk::Button mButton;
};


#endif //CHATAPP_CPP_HELLOWORLD_H
