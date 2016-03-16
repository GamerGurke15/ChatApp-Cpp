#include "FrmMain.h"

using namespace Gtk;

FrmMain::FrmMain(BaseObjectType *cobject,
                 const Glib::RefPtr<Gtk::Builder> &refGlade)
        : Gtk::Window(cobject), builder(refGlade){
}
