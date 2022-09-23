#pragma once

/**
 * Name: Agartha
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class MultiUserClientLibrary.MultiUserClientStatics
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMultiUserClientStatics : public UBlueprintFunctionLibrary
	{
	public:
		void UpdateWorkspaceModifiedPackages();
		bool StartMultiUserDefaultConnection();
		void SetMultiUserPresenceVisibilityById(const struct FGuid& ClientEndpointId, bool Visibility, bool PropagateToAll);
		void SetMultiUserPresenceVisibility(const class FString& Name, bool Visibility, bool PropagateToAll);
		void SetMultiUserPresenceEnabled(bool IsEnabled);
		void PersistMultiUserSessionChanges();
		void JumpToMultiUserPresence(const class FString& OtherUserName, const struct FTransform& TransformOffset);
		bool GetRemoteMultiUserClientInfos(TArray<struct FMultiUserClientInfo>* ClientInfos);
		struct FTransform GetMultiUserPresenceTransform(const struct FGuid& ClientEndpointId);
		EMultiUserConnectionStatus GetMultiUserConnectionStatusDetail();
		bool GetMultiUserConnectionStatus();
		bool GetMultiUserClientInfoByName(const class FString& ClientName, struct FMultiUserClientInfo* ClientInfo);
		struct FMultiUserClientInfo GetLocalMultiUserClientInfo();
		struct FMultiUserConnectionError GetLastMultiUserConnectionError();
		bool ConfigureMultiUserClient(const struct FMultiUserClientConfig& ClientConfig);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
