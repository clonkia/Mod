
#include "CvGameCoreDLL.h"

CivEffectTypes CIV_EFFECT_DEFAULT_ALL      = NO_CIV_EFFECT;
CivEffectTypes CIV_EFFECT_DEFAULT_EUROPEAN = NO_CIV_EFFECT;
CivEffectTypes CIV_EFFECT_DEFAULT_NATIVE   = NO_CIV_EFFECT;
CivEffectTypes CIV_EFFECT_DEFAULT_KING     = NO_CIV_EFFECT;
CivEffectTypes CIV_EFFECT_DEFAULT_HUMAN    = NO_CIV_EFFECT;
CivEffectTypes CIV_EFFECT_DEFAULT_AI       = NO_CIV_EFFECT;

CivEffectTypes NUM_CIV_EFFECT_TYPES        = FIRST_CIV_EFFECT;


void CvGlobals::setupEnums()
{
	NUM_CIV_EFFECT_TYPES = static_cast<CivEffectTypes>(m_paCivEffectInfo.size());

	int iCounter = 0;

	for (CivEffectTypes eCivEffect = FIRST_CIV_EFFECT; eCivEffect < NUM_CIV_EFFECT_TYPES; ++eCivEffect)
	{
		const char *szType = this->getCivEffectInfo(eCivEffect)->getType();

		if (strcmp(szType, "CIV_EFFECT_DEFAULT_ALL") == 0)
		{
			CIV_EFFECT_DEFAULT_ALL = eCivEffect;
		}
		else if (strcmp(szType, "CIV_EFFECT_DEFAULT_EUROPEAN") == 0)
		{
			CIV_EFFECT_DEFAULT_EUROPEAN = eCivEffect;
		}
		else if (strcmp(szType, "CIV_EFFECT_DEFAULT_NATIVE") == 0)
		{
			CIV_EFFECT_DEFAULT_NATIVE = eCivEffect;
		}
		else if (strcmp(szType, "CIV_EFFECT_DEFAULT_KING") == 0)
		{
			CIV_EFFECT_DEFAULT_KING = eCivEffect;
		}
		else if (strcmp(szType, "CIV_EFFECT_DEFAULT_HUMAN") == 0)
		{
			CIV_EFFECT_DEFAULT_HUMAN = eCivEffect;
		}
		else if (strcmp(szType, "CIV_EFFECT_DEFAULT_AI") == 0)
		{
			CIV_EFFECT_DEFAULT_AI = eCivEffect;
		}
		else
		{
			continue;
		}
		++iCounter;
		if (iCounter == 5)
		{
			// all found. No need to loop the rest
			break;
		}
	}
}