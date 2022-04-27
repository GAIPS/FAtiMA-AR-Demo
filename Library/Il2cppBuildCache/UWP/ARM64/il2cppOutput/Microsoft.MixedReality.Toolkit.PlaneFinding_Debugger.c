#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[10] = 
{
	{ 20273, 0,  1 } /*tableIndex: 0 */,
	{ 20222, 1,  1 } /*tableIndex: 1 */,
	{ 20273, 2,  1 } /*tableIndex: 2 */,
	{ 18820, 3,  3 } /*tableIndex: 3 */,
	{ 20222, 4,  5 } /*tableIndex: 4 */,
	{ 20222, 4,  7 } /*tableIndex: 5 */,
	{ 15194, 5,  8 } /*tableIndex: 6 */,
	{ 20222, 6,  8 } /*tableIndex: 7 */,
	{ 20273, 7,  8 } /*tableIndex: 8 */,
	{ 20222, 4,  9 } /*tableIndex: 9 */,
};
#else
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const char* g_methodExecutionContextInfoStrings[8] = 
{
	"pinnedMeshData",
	"planeCount",
	"planesPtr",
	"h",
	"i",
	"resArray",
	"structsize",
	"current",
};
#else
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[14] = 
{
	{ 0, 3 } /* 0x06000001 Microsoft.MixedReality.Toolkit.SpatialAwareness.Processing.BoundedPlane[] Microsoft.MixedReality.Toolkit.SpatialAwareness.Processing.PlaneFinding::FindPlanes(System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.Processing.PlaneFinding/MeshData>,System.Single,System.Single) */,
	{ 0, 0 } /* 0x06000002 System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.Processing.PlaneFinding::StartPlaneFinding() */,
	{ 0, 0 } /* 0x06000003 System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.Processing.PlaneFinding::FinishPlaneFinding() */,
	{ 3, 1 } /* 0x06000004 System.IntPtr Microsoft.MixedReality.Toolkit.SpatialAwareness.Processing.PlaneFinding::PinObject(System.Object) */,
	{ 4, 1 } /* 0x06000005 System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.Processing.PlaneFinding::UnpinAllObjects() */,
	{ 5, 1 } /* 0x06000006 System.IntPtr Microsoft.MixedReality.Toolkit.SpatialAwareness.Processing.PlaneFinding::PinMeshDataForMarshalling(System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.Processing.PlaneFinding/MeshData>) */,
	{ 6, 4 } /* 0x06000007 Microsoft.MixedReality.Toolkit.SpatialAwareness.Processing.BoundedPlane[] Microsoft.MixedReality.Toolkit.SpatialAwareness.Processing.PlaneFinding::MarshalBoundedPlanesFromIntPtr(System.IntPtr,System.Int32) */,
	{ 0, 0 } /* 0x06000008 System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.Processing.PlaneFinding::.cctor() */,
	{ 0, 0 } /* 0x06000009 UnityEngine.Matrix4x4 Microsoft.MixedReality.Toolkit.SpatialAwareness.Processing.PlaneFinding/MeshData::get_Transform() */,
	{ 0, 0 } /* 0x0600000A UnityEngine.Vector3[] Microsoft.MixedReality.Toolkit.SpatialAwareness.Processing.PlaneFinding/MeshData::get_Vertices() */,
	{ 0, 0 } /* 0x0600000B UnityEngine.Vector3[] Microsoft.MixedReality.Toolkit.SpatialAwareness.Processing.PlaneFinding/MeshData::get_Normals() */,
	{ 0, 0 } /* 0x0600000C System.Int32[] Microsoft.MixedReality.Toolkit.SpatialAwareness.Processing.PlaneFinding/MeshData::get_Indices() */,
	{ 0, 0 } /* 0x0600000D System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.Processing.PlaneFinding/MeshData::.ctor(UnityEngine.MeshFilter) */,
	{ 0, 0 } /* 0x0600000E System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.Processing.PlaneFinding/DLLImports::FindPlanes(System.Int32,System.IntPtr,System.Single,System.Single,System.Int32&,System.IntPtr&) */,
};
#else
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[1] = { { 0, 0} };
#endif
#if IL2CPP_MONO_DEBUGGER
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsMicrosoft_MixedReality_Toolkit_PlaneFinding[];
Il2CppSequencePoint g_sequencePointsMicrosoft_MixedReality_Toolkit_PlaneFinding[167] = 
{
	{ 35052, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 0 } /* seqPointIndex: 0 */,
	{ 35052, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 1 } /* seqPointIndex: 1 */,
	{ 35052, 1, 151, 151, 9, 10, 0, kSequencePointKind_Normal, 0, 2 } /* seqPointIndex: 2 */,
	{ 35052, 1, 152, 152, 13, 33, 1, kSequencePointKind_Normal, 0, 3 } /* seqPointIndex: 3 */,
	{ 35052, 1, 155, 155, 13, 14, 7, kSequencePointKind_Normal, 0, 4 } /* seqPointIndex: 4 */,
	{ 35052, 1, 156, 156, 17, 75, 8, kSequencePointKind_Normal, 0, 5 } /* seqPointIndex: 5 */,
	{ 35052, 1, 157, 157, 17, 144, 15, kSequencePointKind_Normal, 0, 6 } /* seqPointIndex: 6 */,
	{ 35052, 1, 158, 158, 17, 78, 34, kSequencePointKind_Normal, 0, 7 } /* seqPointIndex: 7 */,
	{ 35052, 1, 161, 161, 13, 14, 44, kSequencePointKind_Normal, 0, 8 } /* seqPointIndex: 8 */,
	{ 35052, 1, 162, 162, 17, 38, 45, kSequencePointKind_Normal, 0, 9 } /* seqPointIndex: 9 */,
	{ 35052, 1, 163, 163, 13, 14, 51, kSequencePointKind_Normal, 0, 10 } /* seqPointIndex: 10 */,
	{ 35052, 1, 164, 164, 9, 10, 53, kSequencePointKind_Normal, 0, 11 } /* seqPointIndex: 11 */,
	{ 35052, 1, 152, 152, 13, 33, 1, kSequencePointKind_StepOut, 0, 12 } /* seqPointIndex: 12 */,
	{ 35052, 1, 156, 156, 17, 75, 9, kSequencePointKind_StepOut, 0, 13 } /* seqPointIndex: 13 */,
	{ 35052, 1, 157, 157, 17, 144, 16, kSequencePointKind_StepOut, 0, 14 } /* seqPointIndex: 14 */,
	{ 35052, 1, 157, 157, 17, 144, 28, kSequencePointKind_StepOut, 0, 15 } /* seqPointIndex: 15 */,
	{ 35052, 1, 158, 158, 17, 78, 36, kSequencePointKind_StepOut, 0, 16 } /* seqPointIndex: 16 */,
	{ 35052, 1, 162, 162, 17, 38, 45, kSequencePointKind_StepOut, 0, 17 } /* seqPointIndex: 17 */,
	{ 35053, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 18 } /* seqPointIndex: 18 */,
	{ 35053, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 19 } /* seqPointIndex: 19 */,
	{ 35053, 1, 183, 183, 9, 10, 0, kSequencePointKind_Normal, 0, 20 } /* seqPointIndex: 20 */,
	{ 35053, 1, 184, 184, 13, 34, 1, kSequencePointKind_Normal, 0, 21 } /* seqPointIndex: 21 */,
	{ 35053, 1, 185, 185, 13, 14, 18, kSequencePointKind_Normal, 0, 22 } /* seqPointIndex: 22 */,
	{ 35053, 1, 186, 186, 17, 39, 19, kSequencePointKind_Normal, 0, 23 } /* seqPointIndex: 23 */,
	{ 35053, 1, 186, 186, 0, 0, 25, kSequencePointKind_Normal, 0, 24 } /* seqPointIndex: 24 */,
	{ 35053, 1, 187, 187, 17, 18, 28, kSequencePointKind_Normal, 0, 25 } /* seqPointIndex: 25 */,
	{ 35053, 1, 188, 188, 21, 128, 29, kSequencePointKind_Normal, 0, 26 } /* seqPointIndex: 26 */,
	{ 35053, 1, 190, 190, 17, 42, 40, kSequencePointKind_Normal, 0, 27 } /* seqPointIndex: 27 */,
	{ 35053, 1, 191, 191, 13, 14, 46, kSequencePointKind_Normal, 0, 28 } /* seqPointIndex: 28 */,
	{ 35053, 1, 191, 191, 0, 0, 49, kSequencePointKind_Normal, 0, 29 } /* seqPointIndex: 29 */,
	{ 35053, 1, 191, 191, 0, 0, 59, kSequencePointKind_Normal, 0, 30 } /* seqPointIndex: 30 */,
	{ 35053, 1, 192, 192, 9, 10, 60, kSequencePointKind_Normal, 0, 31 } /* seqPointIndex: 31 */,
	{ 35053, 1, 184, 184, 13, 34, 12, kSequencePointKind_StepOut, 0, 32 } /* seqPointIndex: 32 */,
	{ 35053, 1, 188, 188, 21, 128, 34, kSequencePointKind_StepOut, 0, 33 } /* seqPointIndex: 33 */,
	{ 35053, 1, 188, 188, 0, 0, 53, kSequencePointKind_StepOut, 0, 34 } /* seqPointIndex: 34 */,
	{ 35054, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 35 } /* seqPointIndex: 35 */,
	{ 35054, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 36 } /* seqPointIndex: 36 */,
	{ 35054, 1, 199, 199, 9, 10, 0, kSequencePointKind_Normal, 0, 37 } /* seqPointIndex: 37 */,
	{ 35054, 1, 200, 200, 13, 31, 1, kSequencePointKind_Normal, 0, 38 } /* seqPointIndex: 38 */,
	{ 35054, 1, 201, 201, 13, 39, 7, kSequencePointKind_Normal, 0, 39 } /* seqPointIndex: 39 */,
	{ 35054, 1, 202, 202, 9, 10, 13, kSequencePointKind_Normal, 0, 40 } /* seqPointIndex: 40 */,
	{ 35054, 1, 200, 200, 13, 31, 1, kSequencePointKind_StepOut, 0, 41 } /* seqPointIndex: 41 */,
	{ 35055, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 42 } /* seqPointIndex: 42 */,
	{ 35055, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 43 } /* seqPointIndex: 43 */,
	{ 35055, 1, 210, 210, 9, 10, 0, kSequencePointKind_Normal, 0, 44 } /* seqPointIndex: 44 */,
	{ 35055, 1, 211, 211, 13, 67, 1, kSequencePointKind_Normal, 0, 45 } /* seqPointIndex: 45 */,
	{ 35055, 1, 212, 212, 13, 46, 9, kSequencePointKind_Normal, 0, 46 } /* seqPointIndex: 46 */,
	{ 35055, 1, 213, 213, 13, 43, 21, kSequencePointKind_Normal, 0, 47 } /* seqPointIndex: 47 */,
	{ 35055, 1, 214, 214, 9, 10, 31, kSequencePointKind_Normal, 0, 48 } /* seqPointIndex: 48 */,
	{ 35055, 1, 211, 211, 13, 67, 3, kSequencePointKind_StepOut, 0, 49 } /* seqPointIndex: 49 */,
	{ 35055, 1, 212, 212, 13, 46, 15, kSequencePointKind_StepOut, 0, 50 } /* seqPointIndex: 50 */,
	{ 35055, 1, 213, 213, 13, 43, 23, kSequencePointKind_StepOut, 0, 51 } /* seqPointIndex: 51 */,
	{ 35056, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 52 } /* seqPointIndex: 52 */,
	{ 35056, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 53 } /* seqPointIndex: 53 */,
	{ 35056, 1, 220, 220, 9, 10, 0, kSequencePointKind_Normal, 0, 54 } /* seqPointIndex: 54 */,
	{ 35056, 1, 221, 221, 18, 27, 1, kSequencePointKind_Normal, 0, 55 } /* seqPointIndex: 55 */,
	{ 35056, 1, 221, 221, 0, 0, 3, kSequencePointKind_Normal, 0, 56 } /* seqPointIndex: 56 */,
	{ 35056, 1, 222, 222, 13, 14, 5, kSequencePointKind_Normal, 0, 57 } /* seqPointIndex: 57 */,
	{ 35056, 1, 223, 223, 17, 53, 6, kSequencePointKind_Normal, 0, 58 } /* seqPointIndex: 58 */,
	{ 35056, 1, 224, 224, 13, 14, 26, kSequencePointKind_Normal, 0, 59 } /* seqPointIndex: 59 */,
	{ 35056, 1, 221, 221, 66, 69, 27, kSequencePointKind_Normal, 0, 60 } /* seqPointIndex: 60 */,
	{ 35056, 1, 221, 221, 29, 64, 31, kSequencePointKind_Normal, 0, 61 } /* seqPointIndex: 61 */,
	{ 35056, 1, 221, 221, 0, 0, 45, kSequencePointKind_Normal, 0, 62 } /* seqPointIndex: 62 */,
	{ 35056, 1, 225, 225, 13, 47, 48, kSequencePointKind_Normal, 0, 63 } /* seqPointIndex: 63 */,
	{ 35056, 1, 226, 226, 9, 10, 59, kSequencePointKind_Normal, 0, 64 } /* seqPointIndex: 64 */,
	{ 35056, 1, 223, 223, 17, 53, 12, kSequencePointKind_StepOut, 0, 65 } /* seqPointIndex: 65 */,
	{ 35056, 1, 223, 223, 17, 53, 20, kSequencePointKind_StepOut, 0, 66 } /* seqPointIndex: 66 */,
	{ 35056, 1, 221, 221, 29, 64, 37, kSequencePointKind_StepOut, 0, 67 } /* seqPointIndex: 67 */,
	{ 35056, 1, 225, 225, 13, 47, 53, kSequencePointKind_StepOut, 0, 68 } /* seqPointIndex: 68 */,
	{ 35057, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 69 } /* seqPointIndex: 69 */,
	{ 35057, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 70 } /* seqPointIndex: 70 */,
	{ 35057, 1, 235, 235, 9, 10, 0, kSequencePointKind_Normal, 0, 71 } /* seqPointIndex: 71 */,
	{ 35057, 1, 237, 237, 13, 120, 1, kSequencePointKind_Normal, 0, 72 } /* seqPointIndex: 72 */,
	{ 35057, 1, 237, 237, 0, 0, 27, kSequencePointKind_Normal, 0, 73 } /* seqPointIndex: 73 */,
	{ 35057, 1, 238, 238, 13, 14, 30, kSequencePointKind_Normal, 0, 74 } /* seqPointIndex: 74 */,
	{ 35057, 1, 239, 239, 17, 100, 31, kSequencePointKind_Normal, 0, 75 } /* seqPointIndex: 75 */,
	{ 35057, 1, 240, 240, 13, 14, 47, kSequencePointKind_Normal, 0, 76 } /* seqPointIndex: 76 */,
	{ 35057, 1, 242, 242, 18, 27, 48, kSequencePointKind_Normal, 0, 77 } /* seqPointIndex: 77 */,
	{ 35057, 1, 242, 242, 0, 0, 50, kSequencePointKind_Normal, 0, 78 } /* seqPointIndex: 78 */,
	{ 35057, 1, 243, 243, 13, 14, 55, kSequencePointKind_Normal, 0, 79 } /* seqPointIndex: 79 */,
	{ 35057, 1, 244, 252, 17, 19, 56, kSequencePointKind_Normal, 0, 80 } /* seqPointIndex: 80 */,
	{ 35057, 1, 253, 253, 13, 14, 227, kSequencePointKind_Normal, 0, 81 } /* seqPointIndex: 81 */,
	{ 35057, 1, 242, 242, 47, 50, 228, kSequencePointKind_Normal, 0, 82 } /* seqPointIndex: 82 */,
	{ 35057, 1, 242, 242, 29, 45, 232, kSequencePointKind_Normal, 0, 83 } /* seqPointIndex: 83 */,
	{ 35057, 1, 242, 242, 0, 0, 243, kSequencePointKind_Normal, 0, 84 } /* seqPointIndex: 84 */,
	{ 35057, 1, 255, 255, 13, 66, 250, kSequencePointKind_Normal, 0, 85 } /* seqPointIndex: 85 */,
	{ 35057, 1, 256, 256, 9, 10, 264, kSequencePointKind_Normal, 0, 86 } /* seqPointIndex: 86 */,
	{ 35057, 1, 237, 237, 13, 120, 16, kSequencePointKind_StepOut, 0, 87 } /* seqPointIndex: 87 */,
	{ 35057, 1, 239, 239, 17, 100, 32, kSequencePointKind_StepOut, 0, 88 } /* seqPointIndex: 88 */,
	{ 35057, 1, 244, 252, 17, 19, 74, kSequencePointKind_StepOut, 0, 89 } /* seqPointIndex: 89 */,
	{ 35057, 1, 244, 252, 17, 19, 82, kSequencePointKind_StepOut, 0, 90 } /* seqPointIndex: 90 */,
	{ 35057, 1, 244, 252, 17, 19, 96, kSequencePointKind_StepOut, 0, 91 } /* seqPointIndex: 91 */,
	{ 35057, 1, 244, 252, 17, 19, 104, kSequencePointKind_StepOut, 0, 92 } /* seqPointIndex: 92 */,
	{ 35057, 1, 244, 252, 17, 19, 120, kSequencePointKind_StepOut, 0, 93 } /* seqPointIndex: 93 */,
	{ 35057, 1, 244, 252, 17, 19, 128, kSequencePointKind_StepOut, 0, 94 } /* seqPointIndex: 94 */,
	{ 35057, 1, 244, 252, 17, 19, 144, kSequencePointKind_StepOut, 0, 95 } /* seqPointIndex: 95 */,
	{ 35057, 1, 244, 252, 17, 19, 152, kSequencePointKind_StepOut, 0, 96 } /* seqPointIndex: 96 */,
	{ 35057, 1, 244, 252, 17, 19, 157, kSequencePointKind_StepOut, 0, 97 } /* seqPointIndex: 97 */,
	{ 35057, 1, 244, 252, 17, 19, 171, kSequencePointKind_StepOut, 0, 98 } /* seqPointIndex: 98 */,
	{ 35057, 1, 244, 252, 17, 19, 179, kSequencePointKind_StepOut, 0, 99 } /* seqPointIndex: 99 */,
	{ 35057, 1, 244, 252, 17, 19, 184, kSequencePointKind_StepOut, 0, 100 } /* seqPointIndex: 100 */,
	{ 35057, 1, 244, 252, 17, 19, 198, kSequencePointKind_StepOut, 0, 101 } /* seqPointIndex: 101 */,
	{ 35057, 1, 244, 252, 17, 19, 206, kSequencePointKind_StepOut, 0, 102 } /* seqPointIndex: 102 */,
	{ 35057, 1, 244, 252, 17, 19, 211, kSequencePointKind_StepOut, 0, 103 } /* seqPointIndex: 103 */,
	{ 35057, 1, 242, 242, 29, 45, 234, kSequencePointKind_StepOut, 0, 104 } /* seqPointIndex: 104 */,
	{ 35057, 1, 255, 255, 13, 66, 255, kSequencePointKind_StepOut, 0, 105 } /* seqPointIndex: 105 */,
	{ 35058, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 106 } /* seqPointIndex: 106 */,
	{ 35058, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 107 } /* seqPointIndex: 107 */,
	{ 35058, 1, 263, 263, 9, 10, 0, kSequencePointKind_Normal, 0, 108 } /* seqPointIndex: 108 */,
	{ 35058, 1, 264, 264, 13, 62, 1, kSequencePointKind_Normal, 0, 109 } /* seqPointIndex: 109 */,
	{ 35058, 1, 265, 265, 13, 67, 8, kSequencePointKind_Normal, 0, 110 } /* seqPointIndex: 110 */,
	{ 35058, 1, 266, 266, 13, 39, 24, kSequencePointKind_Normal, 0, 111 } /* seqPointIndex: 111 */,
	{ 35058, 1, 267, 267, 18, 27, 26, kSequencePointKind_Normal, 0, 112 } /* seqPointIndex: 112 */,
	{ 35058, 1, 267, 267, 0, 0, 28, kSequencePointKind_Normal, 0, 113 } /* seqPointIndex: 113 */,
	{ 35058, 1, 268, 268, 13, 14, 30, kSequencePointKind_Normal, 0, 114 } /* seqPointIndex: 114 */,
	{ 35058, 1, 269, 269, 17, 99, 31, kSequencePointKind_Normal, 0, 115 } /* seqPointIndex: 115 */,
	{ 35058, 1, 270, 270, 17, 64, 59, kSequencePointKind_Normal, 0, 116 } /* seqPointIndex: 116 */,
	{ 35058, 1, 271, 271, 13, 14, 74, kSequencePointKind_Normal, 0, 117 } /* seqPointIndex: 117 */,
	{ 35058, 1, 267, 267, 39, 42, 75, kSequencePointKind_Normal, 0, 118 } /* seqPointIndex: 118 */,
	{ 35058, 1, 267, 267, 29, 37, 79, kSequencePointKind_Normal, 0, 119 } /* seqPointIndex: 119 */,
	{ 35058, 1, 267, 267, 0, 0, 85, kSequencePointKind_Normal, 0, 120 } /* seqPointIndex: 120 */,
	{ 35058, 1, 272, 272, 13, 45, 89, kSequencePointKind_Normal, 0, 121 } /* seqPointIndex: 121 */,
	{ 35058, 1, 273, 273, 13, 29, 96, kSequencePointKind_Normal, 0, 122 } /* seqPointIndex: 122 */,
	{ 35058, 1, 274, 274, 9, 10, 101, kSequencePointKind_Normal, 0, 123 } /* seqPointIndex: 123 */,
	{ 35058, 1, 265, 265, 13, 67, 13, kSequencePointKind_StepOut, 0, 124 } /* seqPointIndex: 124 */,
	{ 35058, 1, 265, 265, 13, 67, 18, kSequencePointKind_StepOut, 0, 125 } /* seqPointIndex: 125 */,
	{ 35058, 1, 269, 269, 17, 99, 39, kSequencePointKind_StepOut, 0, 126 } /* seqPointIndex: 126 */,
	{ 35058, 1, 269, 269, 17, 99, 44, kSequencePointKind_StepOut, 0, 127 } /* seqPointIndex: 127 */,
	{ 35058, 1, 270, 270, 17, 64, 60, kSequencePointKind_StepOut, 0, 128 } /* seqPointIndex: 128 */,
	{ 35058, 1, 270, 270, 17, 64, 68, kSequencePointKind_StepOut, 0, 129 } /* seqPointIndex: 129 */,
	{ 35058, 1, 272, 272, 13, 45, 90, kSequencePointKind_StepOut, 0, 130 } /* seqPointIndex: 130 */,
	{ 35059, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 131 } /* seqPointIndex: 131 */,
	{ 35059, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 132 } /* seqPointIndex: 132 */,
	{ 35059, 1, 170, 170, 9, 70, 0, kSequencePointKind_Normal, 0, 133 } /* seqPointIndex: 133 */,
	{ 35059, 1, 171, 171, 9, 97, 10, kSequencePointKind_Normal, 0, 134 } /* seqPointIndex: 134 */,
	{ 35059, 1, 173, 173, 9, 55, 20, kSequencePointKind_Normal, 0, 135 } /* seqPointIndex: 135 */,
	{ 35059, 1, 174, 174, 9, 96, 26, kSequencePointKind_Normal, 0, 136 } /* seqPointIndex: 136 */,
	{ 35059, 1, 170, 170, 9, 70, 0, kSequencePointKind_StepOut, 0, 137 } /* seqPointIndex: 137 */,
	{ 35059, 1, 171, 171, 9, 97, 10, kSequencePointKind_StepOut, 0, 138 } /* seqPointIndex: 138 */,
	{ 35060, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 139 } /* seqPointIndex: 139 */,
	{ 35060, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 140 } /* seqPointIndex: 140 */,
	{ 35060, 1, 43, 43, 44, 48, 0, kSequencePointKind_Normal, 0, 141 } /* seqPointIndex: 141 */,
	{ 35061, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 142 } /* seqPointIndex: 142 */,
	{ 35061, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 143 } /* seqPointIndex: 143 */,
	{ 35061, 1, 44, 44, 43, 47, 0, kSequencePointKind_Normal, 0, 144 } /* seqPointIndex: 144 */,
	{ 35062, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 145 } /* seqPointIndex: 145 */,
	{ 35062, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 146 } /* seqPointIndex: 146 */,
	{ 35062, 1, 45, 45, 42, 46, 0, kSequencePointKind_Normal, 0, 147 } /* seqPointIndex: 147 */,
	{ 35063, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 148 } /* seqPointIndex: 148 */,
	{ 35063, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 149 } /* seqPointIndex: 149 */,
	{ 35063, 1, 46, 46, 38, 42, 0, kSequencePointKind_Normal, 0, 150 } /* seqPointIndex: 150 */,
	{ 35064, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 151 } /* seqPointIndex: 151 */,
	{ 35064, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 152 } /* seqPointIndex: 152 */,
	{ 35064, 1, 49, 49, 13, 14, 0, kSequencePointKind_Normal, 0, 153 } /* seqPointIndex: 153 */,
	{ 35064, 1, 50, 50, 17, 69, 1, kSequencePointKind_Normal, 0, 154 } /* seqPointIndex: 154 */,
	{ 35064, 1, 51, 51, 17, 59, 18, kSequencePointKind_Normal, 0, 155 } /* seqPointIndex: 155 */,
	{ 35064, 1, 52, 52, 17, 57, 35, kSequencePointKind_Normal, 0, 156 } /* seqPointIndex: 156 */,
	{ 35064, 1, 53, 53, 17, 59, 52, kSequencePointKind_Normal, 0, 157 } /* seqPointIndex: 157 */,
	{ 35064, 1, 54, 54, 13, 14, 69, kSequencePointKind_Normal, 0, 158 } /* seqPointIndex: 158 */,
	{ 35064, 1, 50, 50, 17, 69, 3, kSequencePointKind_StepOut, 0, 159 } /* seqPointIndex: 159 */,
	{ 35064, 1, 50, 50, 17, 69, 8, kSequencePointKind_StepOut, 0, 160 } /* seqPointIndex: 160 */,
	{ 35064, 1, 51, 51, 17, 59, 20, kSequencePointKind_StepOut, 0, 161 } /* seqPointIndex: 161 */,
	{ 35064, 1, 51, 51, 17, 59, 25, kSequencePointKind_StepOut, 0, 162 } /* seqPointIndex: 162 */,
	{ 35064, 1, 52, 52, 17, 57, 37, kSequencePointKind_StepOut, 0, 163 } /* seqPointIndex: 163 */,
	{ 35064, 1, 52, 52, 17, 57, 42, kSequencePointKind_StepOut, 0, 164 } /* seqPointIndex: 164 */,
	{ 35064, 1, 53, 53, 17, 59, 54, kSequencePointKind_StepOut, 0, 165 } /* seqPointIndex: 165 */,
	{ 35064, 1, 53, 53, 17, 59, 59, kSequencePointKind_StepOut, 0, 166 } /* seqPointIndex: 166 */,
};
#else
extern Il2CppSequencePoint g_sequencePointsMicrosoft_MixedReality_Toolkit_PlaneFinding[];
Il2CppSequencePoint g_sequencePointsMicrosoft_MixedReality_Toolkit_PlaneFinding[1] = { { 0, 0, 0, 0, 0, 0, 0, kSequencePointKind_Normal, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#else
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[] = {
{ "", { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }, //0 
{ "D:\\Work\\Slice\\AugmentedReality\\MRTKTutorial\\Library\\PackageCache\\com.microsoft.mixedreality.toolkit.planefinding@dade302511b6-1616523143904\\PlaneFinding.cs", { 88, 230, 52, 230, 221, 174, 86, 97, 227, 8, 222, 63, 245, 203, 58, 34} }, //1 
};
#else
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[1] = { NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppTypeSourceFilePair g_typeSourceFiles[2] = 
{
	{ 5551, 1 },
	{ 5548, 1 },
};
#else
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodScope g_methodScopes[10] = 
{
	{ 0, 55 },
	{ 7, 44 },
	{ 0, 61 },
	{ 0, 33 },
	{ 0, 60 },
	{ 1, 48 },
	{ 0, 267 },
	{ 48, 250 },
	{ 0, 104 },
	{ 26, 89 },
};
#else
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[14] = 
{
	{ 55, 0, 2 } /* Microsoft.MixedReality.Toolkit.SpatialAwareness.Processing.BoundedPlane[] Microsoft.MixedReality.Toolkit.SpatialAwareness.Processing.PlaneFinding::FindPlanes(System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.Processing.PlaneFinding/MeshData>,System.Single,System.Single) */,
	{ 61, 2, 1 } /* System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.Processing.PlaneFinding::StartPlaneFinding() */,
	{ 0, 0, 0 } /* System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.Processing.PlaneFinding::FinishPlaneFinding() */,
	{ 33, 3, 1 } /* System.IntPtr Microsoft.MixedReality.Toolkit.SpatialAwareness.Processing.PlaneFinding::PinObject(System.Object) */,
	{ 60, 4, 2 } /* System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.Processing.PlaneFinding::UnpinAllObjects() */,
	{ 267, 6, 2 } /* System.IntPtr Microsoft.MixedReality.Toolkit.SpatialAwareness.Processing.PlaneFinding::PinMeshDataForMarshalling(System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.Processing.PlaneFinding/MeshData>) */,
	{ 104, 8, 2 } /* Microsoft.MixedReality.Toolkit.SpatialAwareness.Processing.BoundedPlane[] Microsoft.MixedReality.Toolkit.SpatialAwareness.Processing.PlaneFinding::MarshalBoundedPlanesFromIntPtr(System.IntPtr,System.Int32) */,
	{ 0, 0, 0 } /* System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.Processing.PlaneFinding::.cctor() */,
	{ 0, 0, 0 } /* UnityEngine.Matrix4x4 Microsoft.MixedReality.Toolkit.SpatialAwareness.Processing.PlaneFinding/MeshData::get_Transform() */,
	{ 0, 0, 0 } /* UnityEngine.Vector3[] Microsoft.MixedReality.Toolkit.SpatialAwareness.Processing.PlaneFinding/MeshData::get_Vertices() */,
	{ 0, 0, 0 } /* UnityEngine.Vector3[] Microsoft.MixedReality.Toolkit.SpatialAwareness.Processing.PlaneFinding/MeshData::get_Normals() */,
	{ 0, 0, 0 } /* System.Int32[] Microsoft.MixedReality.Toolkit.SpatialAwareness.Processing.PlaneFinding/MeshData::get_Indices() */,
	{ 0, 0, 0 } /* System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.Processing.PlaneFinding/MeshData::.ctor(UnityEngine.MeshFilter) */,
	{ 0, 0, 0 } /* System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.Processing.PlaneFinding/DLLImports::FindPlanes(System.Int32,System.IntPtr,System.Single,System.Single,System.Int32&,System.IntPtr&) */,
};
#else
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[1] = { { 0, 0, 0 } };
#endif
IL2CPP_EXTERN_C const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationMicrosoft_MixedReality_Toolkit_PlaneFinding;
const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationMicrosoft_MixedReality_Toolkit_PlaneFinding = 
{
	(Il2CppMethodExecutionContextInfo*)g_methodExecutionContextInfos,
	(Il2CppMethodExecutionContextInfoIndex*)g_methodExecutionContextInfoIndexes,
	(Il2CppMethodScope*)g_methodScopes,
	(Il2CppMethodHeaderInfo*)g_methodHeaderInfos,
	(Il2CppSequencePointSourceFile*)g_sequencePointSourceFiles,
	167,
	(Il2CppSequencePoint*)g_sequencePointsMicrosoft_MixedReality_Toolkit_PlaneFinding,
	0,
	(Il2CppCatchPoint*)g_catchPoints,
	2,
	(Il2CppTypeSourceFilePair*)g_typeSourceFiles,
	(const char**)g_methodExecutionContextInfoStrings,
};
