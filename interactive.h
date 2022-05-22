#ifndef INTERACTIVE_H
#define INTERACTIVE_H

#include "regularmove.h"
#include <QKeyEvent>
#include <string>

class Interactive : public RegularMove
{
    Q_OBJECT
public:
    Interactive(int x, int y, Background *parent);
    virtual void key_pressed(char key);
    virtual void arrow_pressed(std::string cmd);
    void update_pos();
    void keyPressEvent(QKeyEvent* event);
};

#endif // INTERACTIVE_H
