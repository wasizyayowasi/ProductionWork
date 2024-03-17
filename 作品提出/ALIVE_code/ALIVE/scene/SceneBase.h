#pragma once

class SceneManager;

class SceneBase
{
public:
	/// <summary>
	/// �R���X�g���N�^
	/// </summary>
	/// <param name="manager">�V�[���}�l�[�W���[�̎Q��</param>
	SceneBase(SceneManager& manager) : manager_(manager){}

	/// <summary>
	/// �f�X�g���N�^
	/// </summary>
	virtual ~SceneBase() {};
	
	/// <summary>
	/// ������
	/// </summary>
	virtual void Init() = 0;

	/// <summary>
	/// �I��
	/// </summary>
	virtual void End() = 0;

	/// <summary>
	/// �X�V
	/// </summary>
	virtual void Update() = 0;

	/// <summary>
	/// �`��
	/// </summary>
	virtual void Draw() = 0;
protected:
	SceneManager& manager_;			//�V�[���}�l�[�W���[�̎Q��
};

