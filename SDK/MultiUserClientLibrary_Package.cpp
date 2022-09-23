/**
 * Name: Agartha
 * Version: 1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiUserClientLibrary.MultiUserClientStatics.UpdateWorkspaceModifiedPackages
	 * 		Flags  -> ()
	 */
	void UMultiUserClientStatics::UpdateWorkspaceModifiedPackages()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiUserClientLibrary.MultiUserClientStatics.UpdateWorkspaceModifiedPackages");
		
		UMultiUserClientStatics_UpdateWorkspaceModifiedPackages_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiUserClientLibrary.MultiUserClientStatics.StartMultiUserDefaultConnection
	 * 		Flags  -> ()
	 */
	bool UMultiUserClientStatics::StartMultiUserDefaultConnection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiUserClientLibrary.MultiUserClientStatics.StartMultiUserDefaultConnection");
		
		UMultiUserClientStatics_StartMultiUserDefaultConnection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiUserClientLibrary.MultiUserClientStatics.SetMultiUserPresenceVisibilityById
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       ClientEndpointId                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Visibility                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               PropagateToAll                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMultiUserClientStatics::SetMultiUserPresenceVisibilityById(const struct FGuid& ClientEndpointId, bool Visibility, bool PropagateToAll)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiUserClientLibrary.MultiUserClientStatics.SetMultiUserPresenceVisibilityById");
		
		UMultiUserClientStatics_SetMultiUserPresenceVisibilityById_Params params {};
		params.ClientEndpointId = ClientEndpointId;
		params.Visibility = Visibility;
		params.PropagateToAll = PropagateToAll;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiUserClientLibrary.MultiUserClientStatics.SetMultiUserPresenceVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Visibility                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               PropagateToAll                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMultiUserClientStatics::SetMultiUserPresenceVisibility(const class FString& Name, bool Visibility, bool PropagateToAll)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiUserClientLibrary.MultiUserClientStatics.SetMultiUserPresenceVisibility");
		
		UMultiUserClientStatics_SetMultiUserPresenceVisibility_Params params {};
		params.Name = Name;
		params.Visibility = Visibility;
		params.PropagateToAll = PropagateToAll;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiUserClientLibrary.MultiUserClientStatics.SetMultiUserPresenceEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEnabled                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMultiUserClientStatics::SetMultiUserPresenceEnabled(bool IsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiUserClientLibrary.MultiUserClientStatics.SetMultiUserPresenceEnabled");
		
		UMultiUserClientStatics_SetMultiUserPresenceEnabled_Params params {};
		params.IsEnabled = IsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiUserClientLibrary.MultiUserClientStatics.PersistMultiUserSessionChanges
	 * 		Flags  -> ()
	 */
	void UMultiUserClientStatics::PersistMultiUserSessionChanges()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiUserClientLibrary.MultiUserClientStatics.PersistMultiUserSessionChanges");
		
		UMultiUserClientStatics_PersistMultiUserSessionChanges_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiUserClientLibrary.MultiUserClientStatics.JumpToMultiUserPresence
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OtherUserName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  TransformOffset                                            (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UMultiUserClientStatics::JumpToMultiUserPresence(const class FString& OtherUserName, const struct FTransform& TransformOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiUserClientLibrary.MultiUserClientStatics.JumpToMultiUserPresence");
		
		UMultiUserClientStatics_JumpToMultiUserPresence_Params params {};
		params.OtherUserName = OtherUserName;
		params.TransformOffset = TransformOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiUserClientLibrary.MultiUserClientStatics.GetRemoteMultiUserClientInfos
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FMultiUserClientInfo>                ClientInfos                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UMultiUserClientStatics::GetRemoteMultiUserClientInfos(TArray<struct FMultiUserClientInfo>* ClientInfos)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiUserClientLibrary.MultiUserClientStatics.GetRemoteMultiUserClientInfos");
		
		UMultiUserClientStatics_GetRemoteMultiUserClientInfos_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ClientInfos != nullptr)
			*ClientInfos = params.ClientInfos;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiUserClientLibrary.MultiUserClientStatics.GetMultiUserPresenceTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       ClientEndpointId                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform UMultiUserClientStatics::GetMultiUserPresenceTransform(const struct FGuid& ClientEndpointId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiUserClientLibrary.MultiUserClientStatics.GetMultiUserPresenceTransform");
		
		UMultiUserClientStatics_GetMultiUserPresenceTransform_Params params {};
		params.ClientEndpointId = ClientEndpointId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiUserClientLibrary.MultiUserClientStatics.GetMultiUserConnectionStatusDetail
	 * 		Flags  -> ()
	 */
	EMultiUserConnectionStatus UMultiUserClientStatics::GetMultiUserConnectionStatusDetail()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiUserClientLibrary.MultiUserClientStatics.GetMultiUserConnectionStatusDetail");
		
		UMultiUserClientStatics_GetMultiUserConnectionStatusDetail_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiUserClientLibrary.MultiUserClientStatics.GetMultiUserConnectionStatus
	 * 		Flags  -> ()
	 */
	bool UMultiUserClientStatics::GetMultiUserConnectionStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiUserClientLibrary.MultiUserClientStatics.GetMultiUserConnectionStatus");
		
		UMultiUserClientStatics_GetMultiUserConnectionStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiUserClientLibrary.MultiUserClientStatics.GetMultiUserClientInfoByName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ClientName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMultiUserClientInfo                        ClientInfo                                                 (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool UMultiUserClientStatics::GetMultiUserClientInfoByName(const class FString& ClientName, struct FMultiUserClientInfo* ClientInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiUserClientLibrary.MultiUserClientStatics.GetMultiUserClientInfoByName");
		
		UMultiUserClientStatics_GetMultiUserClientInfoByName_Params params {};
		params.ClientName = ClientName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ClientInfo != nullptr)
			*ClientInfo = params.ClientInfo;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiUserClientLibrary.MultiUserClientStatics.GetLocalMultiUserClientInfo
	 * 		Flags  -> ()
	 */
	struct FMultiUserClientInfo UMultiUserClientStatics::GetLocalMultiUserClientInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiUserClientLibrary.MultiUserClientStatics.GetLocalMultiUserClientInfo");
		
		UMultiUserClientStatics_GetLocalMultiUserClientInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiUserClientLibrary.MultiUserClientStatics.GetLastMultiUserConnectionError
	 * 		Flags  -> ()
	 */
	struct FMultiUserConnectionError UMultiUserClientStatics::GetLastMultiUserConnectionError()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiUserClientLibrary.MultiUserClientStatics.GetLastMultiUserConnectionError");
		
		UMultiUserClientStatics_GetLastMultiUserConnectionError_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiUserClientLibrary.MultiUserClientStatics.ConfigureMultiUserClient
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMultiUserClientConfig                      ClientConfig                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UMultiUserClientStatics::ConfigureMultiUserClient(const struct FMultiUserClientConfig& ClientConfig)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiUserClientLibrary.MultiUserClientStatics.ConfigureMultiUserClient");
		
		UMultiUserClientStatics_ConfigureMultiUserClient_Params params {};
		params.ClientConfig = ClientConfig;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMultiUserClientStatics.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMultiUserClientStatics::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MultiUserClientLibrary.MultiUserClientStatics");
		return ptr;
	}

}


