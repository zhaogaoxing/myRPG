#ifndef _MYRPG_REGISTERVIEW_
#define _MYRPG_REGISTERVIEW_

#include <iostream>
#include "cocos2d.h"
#include "cocos-ext.h"

using namespace cocos2d;
using namespace extension;

class registerView :public CCLayerColor
{
public:
	Size size;
	virtual bool init();
	void menuCallBackClose();
	void menuCallBackRegiter();
	virtual void registerWithTouchDispatcher();

	virtual bool TouchBegan(Touch* touch, Event* event);
	virtual bool TouchMoved(Touch* touch, Event* event);
	virtual bool TouchEnded(Touch* touch, Event* event);

	static size_t process_data(void *buffer, size_t size, size_t nmemb, void *user_p);
	void registerSuccess();
	Menu* menu;
	bool menuflag;
	EditBox* registerusername;
	EditBox* firPassword;
	bool firFlag;
	bool secFlag;
	EditBox* secPassword;
	bool regiterBool;
	CREATE_FUNC(registerView);

};

#endif