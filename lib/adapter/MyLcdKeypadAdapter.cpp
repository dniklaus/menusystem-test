
#include "MyLcdKeypadAdapter.h"

MyLcdKeypadAdapter::MyLcdKeypadAdapter(LcdKeypad* lcdKeypad)
: m_lcdKeypad(lcdKeypad)
{ }

MyLcdKeypadAdapter::~MyLcdKeypadAdapter()
{ }

void MyLcdKeypadAdapter::handleKeyChanged(LcdKeypad::Key newKey)
{
  if (0 != m_lcdKeypad)
  {
    if (LcdKeypad::UP_KEY == newKey)
    {
      m_lcdKeypad->setBacklight(static_cast<LcdKeypad::LcdBacklightColor>(LcdKeypad::LCDBL_WHITE));
    }
    else if (LcdKeypad::DOWN_KEY == newKey)
    {
      m_lcdKeypad->setBacklight(static_cast<LcdKeypad::LcdBacklightColor>(LcdKeypad::LCDBL_OFF));
    }
  }
}