#ifndef COMMANDLINEPARSER_H
#define COMMANDLINEPARSER_H

#include <wx/string.h>
#include <wx/arrstr.h>
#include <set>
#include "codelite_exports.h"


class WXDLLIMPEXP_CL CompilerCommandLineParser
{
public:
	typedef std::set<wxString> Set_t;

protected:
	wxArrayString m_includes;
	wxArrayString m_macros;
	int           m_argc;
	char **       m_argv;
	wxString      m_diretory;

public:
	CompilerCommandLineParser(const wxString &cmdline);
	virtual ~CompilerCommandLineParser();

	wxString GetCompileLine() const;
	void SetArgc(int argc) {
		this->m_argc = argc;
	}
	void SetArgv(char** argv) {
		this->m_argv = argv;
	}
	void SetIncludes(const wxArrayString& includes) {
		this->m_includes = includes;
	}
	void SetMacros(const wxArrayString& macros) {
		this->m_macros = macros;
	}
	const wxArrayString& GetIncludes() const {
		return m_includes;
	}
	const wxArrayString& GetMacros() const {
		return m_macros;
	}
	char** GetArgv() {
		return m_argv;
	}

	int GetArgc() const {
		return m_argc;
	}
	const wxString& GetDiretory() const {
		return m_diretory;
	}
};

#endif // COMMANDLINEPARSER_H