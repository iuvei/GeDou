#ifndef __CHOOSE_HERO_H__
#define __CHOOSE_HERO_H__

#include "cocos2d.h"
#include "ui/CocosGUI.h"
#include "cocos-ext.h"
#include "cocostudio/CocoStudio.h"
using namespace cocos2d::ui;

USING_NS_CC;

class ChooseHero : public Layer
{
public:
	static Scene * createScene();

	virtual bool init();

	void OnGameStartPage(Object *pSender, Widget::TouchEventType type);	//��������

	void textFieldEvent(Object* pSender, Event type);

	//void OnBackToLoginPage(Object *pSender, Event type);//���ص�¼����

	void OnRoleSelect(CCObject *pSender, Widget::TouchEventType type);	//��ɫѡ�����
	void OnRoleSelect2(CCObject *pSender, Widget::TouchEventType type);	//��ɫѡ�����
	void OnRoleSelect3(CCObject *pSender, Widget::TouchEventType type);	//��ɫѡ�����

	bool OnRoleSelectMy(Touch *touch, Event *event);
	CREATE_FUNC(ChooseHero);

protected:
	//��ǩ
	enum
	{
		enTagStudioMainUiLayer,
		enTagRole,
	};

	int	m_nRoleID;	//��ɫID 1.����	2.Сӣ	3.����

	int btnIndex2;

	Button* pBtn_Role ;
	Button* pBtn_Role2;
	Button* pBtn_Role3;

	ImageView * pSelect_Img ;
	ImageView * pSelect_Img2;
	ImageView * pSelect_Img3;
};

#endif
