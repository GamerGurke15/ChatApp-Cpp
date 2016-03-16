#include <iostream>
#include <gtkmm/builder.h>
#include <gtkmm/application.h>
#include <gtkmm/dialog.h>
#include "FrmMain.h"

using namespace std;


int main(int argc, char *argv[]){
  auto app = Gtk::Application::create(argc, argv);
  auto builder = Gtk::Builder::create_from_file("glade/mainApplication.glade");

  FrmMain *frmMain = 0;
  builder->get_widget_derived("frmMain", frmMain);
  return app->run(*frmMain);
}