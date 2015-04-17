#pragma once

#include "StepTimer.h"
#include "DeviceResources.h"
#include "Sample3DSceneRenderer.h"
#include "SampleFpsTextRenderer.h"

// Renders Direct2D and 3D content on the screen.
namespace win_app
{
	class win_appMain : public DX::IDeviceNotify
	{
	public:
		win_appMain(const std::shared_ptr<DX::DeviceResources>& deviceResources);
		~win_appMain();
		void CreateWindowSizeDependentResources();
		void Update();
		bool Render();

		// IDeviceNotify
		virtual void OnDeviceLost();
		virtual void OnDeviceRestored();

	private:
		// Cached pointer to device resources.
		std::shared_ptr<DX::DeviceResources> m_deviceResources;

		// TODO: Replace with your own content renderers.
		std::unique_ptr<Sample3DSceneRenderer> m_sceneRenderer;
		std::unique_ptr<SampleFpsTextRenderer> m_fpsTextRenderer;

		// Rendering loop timer.
		DX::StepTimer m_timer;
	};
}