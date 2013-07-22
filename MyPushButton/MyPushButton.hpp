#ifndef MYPUSHBUTTON_HPP
#define MYPUSHBUTTON_HPP


#include <QPushButton>


class MyPushButton : public QPushButton
{
  Q_OBJECT

public:

  explicit MyPushButton(QWidget *parent = 0);

}; // class MyPushButton


#endif // MYPUSHBUTTON_HPP
