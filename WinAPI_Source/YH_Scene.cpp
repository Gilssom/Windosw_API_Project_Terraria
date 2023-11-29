#include "YH_Scene.h"

namespace YH
{
	Scene::Scene() : m_Layers { }
	{
		CreateLayers();
	}

	Scene::~Scene()
	{

	}

	void Scene::Initialize()
	{
		for (Layer* layer : m_Layers)
		{
			if (!layer)
				continue;

			layer->Initialize();
		}
	}
	void Scene::Update()
	{
		// ���� ��� for ��
		for (Layer* layer : m_Layers)
		{
			if (!layer)
				continue;

			layer->Update();
		}
	}
	void Scene::LateUpdate()
	{
		for (Layer* layer : m_Layers)
		{
			if (!layer)
				continue;

			layer->LateUpdate();
		}
	}
	void Scene::Render(HDC hdc)
	{
		for (Layer* layer : m_Layers)
		{
			if (!layer)
				continue;

			layer->Render(hdc);
		}
	}

	void Scene::AddGameObject(GameObject* gameObj, const enums::LayerType layerType)
	{
		m_Layers[(UINT)layerType]->AddGameObject(gameObj);
	}

	void Scene::CreateLayers()
	{
		m_Layers.resize((UINT)enums::LayerType::Max);

		for (size_t i = 0; i < (UINT)enums::LayerType::Max; i++)
		{
			m_Layers[i] = new Layer();
		}
	}

	void Scene::OnEnter()
	{

	}

	void Scene::OnExit()
	{

	}
}