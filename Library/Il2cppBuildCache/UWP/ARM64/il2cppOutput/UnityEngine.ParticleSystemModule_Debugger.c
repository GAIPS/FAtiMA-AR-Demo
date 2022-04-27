#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = 
{
	{ 26353, 0,  0 } /*tableIndex: 0 */,
};
#else
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const char* g_methodExecutionContextInfoStrings[1] = 
{
	"particle",
};
#else
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[64] = 
{
	{ 0, 1 } /* 0x06000001 System.Void UnityEngine.ParticleSystem::Emit(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single,UnityEngine.Color32) */,
	{ 0, 0 } /* 0x06000002 System.Void UnityEngine.ParticleSystem::Emit(UnityEngine.ParticleSystem/Particle) */,
	{ 0, 0 } /* 0x06000003 System.Void UnityEngine.ParticleSystem::SetParticles(UnityEngine.ParticleSystem/Particle[],System.Int32,System.Int32) */,
	{ 0, 0 } /* 0x06000004 System.Void UnityEngine.ParticleSystem::SetParticles(UnityEngine.ParticleSystem/Particle[],System.Int32) */,
	{ 0, 0 } /* 0x06000005 System.Int32 UnityEngine.ParticleSystem::GetParticles(UnityEngine.ParticleSystem/Particle[],System.Int32,System.Int32) */,
	{ 0, 0 } /* 0x06000006 System.Int32 UnityEngine.ParticleSystem::GetParticles(UnityEngine.ParticleSystem/Particle[],System.Int32) */,
	{ 0, 0 } /* 0x06000007 System.Int32 UnityEngine.ParticleSystem::GetParticles(UnityEngine.ParticleSystem/Particle[]) */,
	{ 0, 0 } /* 0x06000008 System.Void UnityEngine.ParticleSystem::Emit(System.Int32) */,
	{ 0, 0 } /* 0x06000009 System.Void UnityEngine.ParticleSystem::Emit_Internal(System.Int32) */,
	{ 0, 0 } /* 0x0600000A System.Void UnityEngine.ParticleSystem::Emit(UnityEngine.ParticleSystem/EmitParams,System.Int32) */,
	{ 0, 0 } /* 0x0600000B System.Void UnityEngine.ParticleSystem::EmitOld_Internal(UnityEngine.ParticleSystem/Particle&) */,
	{ 0, 0 } /* 0x0600000C UnityEngine.ParticleSystem/MainModule UnityEngine.ParticleSystem::get_main() */,
	{ 0, 0 } /* 0x0600000D UnityEngine.ParticleSystem/EmissionModule UnityEngine.ParticleSystem::get_emission() */,
	{ 0, 0 } /* 0x0600000E UnityEngine.ParticleSystem/ShapeModule UnityEngine.ParticleSystem::get_shape() */,
	{ 0, 0 } /* 0x0600000F UnityEngine.ParticleSystem/NoiseModule UnityEngine.ParticleSystem::get_noise() */,
	{ 0, 0 } /* 0x06000010 System.Void UnityEngine.ParticleSystem::Emit_Injected(UnityEngine.ParticleSystem/EmitParams&,System.Int32) */,
	{ 0, 0 } /* 0x06000011 System.Void UnityEngine.ParticleSystem/MainModule::.ctor(UnityEngine.ParticleSystem) */,
	{ 0, 0 } /* 0x06000012 System.Void UnityEngine.ParticleSystem/MainModule::set_loop(System.Boolean) */,
	{ 0, 0 } /* 0x06000013 System.Void UnityEngine.ParticleSystem/MainModule::set_simulationSpace(UnityEngine.ParticleSystemSimulationSpace) */,
	{ 0, 0 } /* 0x06000014 System.Void UnityEngine.ParticleSystem/MainModule::set_playOnAwake(System.Boolean) */,
	{ 0, 0 } /* 0x06000015 System.Void UnityEngine.ParticleSystem/MainModule::set_maxParticles(System.Int32) */,
	{ 0, 0 } /* 0x06000016 System.Void UnityEngine.ParticleSystem/MainModule::set_loop_Injected(UnityEngine.ParticleSystem/MainModule&,System.Boolean) */,
	{ 0, 0 } /* 0x06000017 System.Void UnityEngine.ParticleSystem/MainModule::set_simulationSpace_Injected(UnityEngine.ParticleSystem/MainModule&,UnityEngine.ParticleSystemSimulationSpace) */,
	{ 0, 0 } /* 0x06000018 System.Void UnityEngine.ParticleSystem/MainModule::set_playOnAwake_Injected(UnityEngine.ParticleSystem/MainModule&,System.Boolean) */,
	{ 0, 0 } /* 0x06000019 System.Void UnityEngine.ParticleSystem/MainModule::set_maxParticles_Injected(UnityEngine.ParticleSystem/MainModule&,System.Int32) */,
	{ 0, 0 } /* 0x0600001A System.Void UnityEngine.ParticleSystem/EmissionModule::.ctor(UnityEngine.ParticleSystem) */,
	{ 0, 0 } /* 0x0600001B System.Void UnityEngine.ParticleSystem/EmissionModule::set_enabled(System.Boolean) */,
	{ 0, 0 } /* 0x0600001C System.Void UnityEngine.ParticleSystem/EmissionModule::set_rateOverTime(UnityEngine.ParticleSystem/MinMaxCurve) */,
	{ 0, 0 } /* 0x0600001D System.Void UnityEngine.ParticleSystem/EmissionModule::set_rateOverDistance(UnityEngine.ParticleSystem/MinMaxCurve) */,
	{ 0, 0 } /* 0x0600001E System.Void UnityEngine.ParticleSystem/EmissionModule::set_enabled_Injected(UnityEngine.ParticleSystem/EmissionModule&,System.Boolean) */,
	{ 0, 0 } /* 0x0600001F System.Void UnityEngine.ParticleSystem/EmissionModule::set_rateOverTime_Injected(UnityEngine.ParticleSystem/EmissionModule&,UnityEngine.ParticleSystem/MinMaxCurve&) */,
	{ 0, 0 } /* 0x06000020 System.Void UnityEngine.ParticleSystem/EmissionModule::set_rateOverDistance_Injected(UnityEngine.ParticleSystem/EmissionModule&,UnityEngine.ParticleSystem/MinMaxCurve&) */,
	{ 0, 0 } /* 0x06000021 System.Void UnityEngine.ParticleSystem/ShapeModule::.ctor(UnityEngine.ParticleSystem) */,
	{ 0, 0 } /* 0x06000022 System.Void UnityEngine.ParticleSystem/ShapeModule::set_enabled(System.Boolean) */,
	{ 0, 0 } /* 0x06000023 System.Void UnityEngine.ParticleSystem/ShapeModule::set_enabled_Injected(UnityEngine.ParticleSystem/ShapeModule&,System.Boolean) */,
	{ 0, 0 } /* 0x06000024 System.Void UnityEngine.ParticleSystem/Particle::set_lifetime(System.Single) */,
	{ 0, 0 } /* 0x06000025 System.Void UnityEngine.ParticleSystem/Particle::set_position(UnityEngine.Vector3) */,
	{ 0, 0 } /* 0x06000026 System.Void UnityEngine.ParticleSystem/Particle::set_velocity(UnityEngine.Vector3) */,
	{ 0, 0 } /* 0x06000027 System.Void UnityEngine.ParticleSystem/Particle::set_remainingLifetime(System.Single) */,
	{ 0, 0 } /* 0x06000028 System.Void UnityEngine.ParticleSystem/Particle::set_startLifetime(System.Single) */,
	{ 0, 0 } /* 0x06000029 System.Void UnityEngine.ParticleSystem/Particle::set_startColor(UnityEngine.Color32) */,
	{ 0, 0 } /* 0x0600002A System.Void UnityEngine.ParticleSystem/Particle::set_randomSeed(System.UInt32) */,
	{ 0, 0 } /* 0x0600002B System.Void UnityEngine.ParticleSystem/Particle::set_startSize(System.Single) */,
	{ 0, 0 } /* 0x0600002C System.Void UnityEngine.ParticleSystem/Particle::set_rotation3D(UnityEngine.Vector3) */,
	{ 0, 0 } /* 0x0600002D System.Void UnityEngine.ParticleSystem/Particle::set_angularVelocity(System.Single) */,
	{ 0, 0 } /* 0x0600002E System.Void UnityEngine.ParticleSystem/Particle::set_angularVelocity3D(UnityEngine.Vector3) */,
	{ 0, 0 } /* 0x0600002F System.Void UnityEngine.ParticleSystem/MinMaxCurve::.ctor(System.Single) */,
	{ 0, 0 } /* 0x06000030 UnityEngine.ParticleSystem/MinMaxCurve UnityEngine.ParticleSystem/MinMaxCurve::op_Implicit(System.Single) */,
	{ 0, 0 } /* 0x06000031 System.Void UnityEngine.ParticleSystem/NoiseModule::.ctor(UnityEngine.ParticleSystem) */,
	{ 0, 0 } /* 0x06000032 System.Void UnityEngine.ParticleSystem/NoiseModule::set_enabled(System.Boolean) */,
	{ 0, 0 } /* 0x06000033 System.Void UnityEngine.ParticleSystem/NoiseModule::set_strengthX(UnityEngine.ParticleSystem/MinMaxCurve) */,
	{ 0, 0 } /* 0x06000034 System.Void UnityEngine.ParticleSystem/NoiseModule::set_strengthY(UnityEngine.ParticleSystem/MinMaxCurve) */,
	{ 0, 0 } /* 0x06000035 System.Void UnityEngine.ParticleSystem/NoiseModule::set_strengthZ(UnityEngine.ParticleSystem/MinMaxCurve) */,
	{ 0, 0 } /* 0x06000036 System.Void UnityEngine.ParticleSystem/NoiseModule::set_frequency(System.Single) */,
	{ 0, 0 } /* 0x06000037 System.Void UnityEngine.ParticleSystem/NoiseModule::set_octaveCount(System.Int32) */,
	{ 0, 0 } /* 0x06000038 System.Void UnityEngine.ParticleSystem/NoiseModule::set_scrollSpeed(UnityEngine.ParticleSystem/MinMaxCurve) */,
	{ 0, 0 } /* 0x06000039 System.Void UnityEngine.ParticleSystem/NoiseModule::set_enabled_Injected(UnityEngine.ParticleSystem/NoiseModule&,System.Boolean) */,
	{ 0, 0 } /* 0x0600003A System.Void UnityEngine.ParticleSystem/NoiseModule::set_strengthX_Injected(UnityEngine.ParticleSystem/NoiseModule&,UnityEngine.ParticleSystem/MinMaxCurve&) */,
	{ 0, 0 } /* 0x0600003B System.Void UnityEngine.ParticleSystem/NoiseModule::set_strengthY_Injected(UnityEngine.ParticleSystem/NoiseModule&,UnityEngine.ParticleSystem/MinMaxCurve&) */,
	{ 0, 0 } /* 0x0600003C System.Void UnityEngine.ParticleSystem/NoiseModule::set_strengthZ_Injected(UnityEngine.ParticleSystem/NoiseModule&,UnityEngine.ParticleSystem/MinMaxCurve&) */,
	{ 0, 0 } /* 0x0600003D System.Void UnityEngine.ParticleSystem/NoiseModule::set_frequency_Injected(UnityEngine.ParticleSystem/NoiseModule&,System.Single) */,
	{ 0, 0 } /* 0x0600003E System.Void UnityEngine.ParticleSystem/NoiseModule::set_octaveCount_Injected(UnityEngine.ParticleSystem/NoiseModule&,System.Int32) */,
	{ 0, 0 } /* 0x0600003F System.Void UnityEngine.ParticleSystem/NoiseModule::set_scrollSpeed_Injected(UnityEngine.ParticleSystem/NoiseModule&,UnityEngine.ParticleSystem/MinMaxCurve&) */,
	{ 0, 0 } /* 0x06000040 System.Int32 UnityEngine.ParticleSystemRenderer::GetMeshes(UnityEngine.Mesh[]) */,
};
#else
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[1] = { { 0, 0} };
#endif
#if IL2CPP_MONO_DEBUGGER
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_ParticleSystemModule[];
Il2CppSequencePoint g_sequencePointsUnityEngine_ParticleSystemModule[179] = 
{
	{ 30056, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 0 } /* seqPointIndex: 0 */,
	{ 30056, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 1 } /* seqPointIndex: 1 */,
	{ 30056, 1, 120, 120, 9, 10, 0, kSequencePointKind_Normal, 0, 2 } /* seqPointIndex: 2 */,
	{ 30056, 1, 121, 121, 13, 78, 1, kSequencePointKind_Normal, 0, 3 } /* seqPointIndex: 3 */,
	{ 30056, 1, 122, 122, 13, 42, 9, kSequencePointKind_Normal, 0, 4 } /* seqPointIndex: 4 */,
	{ 30056, 1, 123, 123, 13, 42, 18, kSequencePointKind_Normal, 0, 5 } /* seqPointIndex: 5 */,
	{ 30056, 1, 124, 124, 13, 42, 27, kSequencePointKind_Normal, 0, 6 } /* seqPointIndex: 6 */,
	{ 30056, 1, 125, 125, 13, 47, 37, kSequencePointKind_Normal, 0, 7 } /* seqPointIndex: 7 */,
	{ 30056, 1, 126, 126, 13, 39, 47, kSequencePointKind_Normal, 0, 8 } /* seqPointIndex: 8 */,
	{ 30056, 1, 127, 127, 13, 48, 56, kSequencePointKind_Normal, 0, 9 } /* seqPointIndex: 9 */,
	{ 30056, 1, 128, 128, 13, 55, 69, kSequencePointKind_Normal, 0, 10 } /* seqPointIndex: 10 */,
	{ 30056, 1, 129, 129, 13, 41, 82, kSequencePointKind_Normal, 0, 11 } /* seqPointIndex: 11 */,
	{ 30056, 1, 130, 130, 13, 37, 92, kSequencePointKind_Normal, 0, 12 } /* seqPointIndex: 12 */,
	{ 30056, 1, 131, 131, 13, 44, 101, kSequencePointKind_Normal, 0, 13 } /* seqPointIndex: 13 */,
	{ 30056, 1, 132, 132, 9, 10, 110, kSequencePointKind_Normal, 0, 14 } /* seqPointIndex: 14 */,
	{ 30056, 1, 122, 122, 13, 42, 12, kSequencePointKind_StepOut, 0, 15 } /* seqPointIndex: 15 */,
	{ 30056, 1, 123, 123, 13, 42, 21, kSequencePointKind_StepOut, 0, 16 } /* seqPointIndex: 16 */,
	{ 30056, 1, 124, 124, 13, 42, 31, kSequencePointKind_StepOut, 0, 17 } /* seqPointIndex: 17 */,
	{ 30056, 1, 125, 125, 13, 47, 41, kSequencePointKind_StepOut, 0, 18 } /* seqPointIndex: 18 */,
	{ 30056, 1, 126, 126, 13, 39, 50, kSequencePointKind_StepOut, 0, 19 } /* seqPointIndex: 19 */,
	{ 30056, 1, 127, 127, 13, 48, 58, kSequencePointKind_StepOut, 0, 20 } /* seqPointIndex: 20 */,
	{ 30056, 1, 127, 127, 13, 48, 63, kSequencePointKind_StepOut, 0, 21 } /* seqPointIndex: 21 */,
	{ 30056, 1, 128, 128, 13, 55, 71, kSequencePointKind_StepOut, 0, 22 } /* seqPointIndex: 22 */,
	{ 30056, 1, 128, 128, 13, 55, 76, kSequencePointKind_StepOut, 0, 23 } /* seqPointIndex: 23 */,
	{ 30056, 1, 129, 129, 13, 41, 86, kSequencePointKind_StepOut, 0, 24 } /* seqPointIndex: 24 */,
	{ 30056, 1, 130, 130, 13, 37, 95, kSequencePointKind_StepOut, 0, 25 } /* seqPointIndex: 25 */,
	{ 30056, 1, 131, 131, 13, 44, 104, kSequencePointKind_StepOut, 0, 26 } /* seqPointIndex: 26 */,
	{ 30057, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 27 } /* seqPointIndex: 27 */,
	{ 30057, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 28 } /* seqPointIndex: 28 */,
	{ 30057, 1, 136, 136, 9, 10, 0, kSequencePointKind_Normal, 0, 29 } /* seqPointIndex: 29 */,
	{ 30057, 1, 137, 137, 13, 44, 1, kSequencePointKind_Normal, 0, 30 } /* seqPointIndex: 30 */,
	{ 30057, 1, 138, 138, 9, 10, 10, kSequencePointKind_Normal, 0, 31 } /* seqPointIndex: 31 */,
	{ 30057, 1, 137, 137, 13, 44, 4, kSequencePointKind_StepOut, 0, 32 } /* seqPointIndex: 32 */,
	{ 30059, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 33 } /* seqPointIndex: 33 */,
	{ 30059, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 34 } /* seqPointIndex: 34 */,
	{ 30059, 2, 95, 95, 72, 73, 0, kSequencePointKind_Normal, 0, 35 } /* seqPointIndex: 35 */,
	{ 30059, 2, 95, 95, 74, 107, 1, kSequencePointKind_Normal, 0, 36 } /* seqPointIndex: 36 */,
	{ 30059, 2, 95, 95, 108, 109, 11, kSequencePointKind_Normal, 0, 37 } /* seqPointIndex: 37 */,
	{ 30059, 2, 95, 95, 74, 107, 5, kSequencePointKind_StepOut, 0, 38 } /* seqPointIndex: 38 */,
	{ 30061, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 39 } /* seqPointIndex: 39 */,
	{ 30061, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 40 } /* seqPointIndex: 40 */,
	{ 30061, 2, 106, 106, 71, 72, 0, kSequencePointKind_Normal, 0, 41 } /* seqPointIndex: 41 */,
	{ 30061, 2, 106, 106, 73, 113, 1, kSequencePointKind_Normal, 0, 42 } /* seqPointIndex: 42 */,
	{ 30061, 2, 106, 106, 114, 115, 13, kSequencePointKind_Normal, 0, 43 } /* seqPointIndex: 43 */,
	{ 30061, 2, 106, 106, 73, 113, 5, kSequencePointKind_StepOut, 0, 44 } /* seqPointIndex: 44 */,
	{ 30062, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 45 } /* seqPointIndex: 45 */,
	{ 30062, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 46 } /* seqPointIndex: 46 */,
	{ 30062, 2, 107, 107, 61, 62, 0, kSequencePointKind_Normal, 0, 47 } /* seqPointIndex: 47 */,
	{ 30062, 2, 107, 107, 63, 98, 1, kSequencePointKind_Normal, 0, 48 } /* seqPointIndex: 48 */,
	{ 30062, 2, 107, 107, 99, 100, 12, kSequencePointKind_Normal, 0, 49 } /* seqPointIndex: 49 */,
	{ 30062, 2, 107, 107, 63, 98, 4, kSequencePointKind_StepOut, 0, 50 } /* seqPointIndex: 50 */,
	{ 30063, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 51 } /* seqPointIndex: 51 */,
	{ 30063, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 52 } /* seqPointIndex: 52 */,
	{ 30063, 2, 168, 168, 37, 38, 0, kSequencePointKind_Normal, 0, 53 } /* seqPointIndex: 53 */,
	{ 30063, 2, 168, 168, 39, 60, 1, kSequencePointKind_Normal, 0, 54 } /* seqPointIndex: 54 */,
	{ 30063, 2, 168, 168, 61, 62, 9, kSequencePointKind_Normal, 0, 55 } /* seqPointIndex: 55 */,
	{ 30063, 2, 168, 168, 39, 60, 3, kSequencePointKind_StepOut, 0, 56 } /* seqPointIndex: 56 */,
	{ 30067, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 57 } /* seqPointIndex: 57 */,
	{ 30067, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 58 } /* seqPointIndex: 58 */,
	{ 30067, 3, 634, 634, 38, 39, 0, kSequencePointKind_Normal, 0, 59 } /* seqPointIndex: 59 */,
	{ 30067, 3, 634, 634, 40, 68, 1, kSequencePointKind_Normal, 0, 60 } /* seqPointIndex: 60 */,
	{ 30067, 3, 634, 634, 69, 70, 10, kSequencePointKind_Normal, 0, 61 } /* seqPointIndex: 61 */,
	{ 30067, 3, 634, 634, 40, 68, 2, kSequencePointKind_StepOut, 0, 62 } /* seqPointIndex: 62 */,
	{ 30068, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 63 } /* seqPointIndex: 63 */,
	{ 30068, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 64 } /* seqPointIndex: 64 */,
	{ 30068, 3, 635, 635, 46, 47, 0, kSequencePointKind_Normal, 0, 65 } /* seqPointIndex: 65 */,
	{ 30068, 3, 635, 635, 48, 80, 1, kSequencePointKind_Normal, 0, 66 } /* seqPointIndex: 66 */,
	{ 30068, 3, 635, 635, 81, 82, 10, kSequencePointKind_Normal, 0, 67 } /* seqPointIndex: 67 */,
	{ 30068, 3, 635, 635, 48, 80, 2, kSequencePointKind_StepOut, 0, 68 } /* seqPointIndex: 68 */,
	{ 30069, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 69 } /* seqPointIndex: 69 */,
	{ 30069, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 70 } /* seqPointIndex: 70 */,
	{ 30069, 3, 636, 636, 40, 41, 0, kSequencePointKind_Normal, 0, 71 } /* seqPointIndex: 71 */,
	{ 30069, 3, 636, 636, 42, 71, 1, kSequencePointKind_Normal, 0, 72 } /* seqPointIndex: 72 */,
	{ 30069, 3, 636, 636, 72, 73, 10, kSequencePointKind_Normal, 0, 73 } /* seqPointIndex: 73 */,
	{ 30069, 3, 636, 636, 42, 71, 2, kSequencePointKind_StepOut, 0, 74 } /* seqPointIndex: 74 */,
	{ 30070, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 75 } /* seqPointIndex: 75 */,
	{ 30070, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 76 } /* seqPointIndex: 76 */,
	{ 30070, 3, 649, 649, 40, 41, 0, kSequencePointKind_Normal, 0, 77 } /* seqPointIndex: 77 */,
	{ 30070, 3, 649, 649, 42, 71, 1, kSequencePointKind_Normal, 0, 78 } /* seqPointIndex: 78 */,
	{ 30070, 3, 649, 649, 72, 73, 10, kSequencePointKind_Normal, 0, 79 } /* seqPointIndex: 79 */,
	{ 30070, 3, 649, 649, 42, 71, 2, kSequencePointKind_StepOut, 0, 80 } /* seqPointIndex: 80 */,
	{ 30072, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 81 } /* seqPointIndex: 81 */,
	{ 30072, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 82 } /* seqPointIndex: 82 */,
	{ 30072, 3, 20, 20, 64, 65, 0, kSequencePointKind_Normal, 0, 83 } /* seqPointIndex: 83 */,
	{ 30072, 3, 20, 20, 66, 100, 1, kSequencePointKind_Normal, 0, 84 } /* seqPointIndex: 84 */,
	{ 30072, 3, 20, 20, 101, 102, 8, kSequencePointKind_Normal, 0, 85 } /* seqPointIndex: 85 */,
	{ 30081, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 86 } /* seqPointIndex: 86 */,
	{ 30081, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 87 } /* seqPointIndex: 87 */,
	{ 30081, 3, 74, 74, 68, 69, 0, kSequencePointKind_Normal, 0, 88 } /* seqPointIndex: 88 */,
	{ 30081, 3, 74, 74, 70, 104, 1, kSequencePointKind_Normal, 0, 89 } /* seqPointIndex: 89 */,
	{ 30081, 3, 74, 74, 105, 106, 8, kSequencePointKind_Normal, 0, 90 } /* seqPointIndex: 90 */,
	{ 30088, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 91 } /* seqPointIndex: 91 */,
	{ 30088, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 92 } /* seqPointIndex: 92 */,
	{ 30088, 3, 112, 112, 65, 66, 0, kSequencePointKind_Normal, 0, 93 } /* seqPointIndex: 93 */,
	{ 30088, 3, 112, 112, 67, 101, 1, kSequencePointKind_Normal, 0, 94 } /* seqPointIndex: 94 */,
	{ 30088, 3, 112, 112, 102, 103, 8, kSequencePointKind_Normal, 0, 95 } /* seqPointIndex: 95 */,
	{ 30091, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 96 } /* seqPointIndex: 96 */,
	{ 30091, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 97 } /* seqPointIndex: 97 */,
	{ 30091, 1, 94, 94, 75, 76, 0, kSequencePointKind_Normal, 0, 98 } /* seqPointIndex: 98 */,
	{ 30091, 1, 94, 94, 77, 103, 1, kSequencePointKind_Normal, 0, 99 } /* seqPointIndex: 99 */,
	{ 30091, 1, 94, 94, 104, 105, 9, kSequencePointKind_Normal, 0, 100 } /* seqPointIndex: 100 */,
	{ 30091, 1, 94, 94, 77, 103, 3, kSequencePointKind_StepOut, 0, 101 } /* seqPointIndex: 101 */,
	{ 30092, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 102 } /* seqPointIndex: 102 */,
	{ 30092, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 103 } /* seqPointIndex: 103 */,
	{ 30092, 4, 190, 190, 70, 71, 0, kSequencePointKind_Normal, 0, 104 } /* seqPointIndex: 104 */,
	{ 30092, 4, 190, 190, 72, 91, 1, kSequencePointKind_Normal, 0, 105 } /* seqPointIndex: 105 */,
	{ 30092, 4, 190, 190, 92, 93, 8, kSequencePointKind_Normal, 0, 106 } /* seqPointIndex: 106 */,
	{ 30093, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 107 } /* seqPointIndex: 107 */,
	{ 30093, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 108 } /* seqPointIndex: 108 */,
	{ 30093, 4, 191, 191, 70, 71, 0, kSequencePointKind_Normal, 0, 109 } /* seqPointIndex: 109 */,
	{ 30093, 4, 191, 191, 72, 91, 1, kSequencePointKind_Normal, 0, 110 } /* seqPointIndex: 110 */,
	{ 30093, 4, 191, 191, 92, 93, 8, kSequencePointKind_Normal, 0, 111 } /* seqPointIndex: 111 */,
	{ 30094, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 112 } /* seqPointIndex: 112 */,
	{ 30094, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 113 } /* seqPointIndex: 113 */,
	{ 30094, 4, 194, 194, 77, 78, 0, kSequencePointKind_Normal, 0, 114 } /* seqPointIndex: 114 */,
	{ 30094, 4, 194, 194, 79, 98, 1, kSequencePointKind_Normal, 0, 115 } /* seqPointIndex: 115 */,
	{ 30094, 4, 194, 194, 99, 100, 8, kSequencePointKind_Normal, 0, 116 } /* seqPointIndex: 116 */,
	{ 30095, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 117 } /* seqPointIndex: 117 */,
	{ 30095, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 118 } /* seqPointIndex: 118 */,
	{ 30095, 4, 195, 195, 78, 79, 0, kSequencePointKind_Normal, 0, 119 } /* seqPointIndex: 119 */,
	{ 30095, 4, 195, 195, 80, 104, 1, kSequencePointKind_Normal, 0, 120 } /* seqPointIndex: 120 */,
	{ 30095, 4, 195, 195, 105, 106, 8, kSequencePointKind_Normal, 0, 121 } /* seqPointIndex: 121 */,
	{ 30096, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 122 } /* seqPointIndex: 122 */,
	{ 30096, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 123 } /* seqPointIndex: 123 */,
	{ 30096, 4, 196, 196, 74, 75, 0, kSequencePointKind_Normal, 0, 124 } /* seqPointIndex: 124 */,
	{ 30096, 4, 196, 196, 76, 97, 1, kSequencePointKind_Normal, 0, 125 } /* seqPointIndex: 125 */,
	{ 30096, 4, 196, 196, 98, 99, 8, kSequencePointKind_Normal, 0, 126 } /* seqPointIndex: 126 */,
	{ 30097, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 127 } /* seqPointIndex: 127 */,
	{ 30097, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 128 } /* seqPointIndex: 128 */,
	{ 30097, 4, 197, 197, 73, 74, 0, kSequencePointKind_Normal, 0, 129 } /* seqPointIndex: 129 */,
	{ 30097, 4, 197, 197, 75, 96, 1, kSequencePointKind_Normal, 0, 130 } /* seqPointIndex: 130 */,
	{ 30097, 4, 197, 197, 97, 98, 8, kSequencePointKind_Normal, 0, 131 } /* seqPointIndex: 131 */,
	{ 30098, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 132 } /* seqPointIndex: 132 */,
	{ 30098, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 133 } /* seqPointIndex: 133 */,
	{ 30098, 4, 200, 200, 72, 73, 0, kSequencePointKind_Normal, 0, 134 } /* seqPointIndex: 134 */,
	{ 30098, 4, 200, 200, 74, 121, 1, kSequencePointKind_Normal, 0, 135 } /* seqPointIndex: 135 */,
	{ 30098, 4, 200, 200, 122, 123, 15, kSequencePointKind_Normal, 0, 136 } /* seqPointIndex: 136 */,
	{ 30098, 4, 200, 200, 74, 121, 5, kSequencePointKind_StepOut, 0, 137 } /* seqPointIndex: 137 */,
	{ 30099, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 138 } /* seqPointIndex: 138 */,
	{ 30099, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 139 } /* seqPointIndex: 139 */,
	{ 30099, 4, 204, 204, 88, 89, 0, kSequencePointKind_Normal, 0, 140 } /* seqPointIndex: 140 */,
	{ 30099, 4, 204, 204, 90, 125, 1, kSequencePointKind_Normal, 0, 141 } /* seqPointIndex: 141 */,
	{ 30099, 4, 204, 204, 126, 162, 18, kSequencePointKind_Normal, 0, 142 } /* seqPointIndex: 142 */,
	{ 30099, 4, 204, 204, 163, 164, 32, kSequencePointKind_Normal, 0, 143 } /* seqPointIndex: 143 */,
	{ 30099, 4, 204, 204, 90, 125, 8, kSequencePointKind_StepOut, 0, 144 } /* seqPointIndex: 144 */,
	{ 30100, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 145 } /* seqPointIndex: 145 */,
	{ 30100, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 146 } /* seqPointIndex: 146 */,
	{ 30100, 4, 206, 206, 100, 101, 0, kSequencePointKind_Normal, 0, 147 } /* seqPointIndex: 147 */,
	{ 30100, 4, 206, 206, 102, 169, 1, kSequencePointKind_Normal, 0, 148 } /* seqPointIndex: 148 */,
	{ 30100, 4, 206, 206, 170, 171, 29, kSequencePointKind_Normal, 0, 149 } /* seqPointIndex: 149 */,
	{ 30100, 4, 206, 206, 102, 169, 19, kSequencePointKind_StepOut, 0, 150 } /* seqPointIndex: 150 */,
	{ 30101, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 151 } /* seqPointIndex: 151 */,
	{ 30101, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 152 } /* seqPointIndex: 152 */,
	{ 30101, 4, 207, 207, 102, 103, 0, kSequencePointKind_Normal, 0, 153 } /* seqPointIndex: 153 */,
	{ 30101, 4, 207, 207, 104, 146, 1, kSequencePointKind_Normal, 0, 154 } /* seqPointIndex: 154 */,
	{ 30101, 4, 207, 207, 147, 183, 18, kSequencePointKind_Normal, 0, 155 } /* seqPointIndex: 155 */,
	{ 30101, 4, 207, 207, 184, 185, 32, kSequencePointKind_Normal, 0, 156 } /* seqPointIndex: 156 */,
	{ 30101, 4, 207, 207, 104, 146, 8, kSequencePointKind_StepOut, 0, 157 } /* seqPointIndex: 157 */,
	{ 30102, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 158 } /* seqPointIndex: 158 */,
	{ 30102, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 159 } /* seqPointIndex: 159 */,
	{ 30102, 4, 80, 80, 48, 49, 0, kSequencePointKind_Normal, 0, 160 } /* seqPointIndex: 160 */,
	{ 30102, 4, 80, 80, 50, 92, 1, kSequencePointKind_Normal, 0, 161 } /* seqPointIndex: 161 */,
	{ 30102, 4, 80, 80, 93, 118, 8, kSequencePointKind_Normal, 0, 162 } /* seqPointIndex: 162 */,
	{ 30102, 4, 80, 80, 119, 137, 19, kSequencePointKind_Normal, 0, 163 } /* seqPointIndex: 163 */,
	{ 30102, 4, 80, 80, 138, 156, 26, kSequencePointKind_Normal, 0, 164 } /* seqPointIndex: 164 */,
	{ 30102, 4, 80, 80, 157, 178, 33, kSequencePointKind_Normal, 0, 165 } /* seqPointIndex: 165 */,
	{ 30102, 4, 80, 80, 179, 204, 44, kSequencePointKind_Normal, 0, 166 } /* seqPointIndex: 166 */,
	{ 30102, 4, 80, 80, 205, 206, 51, kSequencePointKind_Normal, 0, 167 } /* seqPointIndex: 167 */,
	{ 30103, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 168 } /* seqPointIndex: 168 */,
	{ 30103, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 169 } /* seqPointIndex: 169 */,
	{ 30103, 4, 113, 113, 13, 14, 0, kSequencePointKind_Normal, 0, 170 } /* seqPointIndex: 170 */,
	{ 30103, 4, 114, 114, 17, 50, 1, kSequencePointKind_Normal, 0, 171 } /* seqPointIndex: 171 */,
	{ 30103, 4, 115, 115, 13, 14, 10, kSequencePointKind_Normal, 0, 172 } /* seqPointIndex: 172 */,
	{ 30103, 4, 114, 114, 17, 50, 2, kSequencePointKind_StepOut, 0, 173 } /* seqPointIndex: 173 */,
	{ 30104, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 174 } /* seqPointIndex: 174 */,
	{ 30104, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 175 } /* seqPointIndex: 175 */,
	{ 30104, 3, 381, 381, 65, 66, 0, kSequencePointKind_Normal, 0, 176 } /* seqPointIndex: 176 */,
	{ 30104, 3, 381, 381, 67, 101, 1, kSequencePointKind_Normal, 0, 177 } /* seqPointIndex: 177 */,
	{ 30104, 3, 381, 381, 102, 103, 8, kSequencePointKind_Normal, 0, 178 } /* seqPointIndex: 178 */,
};
#else
extern Il2CppSequencePoint g_sequencePointsUnityEngine_ParticleSystemModule[];
Il2CppSequencePoint g_sequencePointsUnityEngine_ParticleSystemModule[1] = { { 0, 0, 0, 0, 0, 0, 0, kSequencePointKind_Normal, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#else
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[] = {
{ "", { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }, //0 
{ "C:\\buildslave\\unity\\build\\Modules\\ParticleSystem\\Managed\\ParticleSystem.deprecated.cs", { 254, 108, 111, 128, 100, 7, 222, 4, 156, 244, 245, 164, 175, 217, 189, 197} }, //1 
{ "C:\\buildslave\\unity\\build\\Modules\\ParticleSystem\\ScriptBindings\\ParticleSystem.bindings.cs", { 48, 130, 228, 125, 103, 187, 86, 15, 221, 190, 1, 235, 123, 214, 59, 20} }, //2 
{ "C:\\buildslave\\unity\\build\\Modules\\ParticleSystem\\ScriptBindings\\ParticleSystemModules.bindings.cs", { 124, 10, 231, 224, 179, 116, 145, 254, 251, 117, 255, 106, 204, 191, 69, 14} }, //3 
{ "C:\\buildslave\\unity\\build\\Modules\\ParticleSystem\\Managed\\ParticleSystemStructs.cs", { 191, 150, 99, 220, 147, 189, 139, 139, 160, 44, 227, 86, 133, 34, 7, 75} }, //4 
};
#else
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[1] = { NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppTypeSourceFilePair g_typeSourceFiles[10] = 
{
	{ 4612, 1 },
	{ 4612, 2 },
	{ 4612, 3 },
	{ 4605, 3 },
	{ 4606, 3 },
	{ 4607, 3 },
	{ 4608, 1 },
	{ 4608, 4 },
	{ 4609, 4 },
	{ 4611, 3 },
};
#else
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodScope g_methodScopes[8] = 
{
	{ 0, 111 },
	{ 0, 15 },
	{ 0, 14 },
	{ 0, 12 },
	{ 0, 12 },
	{ 0, 12 },
	{ 0, 12 },
	{ 0, 12 },
};
#else
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[64] = 
{
	{ 111, 0, 1 } /* System.Void UnityEngine.ParticleSystem::Emit(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single,UnityEngine.Color32) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem::Emit(UnityEngine.ParticleSystem/Particle) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem::SetParticles(UnityEngine.ParticleSystem/Particle[],System.Int32,System.Int32) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem::SetParticles(UnityEngine.ParticleSystem/Particle[],System.Int32) */,
	{ 0, 0, 0 } /* System.Int32 UnityEngine.ParticleSystem::GetParticles(UnityEngine.ParticleSystem/Particle[],System.Int32,System.Int32) */,
	{ 15, 1, 1 } /* System.Int32 UnityEngine.ParticleSystem::GetParticles(UnityEngine.ParticleSystem/Particle[],System.Int32) */,
	{ 14, 2, 1 } /* System.Int32 UnityEngine.ParticleSystem::GetParticles(UnityEngine.ParticleSystem/Particle[]) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem::Emit(System.Int32) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem::Emit_Internal(System.Int32) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem::Emit(UnityEngine.ParticleSystem/EmitParams,System.Int32) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem::EmitOld_Internal(UnityEngine.ParticleSystem/Particle&) */,
	{ 12, 3, 1 } /* UnityEngine.ParticleSystem/MainModule UnityEngine.ParticleSystem::get_main() */,
	{ 12, 4, 1 } /* UnityEngine.ParticleSystem/EmissionModule UnityEngine.ParticleSystem::get_emission() */,
	{ 12, 5, 1 } /* UnityEngine.ParticleSystem/ShapeModule UnityEngine.ParticleSystem::get_shape() */,
	{ 12, 6, 1 } /* UnityEngine.ParticleSystem/NoiseModule UnityEngine.ParticleSystem::get_noise() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem::Emit_Injected(UnityEngine.ParticleSystem/EmitParams&,System.Int32) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem/MainModule::.ctor(UnityEngine.ParticleSystem) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem/MainModule::set_loop(System.Boolean) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem/MainModule::set_simulationSpace(UnityEngine.ParticleSystemSimulationSpace) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem/MainModule::set_playOnAwake(System.Boolean) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem/MainModule::set_maxParticles(System.Int32) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem/MainModule::set_loop_Injected(UnityEngine.ParticleSystem/MainModule&,System.Boolean) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem/MainModule::set_simulationSpace_Injected(UnityEngine.ParticleSystem/MainModule&,UnityEngine.ParticleSystemSimulationSpace) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem/MainModule::set_playOnAwake_Injected(UnityEngine.ParticleSystem/MainModule&,System.Boolean) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem/MainModule::set_maxParticles_Injected(UnityEngine.ParticleSystem/MainModule&,System.Int32) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem/EmissionModule::.ctor(UnityEngine.ParticleSystem) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem/EmissionModule::set_enabled(System.Boolean) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem/EmissionModule::set_rateOverTime(UnityEngine.ParticleSystem/MinMaxCurve) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem/EmissionModule::set_rateOverDistance(UnityEngine.ParticleSystem/MinMaxCurve) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem/EmissionModule::set_enabled_Injected(UnityEngine.ParticleSystem/EmissionModule&,System.Boolean) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem/EmissionModule::set_rateOverTime_Injected(UnityEngine.ParticleSystem/EmissionModule&,UnityEngine.ParticleSystem/MinMaxCurve&) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem/EmissionModule::set_rateOverDistance_Injected(UnityEngine.ParticleSystem/EmissionModule&,UnityEngine.ParticleSystem/MinMaxCurve&) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem/ShapeModule::.ctor(UnityEngine.ParticleSystem) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem/ShapeModule::set_enabled(System.Boolean) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem/ShapeModule::set_enabled_Injected(UnityEngine.ParticleSystem/ShapeModule&,System.Boolean) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem/Particle::set_lifetime(System.Single) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem/Particle::set_position(UnityEngine.Vector3) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem/Particle::set_velocity(UnityEngine.Vector3) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem/Particle::set_remainingLifetime(System.Single) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem/Particle::set_startLifetime(System.Single) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem/Particle::set_startColor(UnityEngine.Color32) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem/Particle::set_randomSeed(System.UInt32) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem/Particle::set_startSize(System.Single) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem/Particle::set_rotation3D(UnityEngine.Vector3) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem/Particle::set_angularVelocity(System.Single) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem/Particle::set_angularVelocity3D(UnityEngine.Vector3) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem/MinMaxCurve::.ctor(System.Single) */,
	{ 12, 7, 1 } /* UnityEngine.ParticleSystem/MinMaxCurve UnityEngine.ParticleSystem/MinMaxCurve::op_Implicit(System.Single) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem/NoiseModule::.ctor(UnityEngine.ParticleSystem) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem/NoiseModule::set_enabled(System.Boolean) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem/NoiseModule::set_strengthX(UnityEngine.ParticleSystem/MinMaxCurve) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem/NoiseModule::set_strengthY(UnityEngine.ParticleSystem/MinMaxCurve) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem/NoiseModule::set_strengthZ(UnityEngine.ParticleSystem/MinMaxCurve) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem/NoiseModule::set_frequency(System.Single) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem/NoiseModule::set_octaveCount(System.Int32) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem/NoiseModule::set_scrollSpeed(UnityEngine.ParticleSystem/MinMaxCurve) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem/NoiseModule::set_enabled_Injected(UnityEngine.ParticleSystem/NoiseModule&,System.Boolean) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem/NoiseModule::set_strengthX_Injected(UnityEngine.ParticleSystem/NoiseModule&,UnityEngine.ParticleSystem/MinMaxCurve&) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem/NoiseModule::set_strengthY_Injected(UnityEngine.ParticleSystem/NoiseModule&,UnityEngine.ParticleSystem/MinMaxCurve&) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem/NoiseModule::set_strengthZ_Injected(UnityEngine.ParticleSystem/NoiseModule&,UnityEngine.ParticleSystem/MinMaxCurve&) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem/NoiseModule::set_frequency_Injected(UnityEngine.ParticleSystem/NoiseModule&,System.Single) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem/NoiseModule::set_octaveCount_Injected(UnityEngine.ParticleSystem/NoiseModule&,System.Int32) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem/NoiseModule::set_scrollSpeed_Injected(UnityEngine.ParticleSystem/NoiseModule&,UnityEngine.ParticleSystem/MinMaxCurve&) */,
	{ 0, 0, 0 } /* System.Int32 UnityEngine.ParticleSystemRenderer::GetMeshes(UnityEngine.Mesh[]) */,
};
#else
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[1] = { { 0, 0, 0 } };
#endif
IL2CPP_EXTERN_C const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnityEngine_ParticleSystemModule;
const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnityEngine_ParticleSystemModule = 
{
	(Il2CppMethodExecutionContextInfo*)g_methodExecutionContextInfos,
	(Il2CppMethodExecutionContextInfoIndex*)g_methodExecutionContextInfoIndexes,
	(Il2CppMethodScope*)g_methodScopes,
	(Il2CppMethodHeaderInfo*)g_methodHeaderInfos,
	(Il2CppSequencePointSourceFile*)g_sequencePointSourceFiles,
	179,
	(Il2CppSequencePoint*)g_sequencePointsUnityEngine_ParticleSystemModule,
	0,
	(Il2CppCatchPoint*)g_catchPoints,
	10,
	(Il2CppTypeSourceFilePair*)g_typeSourceFiles,
	(const char**)g_methodExecutionContextInfoStrings,
};
