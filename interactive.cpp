#include "interactive.h"
#include "drawable.h"

Interactive::Interactive(int x, int y, Background* parent):RegularMove(x, y, parent)
{
    Drawable:set_background_color(21,33,87);
    setFocus();
}

void Interactive::keyPressEvent(QKeyEvent* event)
{
    switch (event->key())
    {
    case Qt::Key_Up:
        arrow_pressed("UP");
        update_pos();
        break;
    case Qt::Key_Down:
        arrow_pressed("DOWN");
        update_pos();
        break;
    case Qt::Key_Left:
        arrow_pressed("LEFT");
        update_pos();
        break;
    case Qt::Key_Right:
        arrow_pressed("RIGHT");
        update_pos();
        break;
    default:
        QString text = event->text();
        if (text.size() == 1)
        {
            QChar ch = text[0];
            if (ch.isLetterOrNumber())
            {
                key_pressed(ch.toLatin1());
            }
        }
    }
}
void key_pressed(char key){
    update_pos();
}

void arrow_pressed(std::string cmd){

}
