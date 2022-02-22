

#ifndef LOGINMENU_H
#define LOGINMENU_H
#include "../constants.h"
#include "menu.h"

class Session;
class CommandTok;
class RestrictedMenu;


using namespace std;

class LoginMenu : public Menu {
   public:
      LoginMenu();

   protected:
       virtual int backCommand(CommandTok* comm, Session* session) const;
       virtual int signinCommand(CommandTok* comm, Session* session) const;
       virtual int makeAcctCommand(CommandTok* comm, Session* session) const;
       virtual int guestCommand(CommandTok* comm, Session* session) const;
       //virtual int sendWelcome(Session* session) const;
};



#endif