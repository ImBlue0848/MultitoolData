//Long Arms: 
GameObject* gorillaPlayer = GameObject::Find("GorillaPlayer");
if(!gorillaPlayer) return; 
gorillaPlayer->GetLocalTransform()->SetLocalScale(Vector3(1.5f, 1.5f, 1.5f));
