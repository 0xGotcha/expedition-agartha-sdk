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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function MultiUserClientLibrary.MultiUserClientStatics.UpdateWorkspaceModifiedPackages
	 */
	struct UMultiUserClientStatics_UpdateWorkspaceModifiedPackages_Params
	{	};

	/**
	 * Function MultiUserClientLibrary.MultiUserClientStatics.StartMultiUserDefaultConnection
	 */
	struct UMultiUserClientStatics_StartMultiUserDefaultConnection_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MultiUserClientLibrary.MultiUserClientStatics.SetMultiUserPresenceVisibilityById
	 */
	struct UMultiUserClientStatics_SetMultiUserPresenceVisibilityById_Params
	{
	public:
		struct FGuid                                               ClientEndpointId;                                        // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Visibility;                                              // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       PropagateToAll;                                          // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MultiUserClientLibrary.MultiUserClientStatics.SetMultiUserPresenceVisibility
	 */
	struct UMultiUserClientStatics_SetMultiUserPresenceVisibility_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Visibility;                                              // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       PropagateToAll;                                          // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MultiUserClientLibrary.MultiUserClientStatics.SetMultiUserPresenceEnabled
	 */
	struct UMultiUserClientStatics_SetMultiUserPresenceEnabled_Params
	{
	public:
		bool                                                       IsEnabled;                                               // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MultiUserClientLibrary.MultiUserClientStatics.PersistMultiUserSessionChanges
	 */
	struct UMultiUserClientStatics_PersistMultiUserSessionChanges_Params
	{	};

	/**
	 * Function MultiUserClientLibrary.MultiUserClientStatics.JumpToMultiUserPresence
	 */
	struct UMultiUserClientStatics_JumpToMultiUserPresence_Params
	{
	public:
		class FString                                              OtherUserName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FTransform                                          TransformOffset;                                         // 0x0010(0x0030)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MultiUserClientLibrary.MultiUserClientStatics.GetRemoteMultiUserClientInfos
	 */
	struct UMultiUserClientStatics_GetRemoteMultiUserClientInfos_Params
	{
	public:
		TArray<struct FMultiUserClientInfo>                        ClientInfos;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MultiUserClientLibrary.MultiUserClientStatics.GetMultiUserPresenceTransform
	 */
	struct UMultiUserClientStatics_GetMultiUserPresenceTransform_Params
	{
	public:
		struct FGuid                                               ClientEndpointId;                                        // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FTransform                                          ReturnValue;                                             // 0x0010(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MultiUserClientLibrary.MultiUserClientStatics.GetMultiUserConnectionStatusDetail
	 */
	struct UMultiUserClientStatics_GetMultiUserConnectionStatusDetail_Params
	{
	public:
		EMultiUserConnectionStatus                                 ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MultiUserClientLibrary.MultiUserClientStatics.GetMultiUserConnectionStatus
	 */
	struct UMultiUserClientStatics_GetMultiUserConnectionStatus_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MultiUserClientLibrary.MultiUserClientStatics.GetMultiUserClientInfoByName
	 */
	struct UMultiUserClientStatics_GetMultiUserClientInfoByName_Params
	{
	public:
		class FString                                              ClientName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FMultiUserClientInfo                                ClientInfo;                                              // 0x0010(0x0040)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MultiUserClientLibrary.MultiUserClientStatics.GetLocalMultiUserClientInfo
	 */
	struct UMultiUserClientStatics_GetLocalMultiUserClientInfo_Params
	{
	public:
		struct FMultiUserClientInfo                                ReturnValue;                                             // 0x0000(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MultiUserClientLibrary.MultiUserClientStatics.GetLastMultiUserConnectionError
	 */
	struct UMultiUserClientStatics_GetLastMultiUserConnectionError_Params
	{
	public:
		struct FMultiUserConnectionError                           ReturnValue;                                             // 0x0000(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MultiUserClientLibrary.MultiUserClientStatics.ConfigureMultiUserClient
	 */
	struct UMultiUserClientStatics_ConfigureMultiUserClient_Params
	{
	public:
		struct FMultiUserClientConfig                              ClientConfig;                                            // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
