#ifndef __LOADING_SCENE_H__
#define __LOADING_SCENE_H__

#include "ui/CocosGUI.h"
#include "cocos2d.h"
USING_NS_CC;

class Loading : public Layer
{
public:
	static Scene* createScene();
	virtual bool init();

	//���ý�����
	void SetPro(float fRate);
	//��ԴԤ����
	void LoadRec();
	//��ԴԤ���ػص�����
	void OnLoadArmatureData(float percent);
	//��Դ���ػص�
	void OnLoadRecCallBack(Object *pObj);

    CREATE_FUNC(Loading);

protected:
	int	m_nLoadRecNum;				//��Դ������
	int	m_nLoadRecTotalNum;			//��Դ��������

	ui::LoadingBar* pProLoadRec;    //������
};

#endif // __LOADING_SCENE_H__
