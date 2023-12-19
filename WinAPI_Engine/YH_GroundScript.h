#pragma once
#include "../WinAPI_Source/YH_Script.h"

namespace YH
{
	class GroundScript : public Script
	{
	public:
		GroundScript();
		~GroundScript();

		void Initialize() override;
		void Update() override;
		void LateUpdate() override;
		void Render(HDC hdc) override;


		void OnCollisionEnter(Collider* other) override;
		void OnCollisionStay(Collider* other) override;
		void OnCollisionExit(Collider* other) override;

	};
}