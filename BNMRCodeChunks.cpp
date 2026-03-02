//Long Arms: 
GameObject* gorillaPlayer = GameObject::Find("GorillaPlayer"); //GameObject::Find(); finds the gameobject so that you can modify it.
if(!gorillaPlayer) return; //this checks if the GorillaPlayer Gameobject from above = null (if its not there), and if it isnt there then it exits.
gorillaPlayer->GetLocalTransform()->SetLocalScale(Vector3(1.5f, 1.5f, 1.5f));
//if youre on an older version of BNMResolve, this will change the scale of the GorillaPlayer up, giving you longer arms.
//however, if youre on a newer version of BNMResolve and its missing arguments, replace the setlocalscale with:
//SetLocalScale(Vector3(1.5f, 1.5f, 1.5f), 0.0f, 0.0f)

askhfbaksfbaksf
