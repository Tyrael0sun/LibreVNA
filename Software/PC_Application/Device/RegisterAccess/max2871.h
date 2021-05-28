#ifndef MAX2871_H
#define MAX2871_H

#include "registerdevice.h"
#include <QWidget>
#include "CustomWidgets/siunitedit.h"

namespace Ui {
class MAX2871Widget;
}

class MAX2871 : public RegisterDevice
{
public:
    MAX2871();
    ~MAX2871();

    void fromJSON(nlohmann::json j) override;
    nlohmann::json toJSON() override;

    void addPossibleInputs(RegisterDevice *inputDevice) override;
private:
    SIUnitEdit *currentInput;
    Ui::MAX2871Widget *ui;
};

#endif // MAX2871_H
