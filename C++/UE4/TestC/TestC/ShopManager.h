#pragma once

enum EShopState
{
	ES_ShopList,
	ES_Shop,
};

class ShopManager
{
	
public:
	ShopManager();
	~ShopManager();
	void Install();
	void Logic();

	void ShopListLogic();

	void Reset();

protected:
	class Shop** Shops;
	int Size;

};

enum ELogic
{
	EL_Menu,
	EL_ScMenu,
};