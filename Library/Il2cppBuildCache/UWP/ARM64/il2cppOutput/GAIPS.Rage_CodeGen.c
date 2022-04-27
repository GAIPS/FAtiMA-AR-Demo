#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 T GAIPS.Rage.Asset`1::CreateInstance(GAIPS.Rage.AssetStorage)
// 0x00000002 System.Void GAIPS.Rage.Asset`1::Save()
// 0x00000003 System.Void GAIPS.Rage.Asset`1::.ctor()
// 0x00000004 System.Void GAIPS.Rage.Asset`1::.cctor()
// 0x00000005 System.Void GAIPS.Rage.AssetStorage::.ctor()
extern void AssetStorage__ctor_m3416EB8E070D8B11C2CCC280E7DE90407C53B15B (void);
// 0x00000006 GAIPS.Rage.AssetStorage GAIPS.Rage.AssetStorage::FromJson(System.String)
extern void AssetStorage_FromJson_mE0F5AF1614D4585FBBBE14B703C11295F7C54932 (void);
// 0x00000007 System.Void GAIPS.Rage.AssetStorage::StoreComponent(System.String,System.String)
extern void AssetStorage_StoreComponent_m2C8B6045B2A0EA4603A06D8E63C0BD35CEFCFD78 (void);
// 0x00000008 System.String GAIPS.Rage.AssetStorage::GetComponentConfiguration(System.String)
extern void AssetStorage_GetComponentConfiguration_m404BE882A5FC335BD0785C54E70BE5A50D349BC1 (void);
static Il2CppMethodPointer s_methodPointers[8] = 
{
	NULL,
	NULL,
	NULL,
	NULL,
	AssetStorage__ctor_m3416EB8E070D8B11C2CCC280E7DE90407C53B15B,
	AssetStorage_FromJson_mE0F5AF1614D4585FBBBE14B703C11295F7C54932,
	AssetStorage_StoreComponent_m2C8B6045B2A0EA4603A06D8E63C0BD35CEFCFD78,
	AssetStorage_GetComponentConfiguration_m404BE882A5FC335BD0785C54E70BE5A50D349BC1,
};
static const int32_t s_InvokerIndices[8] = 
{
	-1,
	-1,
	-1,
	-1,
	5175,
	7203,
	2448,
	3302,
};
static const Il2CppTokenRangePair s_rgctxIndices[1] = 
{
	{ 0x02000002, { 0, 6 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[6] = 
{
	{ (Il2CppRGCTXDataType)1, 646 },
	{ (Il2CppRGCTXDataType)3, 51999 },
	{ (Il2CppRGCTXDataType)2, 646 },
	{ (Il2CppRGCTXDataType)3, 3341 },
	{ (Il2CppRGCTXDataType)2, 1911 },
	{ (Il2CppRGCTXDataType)3, 58256 },
};
extern const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationGAIPS_Rage;
extern const CustomAttributesCacheGenerator g_GAIPS_Rage_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_GAIPS_Rage_CodeGenModule;
const Il2CppCodeGenModule g_GAIPS_Rage_CodeGenModule = 
{
	"GAIPS.Rage.dll",
	8,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	1,
	s_rgctxIndices,
	6,
	s_rgctxValues,
	&g_DebuggerMetadataRegistrationGAIPS_Rage,
	g_GAIPS_Rage_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
