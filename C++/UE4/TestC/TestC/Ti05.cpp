#include "stdafx.h"
#include "Ti05.h"
#include "GameMode.h"

void Ti05main()
{
	GameMode::GetGM()->Install();
	GameMode::GetGM()->Logic();
}

