#include <wx/wx.h>

class MyApp : public wxApp {
public:
    virtual bool OnInit();
};

bool MyApp::OnInit() {
    // Crea una nueva ventana principal
    wxFrame *frame = new wxFrame(NULL, wxID_ANY, "Hola Mundo con wxWidgets");

    // Crea un wxStaticText
    wxStaticText *staticText = new wxStaticText(frame, wxID_ANY, "Hola Mundo", wxDefaultPosition, wxDefaultSize, wxALIGN_CENTER);

    // Muestra la ventana
    frame->Show(true);

    return true;
}

IMPLEMENT_APP(MyApp);
