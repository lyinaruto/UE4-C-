#pragma once

enum EGM_State
{
	EGM_Menu,
	EGM_Shop,
	EGM_Role,
};

class GameMode
{
	GameMode();
	class ShopManager* ShopMgs;
	class Role* Player;
	EGM_State State;
	bool bRun;

public:
	static GameMode* GetGM();
	~GameMode();
	class Role* GetPlayer();
	EGM_State SetState();
	void ResetShop();

	void Install();
	void Logic();

	bool IsRuning();

protected:
	void MenuLogic();
	void RoleLogic();

};

