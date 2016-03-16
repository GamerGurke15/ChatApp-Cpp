#ifndef CHATAPP_CPP_FRMMAIN_H
#define CHATAPP_CPP_FRMMAIN_H


#include <gtkmm/window.h>
#include <gtkmm/builder.h>

class FrmMain : public Gtk::Window{
public:
  FrmMain(BaseObjectType *cobject, const Glib::RefPtr<Gtk::Builder> &refGlade);

protected:
  Glib::RefPtr<Gtk::Builder> builder;
};


#endif //CHATAPP_CPP_FRMMAIN_H
