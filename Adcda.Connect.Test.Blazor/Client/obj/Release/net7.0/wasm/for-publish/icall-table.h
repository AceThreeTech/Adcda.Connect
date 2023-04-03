#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
178,
183,
184,
185,
186,
187,
188,
189,
191,
192,
240,
241,
243,
265,
266,
267,
278,
279,
280,
281,
354,
355,
356,
359,
388,
389,
391,
393,
395,
397,
402,
410,
411,
412,
413,
414,
415,
416,
417,
418,
521,
529,
532,
534,
539,
540,
542,
543,
547,
548,
550,
551,
554,
555,
556,
559,
562,
564,
566,
627,
629,
631,
640,
641,
642,
644,
650,
651,
652,
653,
654,
662,
663,
664,
668,
669,
671,
673,
858,
999,
1000,
5016,
5017,
5019,
5020,
5021,
5022,
5023,
5025,
5027,
5029,
5030,
5036,
5038,
5044,
5045,
5047,
5049,
5051,
5062,
5071,
5072,
5074,
5075,
5076,
5077,
5078,
5080,
5082,
5981,
5985,
5987,
5988,
5989,
5990,
6097,
6098,
6099,
6100,
6118,
6119,
6120,
6122,
6162,
6213,
6224,
6225,
6226,
6587,
6590,
6591,
6620,
6640,
6646,
6653,
6663,
6666,
6740,
6742,
6755,
6757,
6758,
6759,
6766,
6779,
6799,
6800,
6808,
6810,
6817,
6818,
6821,
6823,
6828,
6834,
6835,
6842,
6844,
6856,
6859,
6860,
6861,
6872,
6881,
6887,
6888,
6889,
6891,
6892,
6910,
6912,
6926,
6949,
6950,
6970,
6994,
6995,
7356,
7357,
7491,
7666,
7667,
7670,
7673,
7723,
8016,
8017,
8696,
8717,
8724,
8726,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementType_raw (int,int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy_raw (int,int,int,int,int,int);
int ves_icall_System_Array_GetLength_raw (int,int,int);
int ves_icall_System_Array_GetLowerBound_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
int ves_icall_System_Array_GetValueImpl_raw (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
int ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
void ves_icall_System_Enum_InternalBoxEnum_raw (int,int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType (int);
void ves_icall_System_Enum_InternalGetUnderlyingType_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_ModF (double,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
void ves_icall_RuntimeType_make_array_type_raw (int,int,int,int);
void ves_icall_RuntimeType_make_byref_type_raw (int,int,int);
void ves_icall_RuntimeType_make_pointer_type_raw (int,int,int);
void ves_icall_RuntimeType_MakeGenericType_raw (int,int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
int ves_icall_System_RuntimeType_CreateInstanceInternal_raw (int,int);
void ves_icall_RuntimeType_GetDeclaringMethod_raw (int,int,int);
void ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetGenericArgumentsInternal_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition (int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetInterfaces_raw (int,int,int);
void ves_icall_RuntimeType_GetDeclaringType_raw (int,int,int);
void ves_icall_RuntimeType_GetName_raw (int,int,int);
void ves_icall_RuntimeType_GetNamespace_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes (int);
int ves_icall_RuntimeTypeHandle_GetMetadataToken_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType (int);
int ves_icall_RuntimeTypeHandle_HasInstantiation (int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetModule_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition (int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
void ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Read_Long (int);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
int ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw (int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
void ves_icall_System_GCHandle_InternalSet_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int mono_object_hash_icall_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw (int,int,int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw (int,int,int,int,int);
void ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
void ves_icall_InvokeClassConstructor_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw (int,int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_AssemblyExtensions_ApplyUpdate (int,int,int,int,int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 178,
ves_icall_System_Array_InternalCreate,
// token 183,
ves_icall_System_Array_GetCorElementTypeOfElementType_raw,
// token 184,
ves_icall_System_Array_CanChangePrimitive,
// token 185,
ves_icall_System_Array_FastCopy_raw,
// token 186,
ves_icall_System_Array_GetLength_raw,
// token 187,
ves_icall_System_Array_GetLowerBound_raw,
// token 188,
ves_icall_System_Array_GetGenericValue_icall,
// token 189,
ves_icall_System_Array_GetValueImpl_raw,
// token 191,
ves_icall_System_Array_SetValueImpl_raw,
// token 192,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 240,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 241,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 243,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 265,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 266,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 267,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 278,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 279,
ves_icall_System_Enum_InternalBoxEnum_raw,
// token 280,
ves_icall_System_Enum_InternalGetCorElementType,
// token 281,
ves_icall_System_Enum_InternalGetUnderlyingType_raw,
// token 354,
ves_icall_System_Environment_get_ProcessorCount,
// token 355,
ves_icall_System_Environment_get_TickCount,
// token 356,
ves_icall_System_Environment_get_TickCount64,
// token 359,
ves_icall_System_Environment_FailFast_raw,
// token 388,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 389,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 391,
ves_icall_System_GC_SuppressFinalize_raw,
// token 393,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 395,
ves_icall_System_GC_GetGCMemoryInfo,
// token 397,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 402,
ves_icall_System_Object_MemberwiseClone_raw,
// token 410,
ves_icall_System_Math_Ceiling,
// token 411,
ves_icall_System_Math_Cos,
// token 412,
ves_icall_System_Math_Floor,
// token 413,
ves_icall_System_Math_Log10,
// token 414,
ves_icall_System_Math_Pow,
// token 415,
ves_icall_System_Math_Sin,
// token 416,
ves_icall_System_Math_Sqrt,
// token 417,
ves_icall_System_Math_Tan,
// token 418,
ves_icall_System_Math_ModF,
// token 521,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 529,
ves_icall_RuntimeType_make_array_type_raw,
// token 532,
ves_icall_RuntimeType_make_byref_type_raw,
// token 534,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 539,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 540,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 542,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 543,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 547,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 548,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 550,
ves_icall_System_RuntimeType_getFullName_raw,
// token 551,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 554,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 555,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 556,
ves_icall_RuntimeType_GetFields_native_raw,
// token 559,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 562,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 564,
ves_icall_RuntimeType_GetName_raw,
// token 566,
ves_icall_RuntimeType_GetNamespace_raw,
// token 627,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 629,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 631,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 640,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 641,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 642,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 644,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 650,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 651,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 652,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 653,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 654,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 662,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 663,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 664,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 668,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 669,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 671,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 673,
ves_icall_System_String_FastAllocateString_raw,
// token 858,
ves_icall_System_Type_internal_from_handle_raw,
// token 999,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1000,
ves_icall_System_ValueType_Equals_raw,
// token 5016,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 5017,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 5019,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 5020,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 5021,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 5022,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 5023,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 5025,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 5027,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 5029,
ves_icall_System_Threading_Interlocked_Read_Long,
// token 5030,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 5036,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 5038,
mono_monitor_exit_icall_raw,
// token 5044,
ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw,
// token 5045,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 5047,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 5049,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 5051,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 5062,
ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw,
// token 5071,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 5072,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 5074,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 5075,
ves_icall_System_Threading_Thread_GetState_raw,
// token 5076,
ves_icall_System_Threading_Thread_SetState_raw,
// token 5077,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 5078,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 5080,
ves_icall_System_Threading_Thread_YieldInternal,
// token 5082,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 5981,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 5985,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 5987,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 5988,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 5989,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 5990,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 6097,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 6098,
ves_icall_System_GCHandle_InternalFree_raw,
// token 6099,
ves_icall_System_GCHandle_InternalGet_raw,
// token 6100,
ves_icall_System_GCHandle_InternalSet_raw,
// token 6118,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 6119,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 6120,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 6122,
ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw,
// token 6162,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 6213,
mono_object_hash_icall_raw,
// token 6224,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 6225,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 6226,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 6587,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 6590,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 6591,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 6620,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 6640,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 6646,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 6653,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 6663,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 6666,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 6740,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 6742,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 6755,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 6757,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 6758,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 6759,
ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw,
// token 6766,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 6779,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 6799,
ves_icall_reflection_get_token_raw,
// token 6800,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 6808,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 6810,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 6817,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 6818,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 6821,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 6823,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 6828,
ves_icall_reflection_get_token_raw,
// token 6834,
ves_icall_get_method_info_raw,
// token 6835,
ves_icall_get_method_attributes,
// token 6842,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 6844,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 6856,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 6859,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 6860,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 6861,
ves_icall_reflection_get_token_raw,
// token 6872,
ves_icall_InternalInvoke_raw,
// token 6881,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 6887,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 6888,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 6889,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 6891,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 6892,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 6910,
ves_icall_InvokeClassConstructor_raw,
// token 6912,
ves_icall_InternalInvoke_raw,
// token 6926,
ves_icall_reflection_get_token_raw,
// token 6949,
ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw,
// token 6950,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 6970,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 6994,
ves_icall_reflection_get_token_raw,
// token 6995,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 7356,
ves_icall_AssemblyExtensions_ApplyUpdate,
// token 7357,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 7491,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 7666,
ves_icall_ModuleBuilder_basic_init_raw,
// token 7667,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 7670,
ves_icall_ModuleBuilder_getToken_raw,
// token 7673,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 7723,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 8016,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 8017,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 8696,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 8717,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 8724,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 8726,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_handles [] = {
0,
1,
0,
1,
1,
1,
0,
1,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
0,
1,
0,
0,
0,
1,
1,
1,
1,
1,
0,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
0,
1,
1,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
};
