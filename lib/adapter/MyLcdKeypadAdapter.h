#ifndef __MyLcdKeypadAdapter_H
#define __MyLcdKeypadAdapter_H

#include <LcdKeypad.h>

// Implement specific LcdKeypadAdapter in order to allow receiving key press events
class MyLcdKeypadAdapter : public LcdKeypadAdapter
{
public:
  MyLcdKeypadAdapter(LcdKeypad* lcdKeypad);
  virtual ~MyLcdKeypadAdapter();

  // Specific handleKeyChanged() method implementation - define your actions here
  void handleKeyChanged(LcdKeypad::Key newKey);

private:
  LcdKeypad* m_lcdKeypad;
};

#endif
