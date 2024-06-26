#include "nwpwin.h"
#include "nwpdlg.h"

class number_dialog : public vsite::nwp::dialog {
	int inputNum;
protected:
	int idd() const override;
	bool on_init_dialog() override;
	bool on_ok() override;
public:
	int get_input_num();
	void set_input_num(int);
};
 
class main_window : public vsite::nwp::window {
	int tableNum;
	LOGFONT lf;
	COLORREF tableColor;
public:
	main_window();
protected:
	void on_paint(HDC hdc) override;
	void on_command(int id) override;
	void on_destroy() override;
};
