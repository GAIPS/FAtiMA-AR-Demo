#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[8] = 
{
	{ 10679, 0,  1 } /*tableIndex: 0 */,
	{ 22658, 1,  1 } /*tableIndex: 1 */,
	{ 20252, 2,  2 } /*tableIndex: 2 */,
	{ 16742, 3,  3 } /*tableIndex: 3 */,
	{ 23017, 4,  4 } /*tableIndex: 4 */,
	{ 6427, 5,  4 } /*tableIndex: 5 */,
	{ 23019, 6,  5 } /*tableIndex: 6 */,
	{ 21213, 7,  6 } /*tableIndex: 7 */,
};
#else
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const char* g_methodExecutionContextInfoStrings[8] = 
{
	"targetDict",
	"value",
	"result",
	"a",
	"sub",
	"resultSubSet",
	"set",
	"v",
};
#else
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[23] = 
{
	{ 0, 0 } /* 0x06000001 WellFormedNames.Name SocialImportance.AttributionRule::get_Target() */,
	{ 0, 0 } /* 0x06000002 WellFormedNames.Name SocialImportance.AttributionRule::get_Value() */,
	{ 0, 0 } /* 0x06000003 Conditions.ConditionSet SocialImportance.AttributionRule::get_Conditions() */,
	{ 0, 0 } /* 0x06000004 System.Void SocialImportance.AttributionRule::.ctor() */,
	{ 0, 0 } /* 0x06000005 System.Void SocialImportance.SocialImportanceAsset::.ctor() */,
	{ 0, 0 } /* 0x06000006 System.Void SocialImportance.SocialImportanceAsset::RegisterKnowledgeBase(KnowledgeBase.KB) */,
	{ 0, 0 } /* 0x06000007 System.Void SocialImportance.SocialImportanceAsset::BindToRegistry(KnowledgeBase.IDynamicPropertiesRegistry) */,
	{ 0, 0 } /* 0x06000008 System.Void SocialImportance.SocialImportanceAsset::UnbindToRegistry(KnowledgeBase.IDynamicPropertiesRegistry) */,
	{ 0, 2 } /* 0x06000009 System.Single SocialImportance.SocialImportanceAsset::internal_GetSocialImportance(WellFormedNames.Name,WellFormedNames.Name) */,
	{ 0, 0 } /* 0x0600000A System.Void SocialImportance.SocialImportanceAsset::InvalidateCachedSI() */,
	{ 2, 6 } /* 0x0600000B System.UInt32 SocialImportance.SocialImportanceAsset::CalculateSI(WellFormedNames.Name,WellFormedNames.Name) */,
	{ 0, 0 } /* 0x0600000C System.Collections.Generic.IEnumerable`1<KnowledgeBase.DynamicPropertyResult> SocialImportance.SocialImportanceAsset::SIPropertyCalculator(KnowledgeBase.IQueryContext,WellFormedNames.Name) */,
	{ 0, 0 } /* 0x0600000D System.Void SocialImportance.SocialImportanceAsset::.cctor() */,
	{ 0, 0 } /* 0x0600000E System.Void SocialImportance.SocialImportanceAsset/<SIPropertyCalculator>d__19::.ctor(System.Int32) */,
	{ 0, 0 } /* 0x0600000F System.Void SocialImportance.SocialImportanceAsset/<SIPropertyCalculator>d__19::System.IDisposable.Dispose() */,
	{ 0, 0 } /* 0x06000010 System.Boolean SocialImportance.SocialImportanceAsset/<SIPropertyCalculator>d__19::MoveNext() */,
	{ 0, 0 } /* 0x06000011 System.Void SocialImportance.SocialImportanceAsset/<SIPropertyCalculator>d__19::<>m__Finally1() */,
	{ 0, 0 } /* 0x06000012 System.Void SocialImportance.SocialImportanceAsset/<SIPropertyCalculator>d__19::<>m__Finally2() */,
	{ 0, 0 } /* 0x06000013 KnowledgeBase.DynamicPropertyResult SocialImportance.SocialImportanceAsset/<SIPropertyCalculator>d__19::System.Collections.Generic.IEnumerator<KnowledgeBase.DynamicPropertyResult>.get_Current() */,
	{ 0, 0 } /* 0x06000014 System.Void SocialImportance.SocialImportanceAsset/<SIPropertyCalculator>d__19::System.Collections.IEnumerator.Reset() */,
	{ 0, 0 } /* 0x06000015 System.Object SocialImportance.SocialImportanceAsset/<SIPropertyCalculator>d__19::System.Collections.IEnumerator.get_Current() */,
	{ 0, 0 } /* 0x06000016 System.Collections.Generic.IEnumerator`1<KnowledgeBase.DynamicPropertyResult> SocialImportance.SocialImportanceAsset/<SIPropertyCalculator>d__19::System.Collections.Generic.IEnumerable<KnowledgeBase.DynamicPropertyResult>.GetEnumerator() */,
	{ 0, 0 } /* 0x06000017 System.Collections.IEnumerator SocialImportance.SocialImportanceAsset/<SIPropertyCalculator>d__19::System.Collections.IEnumerable.GetEnumerator() */,
};
#else
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[1] = { { 0, 0} };
#endif
#if IL2CPP_MONO_DEBUGGER
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsSocialImportance[];
Il2CppSequencePoint g_sequencePointsSocialImportance[177] = 
{
	{ 34408, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 0 } /* seqPointIndex: 0 */,
	{ 34408, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 1 } /* seqPointIndex: 1 */,
	{ 34408, 1, 14, 14, 30, 34, 0, kSequencePointKind_Normal, 0, 2 } /* seqPointIndex: 2 */,
	{ 34409, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 3 } /* seqPointIndex: 3 */,
	{ 34409, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 4 } /* seqPointIndex: 4 */,
	{ 34409, 1, 15, 15, 23, 27, 0, kSequencePointKind_Normal, 0, 5 } /* seqPointIndex: 5 */,
	{ 34410, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 6 } /* seqPointIndex: 6 */,
	{ 34410, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 7 } /* seqPointIndex: 7 */,
	{ 34410, 1, 16, 16, 36, 40, 0, kSequencePointKind_Normal, 0, 8 } /* seqPointIndex: 8 */,
	{ 34411, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 9 } /* seqPointIndex: 9 */,
	{ 34411, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 10 } /* seqPointIndex: 10 */,
	{ 34411, 1, 18, 18, 3, 30, 0, kSequencePointKind_Normal, 0, 11 } /* seqPointIndex: 11 */,
	{ 34411, 1, 19, 19, 3, 4, 7, kSequencePointKind_Normal, 0, 12 } /* seqPointIndex: 12 */,
	{ 34411, 1, 20, 20, 4, 26, 8, kSequencePointKind_Normal, 0, 13 } /* seqPointIndex: 13 */,
	{ 34411, 1, 21, 21, 3, 4, 19, kSequencePointKind_Normal, 0, 14 } /* seqPointIndex: 14 */,
	{ 34411, 1, 18, 18, 3, 30, 1, kSequencePointKind_StepOut, 0, 15 } /* seqPointIndex: 15 */,
	{ 34411, 1, 20, 20, 4, 26, 9, kSequencePointKind_StepOut, 0, 16 } /* seqPointIndex: 16 */,
	{ 34412, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 17 } /* seqPointIndex: 17 */,
	{ 34412, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 18 } /* seqPointIndex: 18 */,
	{ 34412, 2, 30, 30, 3, 106, 0, kSequencePointKind_Normal, 0, 19 } /* seqPointIndex: 19 */,
	{ 34412, 2, 39, 39, 3, 33, 11, kSequencePointKind_Normal, 0, 20 } /* seqPointIndex: 20 */,
	{ 34412, 2, 40, 40, 3, 4, 18, kSequencePointKind_Normal, 0, 21 } /* seqPointIndex: 21 */,
	{ 34412, 2, 41, 41, 4, 16, 19, kSequencePointKind_Normal, 0, 22 } /* seqPointIndex: 22 */,
	{ 34412, 2, 42, 42, 4, 56, 26, kSequencePointKind_Normal, 0, 23 } /* seqPointIndex: 23 */,
	{ 34412, 2, 43, 43, 4, 61, 37, kSequencePointKind_Normal, 0, 24 } /* seqPointIndex: 24 */,
	{ 34412, 2, 44, 44, 3, 4, 48, kSequencePointKind_Normal, 0, 25 } /* seqPointIndex: 25 */,
	{ 34412, 2, 30, 30, 3, 106, 1, kSequencePointKind_StepOut, 0, 26 } /* seqPointIndex: 26 */,
	{ 34412, 2, 39, 39, 3, 33, 12, kSequencePointKind_StepOut, 0, 27 } /* seqPointIndex: 27 */,
	{ 34412, 2, 42, 42, 4, 56, 27, kSequencePointKind_StepOut, 0, 28 } /* seqPointIndex: 28 */,
	{ 34412, 2, 43, 43, 4, 61, 38, kSequencePointKind_StepOut, 0, 29 } /* seqPointIndex: 29 */,
	{ 34413, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 30 } /* seqPointIndex: 30 */,
	{ 34413, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 31 } /* seqPointIndex: 31 */,
	{ 34413, 2, 53, 53, 3, 4, 0, kSequencePointKind_Normal, 0, 32 } /* seqPointIndex: 32 */,
	{ 34413, 2, 54, 54, 4, 21, 1, kSequencePointKind_Normal, 0, 33 } /* seqPointIndex: 33 */,
	{ 34413, 2, 54, 54, 0, 0, 11, kSequencePointKind_Normal, 0, 34 } /* seqPointIndex: 34 */,
	{ 34413, 2, 55, 55, 4, 5, 14, kSequencePointKind_Normal, 0, 35 } /* seqPointIndex: 35 */,
	{ 34413, 2, 57, 57, 5, 28, 15, kSequencePointKind_Normal, 0, 36 } /* seqPointIndex: 36 */,
	{ 34413, 2, 58, 58, 5, 17, 28, kSequencePointKind_Normal, 0, 37 } /* seqPointIndex: 37 */,
	{ 34413, 2, 59, 59, 4, 5, 35, kSequencePointKind_Normal, 0, 38 } /* seqPointIndex: 38 */,
	{ 34413, 2, 61, 61, 4, 14, 36, kSequencePointKind_Normal, 0, 39 } /* seqPointIndex: 39 */,
	{ 34413, 2, 62, 62, 4, 23, 43, kSequencePointKind_Normal, 0, 40 } /* seqPointIndex: 40 */,
	{ 34413, 2, 63, 63, 4, 25, 51, kSequencePointKind_Normal, 0, 41 } /* seqPointIndex: 41 */,
	{ 34413, 2, 64, 64, 3, 4, 58, kSequencePointKind_Normal, 0, 42 } /* seqPointIndex: 42 */,
	{ 34413, 2, 57, 57, 5, 28, 22, kSequencePointKind_StepOut, 0, 43 } /* seqPointIndex: 43 */,
	{ 34413, 2, 62, 62, 4, 23, 45, kSequencePointKind_StepOut, 0, 44 } /* seqPointIndex: 44 */,
	{ 34413, 2, 63, 63, 4, 25, 52, kSequencePointKind_StepOut, 0, 45 } /* seqPointIndex: 45 */,
	{ 34414, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 46 } /* seqPointIndex: 46 */,
	{ 34414, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 47 } /* seqPointIndex: 47 */,
	{ 34414, 2, 67, 67, 3, 4, 0, kSequencePointKind_Normal, 0, 48 } /* seqPointIndex: 48 */,
	{ 34414, 2, 68, 68, 4, 87, 1, kSequencePointKind_Normal, 0, 49 } /* seqPointIndex: 49 */,
	{ 34414, 2, 69, 69, 3, 4, 30, kSequencePointKind_Normal, 0, 50 } /* seqPointIndex: 50 */,
	{ 34414, 2, 68, 68, 4, 87, 19, kSequencePointKind_StepOut, 0, 51 } /* seqPointIndex: 51 */,
	{ 34414, 2, 68, 68, 4, 87, 24, kSequencePointKind_StepOut, 0, 52 } /* seqPointIndex: 52 */,
	{ 34415, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 53 } /* seqPointIndex: 53 */,
	{ 34415, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 54 } /* seqPointIndex: 54 */,
	{ 34415, 2, 72, 72, 3, 4, 0, kSequencePointKind_Normal, 0, 55 } /* seqPointIndex: 55 */,
	{ 34415, 2, 73, 73, 4, 59, 1, kSequencePointKind_Normal, 0, 56 } /* seqPointIndex: 56 */,
	{ 34415, 2, 74, 74, 3, 4, 18, kSequencePointKind_Normal, 0, 57 } /* seqPointIndex: 57 */,
	{ 34415, 2, 73, 73, 4, 59, 7, kSequencePointKind_StepOut, 0, 58 } /* seqPointIndex: 58 */,
	{ 34415, 2, 73, 73, 4, 59, 12, kSequencePointKind_StepOut, 0, 59 } /* seqPointIndex: 59 */,
	{ 34416, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 60 } /* seqPointIndex: 60 */,
	{ 34416, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 61 } /* seqPointIndex: 61 */,
	{ 34416, 2, 107, 107, 3, 4, 0, kSequencePointKind_Normal, 0, 62 } /* seqPointIndex: 62 */,
	{ 34416, 2, 109, 109, 4, 61, 1, kSequencePointKind_Normal, 0, 63 } /* seqPointIndex: 63 */,
	{ 34416, 2, 109, 109, 0, 0, 19, kSequencePointKind_Normal, 0, 64 } /* seqPointIndex: 64 */,
	{ 34416, 2, 110, 110, 4, 5, 22, kSequencePointKind_Normal, 0, 65 } /* seqPointIndex: 65 */,
	{ 34416, 2, 111, 111, 5, 46, 23, kSequencePointKind_Normal, 0, 66 } /* seqPointIndex: 66 */,
	{ 34416, 2, 112, 112, 5, 42, 29, kSequencePointKind_Normal, 0, 67 } /* seqPointIndex: 67 */,
	{ 34416, 2, 113, 113, 4, 5, 43, kSequencePointKind_Normal, 0, 68 } /* seqPointIndex: 68 */,
	{ 34416, 2, 116, 116, 4, 51, 44, kSequencePointKind_Normal, 0, 69 } /* seqPointIndex: 69 */,
	{ 34416, 2, 116, 116, 0, 0, 57, kSequencePointKind_Normal, 0, 70 } /* seqPointIndex: 70 */,
	{ 34416, 2, 117, 117, 4, 5, 60, kSequencePointKind_Normal, 0, 71 } /* seqPointIndex: 71 */,
	{ 34416, 2, 118, 118, 5, 46, 61, kSequencePointKind_Normal, 0, 72 } /* seqPointIndex: 72 */,
	{ 34416, 2, 119, 119, 5, 32, 72, kSequencePointKind_Normal, 0, 73 } /* seqPointIndex: 73 */,
	{ 34416, 2, 120, 120, 4, 5, 81, kSequencePointKind_Normal, 0, 74 } /* seqPointIndex: 74 */,
	{ 34416, 2, 121, 121, 4, 17, 82, kSequencePointKind_Normal, 0, 75 } /* seqPointIndex: 75 */,
	{ 34416, 2, 122, 122, 3, 4, 87, kSequencePointKind_Normal, 0, 76 } /* seqPointIndex: 76 */,
	{ 34416, 2, 109, 109, 4, 61, 10, kSequencePointKind_StepOut, 0, 77 } /* seqPointIndex: 77 */,
	{ 34416, 2, 111, 111, 5, 46, 23, kSequencePointKind_StepOut, 0, 78 } /* seqPointIndex: 78 */,
	{ 34416, 2, 112, 112, 5, 42, 37, kSequencePointKind_StepOut, 0, 79 } /* seqPointIndex: 79 */,
	{ 34416, 2, 116, 116, 4, 51, 48, kSequencePointKind_StepOut, 0, 80 } /* seqPointIndex: 80 */,
	{ 34416, 2, 118, 118, 5, 46, 64, kSequencePointKind_StepOut, 0, 81 } /* seqPointIndex: 81 */,
	{ 34416, 2, 119, 119, 5, 32, 75, kSequencePointKind_StepOut, 0, 82 } /* seqPointIndex: 82 */,
	{ 34417, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 83 } /* seqPointIndex: 83 */,
	{ 34417, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 84 } /* seqPointIndex: 84 */,
	{ 34417, 2, 128, 128, 3, 4, 0, kSequencePointKind_Normal, 0, 85 } /* seqPointIndex: 85 */,
	{ 34417, 2, 129, 129, 4, 23, 1, kSequencePointKind_Normal, 0, 86 } /* seqPointIndex: 86 */,
	{ 34417, 2, 130, 130, 3, 4, 13, kSequencePointKind_Normal, 0, 87 } /* seqPointIndex: 87 */,
	{ 34417, 2, 129, 129, 4, 23, 7, kSequencePointKind_StepOut, 0, 88 } /* seqPointIndex: 88 */,
	{ 34418, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 89 } /* seqPointIndex: 89 */,
	{ 34418, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 90 } /* seqPointIndex: 90 */,
	{ 34418, 2, 133, 133, 3, 4, 0, kSequencePointKind_Normal, 0, 91 } /* seqPointIndex: 91 */,
	{ 34418, 2, 134, 134, 4, 20, 1, kSequencePointKind_Normal, 0, 92 } /* seqPointIndex: 92 */,
	{ 34418, 2, 136, 136, 4, 11, 4, kSequencePointKind_Normal, 0, 93 } /* seqPointIndex: 93 */,
	{ 34418, 2, 136, 136, 22, 40, 5, kSequencePointKind_Normal, 0, 94 } /* seqPointIndex: 94 */,
	{ 34418, 2, 136, 136, 0, 0, 17, kSequencePointKind_Normal, 0, 95 } /* seqPointIndex: 95 */,
	{ 34418, 2, 136, 136, 13, 18, 22, kSequencePointKind_Normal, 0, 96 } /* seqPointIndex: 96 */,
	{ 34418, 2, 137, 137, 4, 5, 30, kSequencePointKind_Normal, 0, 97 } /* seqPointIndex: 97 */,
	{ 34418, 2, 138, 138, 5, 68, 31, kSequencePointKind_Normal, 0, 98 } /* seqPointIndex: 98 */,
	{ 34418, 2, 139, 139, 17, 110, 49, kSequencePointKind_Normal, 0, 99 } /* seqPointIndex: 99 */,
	{ 34418, 2, 140, 140, 17, 24, 93, kSequencePointKind_Normal, 0, 100 } /* seqPointIndex: 100 */,
	{ 34418, 2, 140, 140, 36, 48, 94, kSequencePointKind_Normal, 0, 101 } /* seqPointIndex: 101 */,
	{ 34418, 2, 140, 140, 0, 0, 103, kSequencePointKind_Normal, 0, 102 } /* seqPointIndex: 102 */,
	{ 34418, 2, 140, 140, 25, 32, 105, kSequencePointKind_Normal, 0, 103 } /* seqPointIndex: 103 */,
	{ 34418, 2, 141, 141, 17, 18, 114, kSequencePointKind_Normal, 0, 104 } /* seqPointIndex: 104 */,
	{ 34418, 2, 142, 142, 21, 53, 115, kSequencePointKind_Normal, 0, 105 } /* seqPointIndex: 105 */,
	{ 34418, 2, 143, 143, 21, 55, 130, kSequencePointKind_Normal, 0, 106 } /* seqPointIndex: 106 */,
	{ 34418, 2, 144, 144, 17, 18, 146, kSequencePointKind_Normal, 0, 107 } /* seqPointIndex: 107 */,
	{ 34418, 2, 140, 140, 33, 35, 147, kSequencePointKind_Normal, 0, 108 } /* seqPointIndex: 108 */,
	{ 34418, 2, 140, 140, 0, 0, 158, kSequencePointKind_Normal, 0, 109 } /* seqPointIndex: 109 */,
	{ 34418, 2, 140, 140, 0, 0, 170, kSequencePointKind_Normal, 0, 110 } /* seqPointIndex: 110 */,
	{ 34418, 2, 145, 145, 4, 5, 171, kSequencePointKind_Normal, 0, 111 } /* seqPointIndex: 111 */,
	{ 34418, 2, 136, 136, 19, 21, 172, kSequencePointKind_Normal, 0, 112 } /* seqPointIndex: 112 */,
	{ 34418, 2, 136, 136, 0, 0, 186, kSequencePointKind_Normal, 0, 113 } /* seqPointIndex: 113 */,
	{ 34418, 2, 146, 146, 4, 35, 201, kSequencePointKind_Normal, 0, 114 } /* seqPointIndex: 114 */,
	{ 34418, 2, 147, 147, 3, 4, 215, kSequencePointKind_Normal, 0, 115 } /* seqPointIndex: 115 */,
	{ 34418, 2, 136, 136, 22, 40, 11, kSequencePointKind_StepOut, 0, 116 } /* seqPointIndex: 116 */,
	{ 34418, 2, 136, 136, 13, 18, 24, kSequencePointKind_StepOut, 0, 117 } /* seqPointIndex: 117 */,
	{ 34418, 2, 138, 138, 5, 68, 32, kSequencePointKind_StepOut, 0, 118 } /* seqPointIndex: 118 */,
	{ 34418, 2, 138, 138, 5, 68, 38, kSequencePointKind_StepOut, 0, 119 } /* seqPointIndex: 119 */,
	{ 34418, 2, 138, 138, 5, 68, 43, kSequencePointKind_StepOut, 0, 120 } /* seqPointIndex: 120 */,
	{ 34418, 2, 139, 139, 17, 110, 50, kSequencePointKind_StepOut, 0, 121 } /* seqPointIndex: 121 */,
	{ 34418, 2, 139, 139, 17, 110, 80, kSequencePointKind_StepOut, 0, 122 } /* seqPointIndex: 122 */,
	{ 34418, 2, 139, 139, 17, 110, 86, kSequencePointKind_StepOut, 0, 123 } /* seqPointIndex: 123 */,
	{ 34418, 2, 140, 140, 36, 48, 96, kSequencePointKind_StepOut, 0, 124 } /* seqPointIndex: 124 */,
	{ 34418, 2, 140, 140, 25, 32, 107, kSequencePointKind_StepOut, 0, 125 } /* seqPointIndex: 125 */,
	{ 34418, 2, 142, 142, 21, 53, 116, kSequencePointKind_StepOut, 0, 126 } /* seqPointIndex: 126 */,
	{ 34418, 2, 142, 142, 21, 53, 123, kSequencePointKind_StepOut, 0, 127 } /* seqPointIndex: 127 */,
	{ 34418, 2, 143, 143, 21, 55, 133, kSequencePointKind_StepOut, 0, 128 } /* seqPointIndex: 128 */,
	{ 34418, 2, 143, 143, 21, 55, 138, kSequencePointKind_StepOut, 0, 129 } /* seqPointIndex: 129 */,
	{ 34418, 2, 140, 140, 33, 35, 149, kSequencePointKind_StepOut, 0, 130 } /* seqPointIndex: 130 */,
	{ 34418, 2, 140, 140, 0, 0, 164, kSequencePointKind_StepOut, 0, 131 } /* seqPointIndex: 131 */,
	{ 34418, 2, 136, 136, 19, 21, 174, kSequencePointKind_StepOut, 0, 132 } /* seqPointIndex: 132 */,
	{ 34418, 2, 136, 136, 0, 0, 194, kSequencePointKind_StepOut, 0, 133 } /* seqPointIndex: 133 */,
	{ 34420, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 134 } /* seqPointIndex: 134 */,
	{ 34420, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 135 } /* seqPointIndex: 135 */,
	{ 34420, 2, 182, 182, 3, 80, 0, kSequencePointKind_Normal, 0, 136 } /* seqPointIndex: 136 */,
	{ 34420, 2, 182, 182, 3, 80, 5, kSequencePointKind_StepOut, 0, 137 } /* seqPointIndex: 137 */,
	{ 34423, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 138 } /* seqPointIndex: 138 */,
	{ 34423, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 139 } /* seqPointIndex: 139 */,
	{ 34423, 2, 0, 0, 0, 0, 0, kSequencePointKind_Normal, 0, 140 } /* seqPointIndex: 140 */,
	{ 34423, 2, 184, 184, 3, 4, 39, kSequencePointKind_Normal, 0, 141 } /* seqPointIndex: 141 */,
	{ 34423, 2, 185, 185, 13, 20, 40, kSequencePointKind_Normal, 0, 142 } /* seqPointIndex: 142 */,
	{ 34423, 2, 185, 185, 31, 68, 41, kSequencePointKind_Normal, 0, 143 } /* seqPointIndex: 143 */,
	{ 34423, 2, 185, 185, 0, 0, 77, kSequencePointKind_Normal, 0, 144 } /* seqPointIndex: 144 */,
	{ 34423, 2, 185, 185, 22, 27, 82, kSequencePointKind_Normal, 0, 145 } /* seqPointIndex: 145 */,
	{ 34423, 2, 186, 186, 4, 5, 99, kSequencePointKind_Normal, 0, 146 } /* seqPointIndex: 146 */,
	{ 34423, 2, 187, 187, 5, 79, 100, kSequencePointKind_Normal, 0, 147 } /* seqPointIndex: 147 */,
	{ 34423, 2, 188, 188, 5, 12, 144, kSequencePointKind_Normal, 0, 148 } /* seqPointIndex: 148 */,
	{ 34423, 2, 188, 188, 23, 30, 145, kSequencePointKind_Normal, 0, 149 } /* seqPointIndex: 149 */,
	{ 34423, 2, 188, 188, 0, 0, 175, kSequencePointKind_Normal, 0, 150 } /* seqPointIndex: 150 */,
	{ 34423, 2, 188, 188, 14, 19, 177, kSequencePointKind_Normal, 0, 151 } /* seqPointIndex: 151 */,
	{ 34423, 2, 189, 189, 6, 86, 194, kSequencePointKind_Normal, 0, 152 } /* seqPointIndex: 152 */,
	{ 34423, 2, 189, 189, 0, 0, 243, kSequencePointKind_Normal, 0, 153 } /* seqPointIndex: 153 */,
	{ 34423, 2, 188, 188, 20, 22, 258, kSequencePointKind_Normal, 0, 154 } /* seqPointIndex: 154 */,
	{ 34423, 2, 190, 190, 4, 5, 285, kSequencePointKind_Normal, 0, 155 } /* seqPointIndex: 155 */,
	{ 34423, 2, 185, 185, 28, 30, 293, kSequencePointKind_Normal, 0, 156 } /* seqPointIndex: 156 */,
	{ 34423, 2, 191, 191, 3, 4, 323, kSequencePointKind_Normal, 0, 157 } /* seqPointIndex: 157 */,
	{ 34423, 2, 191, 191, 0, 0, 327, kSequencePointKind_Normal, 0, 158 } /* seqPointIndex: 158 */,
	{ 34423, 2, 185, 185, 31, 68, 54, kSequencePointKind_StepOut, 0, 159 } /* seqPointIndex: 159 */,
	{ 34423, 2, 185, 185, 31, 68, 59, kSequencePointKind_StepOut, 0, 160 } /* seqPointIndex: 160 */,
	{ 34423, 2, 185, 185, 22, 27, 89, kSequencePointKind_StepOut, 0, 161 } /* seqPointIndex: 161 */,
	{ 34423, 2, 187, 187, 5, 79, 113, kSequencePointKind_StepOut, 0, 162 } /* seqPointIndex: 162 */,
	{ 34423, 2, 187, 187, 5, 79, 118, kSequencePointKind_StepOut, 0, 163 } /* seqPointIndex: 163 */,
	{ 34423, 2, 187, 187, 5, 79, 129, kSequencePointKind_StepOut, 0, 164 } /* seqPointIndex: 164 */,
	{ 34423, 2, 187, 187, 5, 79, 134, kSequencePointKind_StepOut, 0, 165 } /* seqPointIndex: 165 */,
	{ 34423, 2, 188, 188, 23, 30, 152, kSequencePointKind_StepOut, 0, 166 } /* seqPointIndex: 166 */,
	{ 34423, 2, 188, 188, 23, 30, 157, kSequencePointKind_StepOut, 0, 167 } /* seqPointIndex: 167 */,
	{ 34423, 2, 188, 188, 14, 19, 184, kSequencePointKind_StepOut, 0, 168 } /* seqPointIndex: 168 */,
	{ 34423, 2, 189, 189, 6, 86, 206, kSequencePointKind_StepOut, 0, 169 } /* seqPointIndex: 169 */,
	{ 34423, 2, 189, 189, 6, 86, 211, kSequencePointKind_StepOut, 0, 170 } /* seqPointIndex: 170 */,
	{ 34423, 2, 189, 189, 6, 86, 222, kSequencePointKind_StepOut, 0, 171 } /* seqPointIndex: 171 */,
	{ 34423, 2, 188, 188, 20, 22, 264, kSequencePointKind_StepOut, 0, 172 } /* seqPointIndex: 172 */,
	{ 34423, 2, 188, 188, 20, 22, 272, kSequencePointKind_StepOut, 0, 173 } /* seqPointIndex: 173 */,
	{ 34423, 2, 185, 185, 28, 30, 299, kSequencePointKind_StepOut, 0, 174 } /* seqPointIndex: 174 */,
	{ 34423, 2, 185, 185, 28, 30, 310, kSequencePointKind_StepOut, 0, 175 } /* seqPointIndex: 175 */,
	{ 34423, 2, 185, 185, 0, 0, 328, kSequencePointKind_StepOut, 0, 176 } /* seqPointIndex: 176 */,
};
#else
extern Il2CppSequencePoint g_sequencePointsSocialImportance[];
Il2CppSequencePoint g_sequencePointsSocialImportance[1] = { { 0, 0, 0, 0, 0, 0, 0, kSequencePointKind_Normal, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#else
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[] = {
{ "", { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }, //0 
{ "C:\\Users\\Manue\\Work\\FAtiMA-Toolkit\\Assets\\SocialImportance\\AttributionRule.cs", { 162, 210, 250, 120, 81, 182, 140, 208, 206, 24, 236, 16, 191, 160, 150, 238} }, //1 
{ "C:\\Users\\Manue\\Work\\FAtiMA-Toolkit\\Assets\\SocialImportance\\SocialImportanceAsset.cs", { 237, 128, 232, 142, 170, 48, 94, 56, 202, 247, 143, 91, 102, 191, 46, 226} }, //2 
};
#else
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[1] = { NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppTypeSourceFilePair g_typeSourceFiles[3] = 
{
	{ 5404, 1 },
	{ 5406, 2 },
	{ 5405, 2 },
};
#else
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodScope g_methodScopes[8] = 
{
	{ 0, 59 },
	{ 0, 90 },
	{ 0, 218 },
	{ 22, 172 },
	{ 30, 172 },
	{ 105, 147 },
	{ 114, 147 },
	{ 0, 337 },
};
#else
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[23] = 
{
	{ 0, 0, 0 } /* WellFormedNames.Name SocialImportance.AttributionRule::get_Target() */,
	{ 0, 0, 0 } /* WellFormedNames.Name SocialImportance.AttributionRule::get_Value() */,
	{ 0, 0, 0 } /* Conditions.ConditionSet SocialImportance.AttributionRule::get_Conditions() */,
	{ 0, 0, 0 } /* System.Void SocialImportance.AttributionRule::.ctor() */,
	{ 0, 0, 0 } /* System.Void SocialImportance.SocialImportanceAsset::.ctor() */,
	{ 59, 0, 1 } /* System.Void SocialImportance.SocialImportanceAsset::RegisterKnowledgeBase(KnowledgeBase.KB) */,
	{ 0, 0, 0 } /* System.Void SocialImportance.SocialImportanceAsset::BindToRegistry(KnowledgeBase.IDynamicPropertiesRegistry) */,
	{ 0, 0, 0 } /* System.Void SocialImportance.SocialImportanceAsset::UnbindToRegistry(KnowledgeBase.IDynamicPropertiesRegistry) */,
	{ 90, 1, 1 } /* System.Single SocialImportance.SocialImportanceAsset::internal_GetSocialImportance(WellFormedNames.Name,WellFormedNames.Name) */,
	{ 0, 0, 0 } /* System.Void SocialImportance.SocialImportanceAsset::InvalidateCachedSI() */,
	{ 218, 2, 5 } /* System.UInt32 SocialImportance.SocialImportanceAsset::CalculateSI(WellFormedNames.Name,WellFormedNames.Name) */,
	{ 0, 0, 0 } /* System.Collections.Generic.IEnumerable`1<KnowledgeBase.DynamicPropertyResult> SocialImportance.SocialImportanceAsset::SIPropertyCalculator(KnowledgeBase.IQueryContext,WellFormedNames.Name) */,
	{ 0, 0, 0 } /* System.Void SocialImportance.SocialImportanceAsset::.cctor() */,
	{ 0, 0, 0 } /* System.Void SocialImportance.SocialImportanceAsset/<SIPropertyCalculator>d__19::.ctor(System.Int32) */,
	{ 0, 0, 0 } /* System.Void SocialImportance.SocialImportanceAsset/<SIPropertyCalculator>d__19::System.IDisposable.Dispose() */,
	{ 337, 7, 1 } /* System.Boolean SocialImportance.SocialImportanceAsset/<SIPropertyCalculator>d__19::MoveNext() */,
	{ 0, 0, 0 } /* System.Void SocialImportance.SocialImportanceAsset/<SIPropertyCalculator>d__19::<>m__Finally1() */,
	{ 0, 0, 0 } /* System.Void SocialImportance.SocialImportanceAsset/<SIPropertyCalculator>d__19::<>m__Finally2() */,
	{ 0, 0, 0 } /* KnowledgeBase.DynamicPropertyResult SocialImportance.SocialImportanceAsset/<SIPropertyCalculator>d__19::System.Collections.Generic.IEnumerator<KnowledgeBase.DynamicPropertyResult>.get_Current() */,
	{ 0, 0, 0 } /* System.Void SocialImportance.SocialImportanceAsset/<SIPropertyCalculator>d__19::System.Collections.IEnumerator.Reset() */,
	{ 0, 0, 0 } /* System.Object SocialImportance.SocialImportanceAsset/<SIPropertyCalculator>d__19::System.Collections.IEnumerator.get_Current() */,
	{ 0, 0, 0 } /* System.Collections.Generic.IEnumerator`1<KnowledgeBase.DynamicPropertyResult> SocialImportance.SocialImportanceAsset/<SIPropertyCalculator>d__19::System.Collections.Generic.IEnumerable<KnowledgeBase.DynamicPropertyResult>.GetEnumerator() */,
	{ 0, 0, 0 } /* System.Collections.IEnumerator SocialImportance.SocialImportanceAsset/<SIPropertyCalculator>d__19::System.Collections.IEnumerable.GetEnumerator() */,
};
#else
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[1] = { { 0, 0, 0 } };
#endif
IL2CPP_EXTERN_C const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationSocialImportance;
const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationSocialImportance = 
{
	(Il2CppMethodExecutionContextInfo*)g_methodExecutionContextInfos,
	(Il2CppMethodExecutionContextInfoIndex*)g_methodExecutionContextInfoIndexes,
	(Il2CppMethodScope*)g_methodScopes,
	(Il2CppMethodHeaderInfo*)g_methodHeaderInfos,
	(Il2CppSequencePointSourceFile*)g_sequencePointSourceFiles,
	177,
	(Il2CppSequencePoint*)g_sequencePointsSocialImportance,
	0,
	(Il2CppCatchPoint*)g_catchPoints,
	3,
	(Il2CppTypeSourceFilePair*)g_typeSourceFiles,
	(const char**)g_methodExecutionContextInfoStrings,
};
