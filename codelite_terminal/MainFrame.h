#ifndef MAINFRAME_H
#define MAINFRAME_H
#include "wxcrafter.h"
#include "my_callback.h"
#include "my_callback.h"
#include "terminal_options.h"
#include "my_config.h"

class IProcess;
class MainFrame : public MainFrameBaseClass
{
    friend class MyCallback;
    friend class PtyCallback;

    IProcess *      m_process;
    PtyCallback     m_ptyCllback;
    int             m_fromPos;
    IProcess *      m_dummyProcess;
    wxString        m_tty;
    int             m_slave;
    TerminalOptions m_options;
    bool            m_exitOnNextKey;
    MyConfig        m_config;

protected:
    virtual void OnChange(wxStyledTextEvent& event);
    virtual void OnStcUpdateUI(wxStyledTextEvent& event);
    void DoExecuteCurrentLine();
    wxString GetCurrentLine() const;
    void SetCartAtEnd();
    void AppendNewLine();
    wxString StartTTY();
    void StopTTY();
    void DoExecStartCommand();

public:
    MainFrame(wxWindow* parent, const TerminalOptions &options);
    virtual ~MainFrame();

    void OnExit(wxCommandEvent& event);
    void OnAbout(wxCommandEvent& event);

    const TerminalOptions& GetOptions() const {
        return m_options;
    }

    void Exit();

protected:
    virtual void OnKeyDown(wxKeyEvent& event);
};
#endif // MAINFRAME_H