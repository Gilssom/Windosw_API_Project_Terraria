#pragma once
#include "YH_UIBase.h"
#include "YH_Texture.h"

namespace YH
{
	class UIMinimap : public UIBase
	{
	public:
		UIMinimap();
		~UIMinimap();

		virtual void OnInit() override;
		virtual void OnActive() override;
		virtual void OnInActive() override;
		virtual void OnUpdate() override;
		virtual void OnLateUpdate() override;
		virtual void OnRender(HDC hdc) override;
		virtual void OnClear() override;

	private:
		graphics::Texture* m_Texture[4];
	};
}