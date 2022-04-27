#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[7] = 
{
	{ 10342, 0,  2 } /*tableIndex: 0 */,
	{ 21213, 1,  5 } /*tableIndex: 1 */,
	{ 21213, 2,  5 } /*tableIndex: 2 */,
	{ 21213, 3,  5 } /*tableIndex: 3 */,
	{ 16394, 0,  5 } /*tableIndex: 4 */,
	{ 22658, 4,  5 } /*tableIndex: 5 */,
	{ 22658, 5,  6 } /*tableIndex: 6 */,
};
#else
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const char* g_methodExecutionContextInfoStrings[6] = 
{
	"a",
	"actionName",
	"targetName",
	"priority",
	"p",
	"minCertainty",
};
#else
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[17] = 
{
	{ 0, 0 } /* 0x06000001 WellFormedNames.Name ActionLibrary.Action::get_Key() */,
	{ 0, 0 } /* 0x06000002 WellFormedNames.Name ActionLibrary.Action::get_Target() */,
	{ 0, 0 } /* 0x06000003 System.Collections.Generic.IList`1<WellFormedNames.Name> ActionLibrary.Action::get_Parameters() */,
	{ 0, 0 } /* 0x06000004 System.Single ActionLibrary.Action::get_Utility() */,
	{ 0, 0 } /* 0x06000005 System.Void ActionLibrary.Action::set_Utility(System.Single) */,
	{ 0, 0 } /* 0x06000006 WellFormedNames.Name ActionLibrary.Action::get_Name() */,
	{ 0, 1 } /* 0x06000007 System.Void ActionLibrary.Action::.ctor(System.Collections.Generic.IEnumerable`1<WellFormedNames.Name>,WellFormedNames.Name) */,
	{ 0, 0 } /* 0x06000008 System.String ActionLibrary.Action::ToString() */,
	{ 0, 0 } /* 0x06000009 WellFormedNames.Name ActionLibrary.ActionRule::get_Target() */,
	{ 0, 0 } /* 0x0600000A WellFormedNames.Name ActionLibrary.ActionRule::get_Layer() */,
	{ 0, 0 } /* 0x0600000B WellFormedNames.Name ActionLibrary.ActionRule::get_Priority() */,
	{ 0, 0 } /* 0x0600000C Conditions.ConditionSet ActionLibrary.ActionRule::get_ActivationConditions() */,
	{ 1, 6 } /* 0x0600000D ActionLibrary.IAction ActionLibrary.ActionRule::GenerateAction(WellFormedNames.SubstitutionSet) */,
	{ 0, 0 } /* 0x0600000E WellFormedNames.Name ActionLibrary.IAction::get_Key() */,
	{ 0, 0 } /* 0x0600000F WellFormedNames.Name ActionLibrary.IAction::get_Name() */,
	{ 0, 0 } /* 0x06000010 WellFormedNames.Name ActionLibrary.IAction::get_Target() */,
	{ 0, 0 } /* 0x06000011 System.Single ActionLibrary.IAction::get_Utility() */,
};
#else
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[1] = { { 0, 0} };
#endif
#if IL2CPP_MONO_DEBUGGER
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsActionLibrary[];
Il2CppSequencePoint g_sequencePointsActionLibrary[103] = 
{
	{ 25469, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 0 } /* seqPointIndex: 0 */,
	{ 25469, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 1 } /* seqPointIndex: 1 */,
	{ 25469, 1, 11, 11, 21, 25, 0, kSequencePointKind_Normal, 0, 2 } /* seqPointIndex: 2 */,
	{ 25470, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 3 } /* seqPointIndex: 3 */,
	{ 25470, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 4 } /* seqPointIndex: 4 */,
	{ 25470, 1, 12, 12, 24, 28, 0, kSequencePointKind_Normal, 0, 5 } /* seqPointIndex: 5 */,
	{ 25471, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 6 } /* seqPointIndex: 6 */,
	{ 25471, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 7 } /* seqPointIndex: 7 */,
	{ 25471, 1, 13, 13, 35, 39, 0, kSequencePointKind_Normal, 0, 8 } /* seqPointIndex: 8 */,
	{ 25472, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 9 } /* seqPointIndex: 9 */,
	{ 25472, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 10 } /* seqPointIndex: 10 */,
	{ 25472, 1, 14, 14, 26, 30, 0, kSequencePointKind_Normal, 0, 11 } /* seqPointIndex: 11 */,
	{ 25473, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 12 } /* seqPointIndex: 12 */,
	{ 25473, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 13 } /* seqPointIndex: 13 */,
	{ 25473, 1, 14, 14, 31, 44, 0, kSequencePointKind_Normal, 0, 14 } /* seqPointIndex: 14 */,
	{ 25474, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 15 } /* seqPointIndex: 15 */,
	{ 25474, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 16 } /* seqPointIndex: 16 */,
	{ 25474, 1, 15, 15, 32, 33, 0, kSequencePointKind_Normal, 0, 17 } /* seqPointIndex: 17 */,
	{ 25474, 1, 15, 15, 34, 81, 1, kSequencePointKind_Normal, 0, 18 } /* seqPointIndex: 18 */,
	{ 25474, 1, 15, 15, 82, 83, 26, kSequencePointKind_Normal, 0, 19 } /* seqPointIndex: 19 */,
	{ 25474, 1, 15, 15, 34, 81, 2, kSequencePointKind_StepOut, 0, 20 } /* seqPointIndex: 20 */,
	{ 25474, 1, 15, 15, 34, 81, 8, kSequencePointKind_StepOut, 0, 21 } /* seqPointIndex: 21 */,
	{ 25474, 1, 15, 15, 34, 81, 13, kSequencePointKind_StepOut, 0, 22 } /* seqPointIndex: 22 */,
	{ 25474, 1, 15, 15, 34, 81, 18, kSequencePointKind_StepOut, 0, 23 } /* seqPointIndex: 23 */,
	{ 25475, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 24 } /* seqPointIndex: 24 */,
	{ 25475, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 25 } /* seqPointIndex: 25 */,
	{ 25475, 1, 17, 17, 9, 72, 0, kSequencePointKind_Normal, 0, 26 } /* seqPointIndex: 26 */,
	{ 25475, 1, 18, 18, 3, 4, 7, kSequencePointKind_Normal, 0, 27 } /* seqPointIndex: 27 */,
	{ 25475, 1, 19, 19, 4, 46, 8, kSequencePointKind_Normal, 0, 28 } /* seqPointIndex: 28 */,
	{ 25475, 1, 20, 20, 4, 15, 15, kSequencePointKind_Normal, 0, 29 } /* seqPointIndex: 29 */,
	{ 25475, 1, 21, 21, 4, 18, 28, kSequencePointKind_Normal, 0, 30 } /* seqPointIndex: 30 */,
	{ 25475, 1, 22, 22, 4, 20, 36, kSequencePointKind_Normal, 0, 31 } /* seqPointIndex: 31 */,
	{ 25475, 1, 23, 23, 4, 19, 43, kSequencePointKind_Normal, 0, 32 } /* seqPointIndex: 32 */,
	{ 25475, 1, 24, 24, 4, 16, 50, kSequencePointKind_Normal, 0, 33 } /* seqPointIndex: 33 */,
	{ 25475, 1, 25, 25, 3, 4, 62, kSequencePointKind_Normal, 0, 34 } /* seqPointIndex: 34 */,
	{ 25475, 1, 17, 17, 9, 72, 1, kSequencePointKind_StepOut, 0, 35 } /* seqPointIndex: 35 */,
	{ 25475, 1, 19, 19, 4, 46, 9, kSequencePointKind_StepOut, 0, 36 } /* seqPointIndex: 36 */,
	{ 25475, 1, 20, 20, 4, 15, 18, kSequencePointKind_StepOut, 0, 37 } /* seqPointIndex: 37 */,
	{ 25475, 1, 21, 21, 4, 18, 30, kSequencePointKind_StepOut, 0, 38 } /* seqPointIndex: 38 */,
	{ 25475, 1, 24, 24, 4, 16, 56, kSequencePointKind_StepOut, 0, 39 } /* seqPointIndex: 39 */,
	{ 25476, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 40 } /* seqPointIndex: 40 */,
	{ 25476, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 41 } /* seqPointIndex: 41 */,
	{ 25476, 1, 28, 28, 9, 10, 0, kSequencePointKind_Normal, 0, 42 } /* seqPointIndex: 42 */,
	{ 25476, 1, 29, 29, 13, 41, 1, kSequencePointKind_Normal, 0, 43 } /* seqPointIndex: 43 */,
	{ 25476, 1, 30, 30, 9, 10, 15, kSequencePointKind_Normal, 0, 44 } /* seqPointIndex: 44 */,
	{ 25476, 1, 29, 29, 13, 41, 2, kSequencePointKind_StepOut, 0, 45 } /* seqPointIndex: 45 */,
	{ 25476, 1, 29, 29, 13, 41, 7, kSequencePointKind_StepOut, 0, 46 } /* seqPointIndex: 46 */,
	{ 25477, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 47 } /* seqPointIndex: 47 */,
	{ 25477, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 48 } /* seqPointIndex: 48 */,
	{ 25477, 2, 16, 16, 24, 28, 0, kSequencePointKind_Normal, 0, 49 } /* seqPointIndex: 49 */,
	{ 25478, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 50 } /* seqPointIndex: 50 */,
	{ 25478, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 51 } /* seqPointIndex: 51 */,
	{ 25478, 2, 17, 17, 29, 33, 0, kSequencePointKind_Normal, 0, 52 } /* seqPointIndex: 52 */,
	{ 25479, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 53 } /* seqPointIndex: 53 */,
	{ 25479, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 54 } /* seqPointIndex: 54 */,
	{ 25479, 2, 18, 18, 32, 36, 0, kSequencePointKind_Normal, 0, 55 } /* seqPointIndex: 55 */,
	{ 25480, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 56 } /* seqPointIndex: 56 */,
	{ 25480, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 57 } /* seqPointIndex: 57 */,
	{ 25480, 2, 26, 26, 8, 9, 0, kSequencePointKind_Normal, 0, 58 } /* seqPointIndex: 58 */,
	{ 25480, 2, 26, 26, 10, 40, 1, kSequencePointKind_Normal, 0, 59 } /* seqPointIndex: 59 */,
	{ 25480, 2, 26, 26, 41, 42, 10, kSequencePointKind_Normal, 0, 60 } /* seqPointIndex: 60 */,
	{ 25481, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 61 } /* seqPointIndex: 61 */,
	{ 25481, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 62 } /* seqPointIndex: 62 */,
	{ 25481, 2, 76, 76, 3, 4, 0, kSequencePointKind_Normal, 0, 63 } /* seqPointIndex: 63 */,
	{ 25481, 2, 77, 77, 4, 62, 1, kSequencePointKind_Normal, 0, 64 } /* seqPointIndex: 64 */,
	{ 25481, 2, 78, 78, 4, 31, 14, kSequencePointKind_Normal, 0, 65 } /* seqPointIndex: 65 */,
	{ 25481, 2, 78, 78, 0, 0, 25, kSequencePointKind_Normal, 0, 66 } /* seqPointIndex: 66 */,
	{ 25481, 2, 79, 79, 5, 17, 29, kSequencePointKind_Normal, 0, 67 } /* seqPointIndex: 67 */,
	{ 25481, 2, 81, 81, 4, 52, 37, kSequencePointKind_Normal, 0, 68 } /* seqPointIndex: 68 */,
	{ 25481, 2, 82, 82, 4, 31, 50, kSequencePointKind_Normal, 0, 69 } /* seqPointIndex: 69 */,
	{ 25481, 2, 82, 82, 0, 0, 61, kSequencePointKind_Normal, 0, 70 } /* seqPointIndex: 70 */,
	{ 25481, 2, 83, 83, 5, 17, 65, kSequencePointKind_Normal, 0, 71 } /* seqPointIndex: 71 */,
	{ 25481, 2, 85, 85, 13, 61, 70, kSequencePointKind_Normal, 0, 72 } /* seqPointIndex: 72 */,
	{ 25481, 2, 86, 86, 13, 38, 83, kSequencePointKind_Normal, 0, 73 } /* seqPointIndex: 73 */,
	{ 25481, 2, 86, 86, 0, 0, 94, kSequencePointKind_Normal, 0, 74 } /* seqPointIndex: 74 */,
	{ 25481, 2, 87, 87, 17, 29, 98, kSequencePointKind_Normal, 0, 75 } /* seqPointIndex: 75 */,
	{ 25481, 2, 89, 89, 13, 67, 103, kSequencePointKind_Normal, 0, 76 } /* seqPointIndex: 76 */,
	{ 25481, 2, 92, 92, 13, 56, 116, kSequencePointKind_Normal, 0, 77 } /* seqPointIndex: 77 */,
	{ 25481, 2, 93, 93, 13, 35, 129, kSequencePointKind_Normal, 0, 78 } /* seqPointIndex: 78 */,
	{ 25481, 2, 93, 93, 0, 0, 137, kSequencePointKind_Normal, 0, 79 } /* seqPointIndex: 79 */,
	{ 25481, 2, 94, 94, 13, 14, 141, kSequencePointKind_Normal, 0, 80 } /* seqPointIndex: 80 */,
	{ 25481, 2, 95, 95, 17, 71, 142, kSequencePointKind_Normal, 0, 81 } /* seqPointIndex: 81 */,
	{ 25481, 2, 96, 96, 17, 46, 150, kSequencePointKind_Normal, 0, 82 } /* seqPointIndex: 82 */,
	{ 25481, 2, 97, 97, 13, 14, 162, kSequencePointKind_Normal, 0, 83 } /* seqPointIndex: 83 */,
	{ 25481, 2, 97, 97, 0, 0, 163, kSequencePointKind_Normal, 0, 84 } /* seqPointIndex: 84 */,
	{ 25481, 2, 99, 99, 13, 14, 165, kSequencePointKind_Normal, 0, 85 } /* seqPointIndex: 85 */,
	{ 25481, 2, 100, 100, 17, 35, 166, kSequencePointKind_Normal, 0, 86 } /* seqPointIndex: 86 */,
	{ 25481, 2, 101, 101, 13, 14, 181, kSequencePointKind_Normal, 0, 87 } /* seqPointIndex: 87 */,
	{ 25481, 2, 104, 104, 13, 22, 182, kSequencePointKind_Normal, 0, 88 } /* seqPointIndex: 88 */,
	{ 25481, 2, 105, 105, 3, 4, 187, kSequencePointKind_Normal, 0, 89 } /* seqPointIndex: 89 */,
	{ 25481, 2, 77, 77, 4, 62, 8, kSequencePointKind_StepOut, 0, 90 } /* seqPointIndex: 90 */,
	{ 25481, 2, 81, 81, 4, 52, 38, kSequencePointKind_StepOut, 0, 91 } /* seqPointIndex: 91 */,
	{ 25481, 2, 81, 81, 4, 52, 44, kSequencePointKind_StepOut, 0, 92 } /* seqPointIndex: 92 */,
	{ 25481, 2, 85, 85, 13, 61, 71, kSequencePointKind_StepOut, 0, 93 } /* seqPointIndex: 93 */,
	{ 25481, 2, 85, 85, 13, 61, 77, kSequencePointKind_StepOut, 0, 94 } /* seqPointIndex: 94 */,
	{ 25481, 2, 89, 89, 13, 67, 104, kSequencePointKind_StepOut, 0, 95 } /* seqPointIndex: 95 */,
	{ 25481, 2, 89, 89, 13, 67, 110, kSequencePointKind_StepOut, 0, 96 } /* seqPointIndex: 96 */,
	{ 25481, 2, 92, 92, 13, 56, 117, kSequencePointKind_StepOut, 0, 97 } /* seqPointIndex: 97 */,
	{ 25481, 2, 92, 92, 13, 56, 122, kSequencePointKind_StepOut, 0, 98 } /* seqPointIndex: 98 */,
	{ 25481, 2, 93, 93, 13, 35, 130, kSequencePointKind_StepOut, 0, 99 } /* seqPointIndex: 99 */,
	{ 25481, 2, 95, 95, 17, 71, 143, kSequencePointKind_StepOut, 0, 100 } /* seqPointIndex: 100 */,
	{ 25481, 2, 96, 96, 17, 46, 156, kSequencePointKind_StepOut, 0, 101 } /* seqPointIndex: 101 */,
	{ 25481, 2, 100, 100, 17, 35, 175, kSequencePointKind_StepOut, 0, 102 } /* seqPointIndex: 102 */,
};
#else
extern Il2CppSequencePoint g_sequencePointsActionLibrary[];
Il2CppSequencePoint g_sequencePointsActionLibrary[1] = { { 0, 0, 0, 0, 0, 0, 0, kSequencePointKind_Normal, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#else
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[] = {
{ "", { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }, //0 
{ "C:\\Users\\Manue\\Work\\FAtiMA-Toolkit\\Components\\ActionLibrary\\Action.cs", { 39, 213, 176, 124, 241, 199, 125, 107, 118, 15, 249, 19, 217, 84, 154, 15} }, //1 
{ "C:\\Users\\Manue\\Work\\FAtiMA-Toolkit\\Components\\ActionLibrary\\ActionDefinition.cs", { 100, 214, 49, 190, 211, 161, 214, 208, 35, 217, 200, 73, 130, 236, 188, 120} }, //2 
};
#else
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[1] = { NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppTypeSourceFilePair g_typeSourceFiles[2] = 
{
	{ 4025, 1 },
	{ 4026, 2 },
};
#else
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodScope g_methodScopes[7] = 
{
	{ 0, 28 },
	{ 0, 63 },
	{ 7, 63 },
	{ 0, 17 },
	{ 0, 12 },
	{ 0, 190 },
	{ 141, 163 },
};
#else
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[17] = 
{
	{ 0, 0, 0 } /* WellFormedNames.Name ActionLibrary.Action::get_Key() */,
	{ 0, 0, 0 } /* WellFormedNames.Name ActionLibrary.Action::get_Target() */,
	{ 0, 0, 0 } /* System.Collections.Generic.IList`1<WellFormedNames.Name> ActionLibrary.Action::get_Parameters() */,
	{ 0, 0, 0 } /* System.Single ActionLibrary.Action::get_Utility() */,
	{ 0, 0, 0 } /* System.Void ActionLibrary.Action::set_Utility(System.Single) */,
	{ 28, 0, 1 } /* WellFormedNames.Name ActionLibrary.Action::get_Name() */,
	{ 63, 1, 2 } /* System.Void ActionLibrary.Action::.ctor(System.Collections.Generic.IEnumerable`1<WellFormedNames.Name>,WellFormedNames.Name) */,
	{ 17, 3, 1 } /* System.String ActionLibrary.Action::ToString() */,
	{ 0, 0, 0 } /* WellFormedNames.Name ActionLibrary.ActionRule::get_Target() */,
	{ 0, 0, 0 } /* WellFormedNames.Name ActionLibrary.ActionRule::get_Layer() */,
	{ 0, 0, 0 } /* WellFormedNames.Name ActionLibrary.ActionRule::get_Priority() */,
	{ 12, 4, 1 } /* Conditions.ConditionSet ActionLibrary.ActionRule::get_ActivationConditions() */,
	{ 190, 5, 2 } /* ActionLibrary.IAction ActionLibrary.ActionRule::GenerateAction(WellFormedNames.SubstitutionSet) */,
	{ 0, 0, 0 } /* WellFormedNames.Name ActionLibrary.IAction::get_Key() */,
	{ 0, 0, 0 } /* WellFormedNames.Name ActionLibrary.IAction::get_Name() */,
	{ 0, 0, 0 } /* WellFormedNames.Name ActionLibrary.IAction::get_Target() */,
	{ 0, 0, 0 } /* System.Single ActionLibrary.IAction::get_Utility() */,
};
#else
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[1] = { { 0, 0, 0 } };
#endif
IL2CPP_EXTERN_C const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationActionLibrary;
const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationActionLibrary = 
{
	(Il2CppMethodExecutionContextInfo*)g_methodExecutionContextInfos,
	(Il2CppMethodExecutionContextInfoIndex*)g_methodExecutionContextInfoIndexes,
	(Il2CppMethodScope*)g_methodScopes,
	(Il2CppMethodHeaderInfo*)g_methodHeaderInfos,
	(Il2CppSequencePointSourceFile*)g_sequencePointSourceFiles,
	103,
	(Il2CppSequencePoint*)g_sequencePointsActionLibrary,
	0,
	(Il2CppCatchPoint*)g_catchPoints,
	2,
	(Il2CppTypeSourceFilePair*)g_typeSourceFiles,
	(const char**)g_methodExecutionContextInfoStrings,
};
